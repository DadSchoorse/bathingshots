#include <cstring>
#include <mutex>
#include <chrono>
#include <utility>
#include <thread>

#include "layer_private.hpp"

#include "generated/vulkan_dispatch_init.hpp"
#include "vulkan_pnext.hpp"
#include "vulkan_buffer.hpp"
#include "vulkan_descriptor.hpp"
#include "vulkan_image.hpp"
#include "vulkan_pipeline.hpp"

#include "stbi/stb_image_write.h"
#include "keyboard_input.hpp"

#define LAYER_NAME "VK_LAYER_bathingshots"

namespace nl
{
    std::unordered_map<void*, LayerInstance*> g_instance_map;
    std::mutex                                g_instance_map_mutex;
    thread_local InstanceCache                t_instance_cache;

    std::unordered_map<void*, LayerDevice*> g_device_map;
    std::mutex                              g_device_map_mutex;
    thread_local DeviceCache                t_device_cache;

    static inline LayerInstance* getLayerInstance(VkInstance instance)
    {
        void* key = getKey(instance);
        if (likely(t_instance_cache.loaderKey == key))
        {
            return t_instance_cache.layerInstance;
        }

        LayerInstance* layerInstance;

        {
            std::lock_guard<std::mutex> l(g_instance_map_mutex);

            layerInstance = g_instance_map[key];
        }

        t_instance_cache.loaderKey     = key;
        t_instance_cache.layerInstance = layerInstance;

        return layerInstance;
    }

    static inline LayerInstance* getLayerInstance(VkPhysicalDevice physicalDevice)
    {
        return getLayerInstance((VkInstance) physicalDevice);
    }

    static inline LayerDevice* getLayerDevice(VkDevice device)
    {
        void* key = getKey(device);
        if (likely(t_device_cache.loaderKey == key))
        {
            return t_device_cache.layerDevice;
        }

        LayerDevice* layerDevice;

        {
            std::lock_guard<std::mutex> l(g_device_map_mutex);

            layerDevice = g_device_map[key];
        }

        t_device_cache.loaderKey   = key;
        t_device_cache.layerDevice = layerDevice;

        return layerDevice;
    }

    static inline LayerDevice* getLayerDevice(VkQueue queue)
    {
        return getLayerDevice((VkDevice) queue);
    }

    static inline LayerDevice* getLayerDevice(VkCommandBuffer commandBuffer)
    {
        return getLayerDevice((VkCommandBuffer) commandBuffer);
    }

    VkResult VKAPI_CALL nl_CreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance)
    {
        Logger::trace("vkCreateInstance");
        auto layerCreateInfo = pNextSearch<VkLayerInstanceCreateInfo>(pCreateInfo->pNext, [](auto x) { return x->function == VK_LAYER_LINK_INFO; });

        if (layerCreateInfo == nullptr)
            return VK_ERROR_INITIALIZATION_FAILED;

        PFN_vkGetInstanceProcAddr gipa = layerCreateInfo->u.pLayerInfo->pfnNextGetInstanceProcAddr;
        // move chain on for next layer
        layerCreateInfo->u.pLayerInfo   = layerCreateInfo->u.pLayerInfo->pNext;
        PFN_vkCreateInstance createFunc = (PFN_vkCreateInstance) gipa(VK_NULL_HANDLE, "vkCreateInstance");

        VkResult ret = createFunc(pCreateInfo, pAllocator, pInstance);
        if (ret != VK_SUCCESS)
            return ret;

        // create our Instance object and fetch dispatch table
        LayerInstance* layerInstance = new LayerInstance();
        layerInstance->instance      = *pInstance;
        initInstanceTable(gipa, *pInstance, &layerInstance->vk);

        {
            std::lock_guard<std::mutex> l(g_instance_map_mutex);

            g_instance_map[getKey(*pInstance)] = layerInstance;
        }

        return VK_SUCCESS;
    }

    VK_LAYER_EXPORT void VKAPI_CALL nl_DestroyInstance(VkInstance instance, const VkAllocationCallbacks* pAllocator)
    {
        Logger::trace("vkDestroyInstance");

        auto layerInstance = getLayerInstance(instance);
        layerInstance->vk.DestroyInstance(instance, pAllocator);

        {
            std::lock_guard<std::mutex> l(g_instance_map_mutex);

            g_instance_map.erase(getKey(instance));
        }

        delete layerInstance;
    }

    VkResult VKAPI_CALL nl_CreateDevice(VkPhysicalDevice             physicalDevice,
                                        const VkDeviceCreateInfo*    pCreateInfo,
                                        const VkAllocationCallbacks* pAllocator,
                                        VkDevice*                    pDevice)
    {
        Logger::trace("vkCreateDevice");
        auto layerCreateInfo = pNextSearch<VkLayerDeviceCreateInfo>(pCreateInfo->pNext, [](auto x) { return x->function == VK_LAYER_LINK_INFO; });

        if (layerCreateInfo == nullptr)
            return VK_ERROR_INITIALIZATION_FAILED;

        PFN_vkGetInstanceProcAddr gipa = layerCreateInfo->u.pLayerInfo->pfnNextGetInstanceProcAddr;
        PFN_vkGetDeviceProcAddr   gdpa = layerCreateInfo->u.pLayerInfo->pfnNextGetDeviceProcAddr;
        // move chain on for next layer
        layerCreateInfo->u.pLayerInfo = layerCreateInfo->u.pLayerInfo->pNext;

        PFN_vkCreateDevice createFunc = (PFN_vkCreateDevice) gipa(VK_NULL_HANDLE, "vkCreateDevice");

        VkResult ret = createFunc(physicalDevice, pCreateInfo, pAllocator, pDevice);
        if (ret != VK_SUCCESS)
            return ret;

        auto layerInstance = getLayerInstance(physicalDevice);

        LayerDevice* layerDevice = new LayerDevice();

        layerDevice->vk             = layerInstance->vk;
        layerDevice->device         = *pDevice;
        layerDevice->physicalDevice = physicalDevice;
        layerDevice->instance       = layerInstance;

        initDeviceTable(gdpa, *pDevice, &layerDevice->vk);

        layerDevice->descriptorLayout = createDescriptorSetLayout(layerDevice);
        layerDevice->pipelineLayout   = createPipelineLayout(layerDevice, layerDevice->descriptorLayout, sizeof(ImageToBufferCopy));

        static constexpr uint32_t shaderCode[] = {
#include "image2D_to_buffer.comp.h"
        };

        layerDevice->transferPipeline = createComputePipeline(layerDevice, layerDevice->pipelineLayout, std::span<const uint32_t>(shaderCode));

        for (uint32_t i = 0; i < pCreateInfo->queueCreateInfoCount; i++)
        {
            const auto& queueInfo = pCreateInfo->pQueueCreateInfos[i];

            for (uint32_t j = 0; j < queueInfo.queueCount; j++)
            {
                VkQueue queue;
                layerDevice->vk.GetDeviceQueue(layerDevice->device, queueInfo.queueFamilyIndex, j, &queue);

                initializeDispatchTable(queue, layerDevice->device);

                VkCommandPoolCreateInfo commandPoolCreateInfo;

                commandPoolCreateInfo.sType            = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
                commandPoolCreateInfo.pNext            = nullptr;
                commandPoolCreateInfo.flags            = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
                commandPoolCreateInfo.queueFamilyIndex = queueInfo.queueFamilyIndex;

                VkCommandPool commandPool;
                VkResult      result = layerDevice->vk.CreateCommandPool(layerDevice->device, &commandPoolCreateInfo, nullptr, &commandPool);
                ASSERT_VULKAN(result);

                VkCommandBufferAllocateInfo allocInfo;
                allocInfo.sType              = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
                allocInfo.pNext              = nullptr;
                allocInfo.level              = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
                allocInfo.commandPool        = commandPool;
                allocInfo.commandBufferCount = 1;

                VkCommandBuffer commandBuffer;

                result = layerDevice->vk.AllocateCommandBuffers(layerDevice->device, &allocInfo, &commandBuffer);
                ASSERT_VULKAN(result);

                initializeDispatchTable(commandBuffer, layerDevice->device);

                layerDevice->commandPools[queue]   = commandPool;
                layerDevice->commandBuffers[queue] = commandBuffer;
            }
        }

        {
            std::lock_guard<std::mutex> l(g_device_map_mutex);

            g_device_map[getKey(*pDevice)] = layerDevice;
        }

        return VK_SUCCESS;
    }

    void VKAPI_CALL nl_DestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator)
    {
        Logger::trace("vkDestroyDevice");

        auto layerDevice = getLayerDevice(device);

        layerDevice->vk.DestroyDescriptorSetLayout(device, layerDevice->descriptorLayout, nullptr);
        layerDevice->vk.DestroyPipelineLayout(device, layerDevice->pipelineLayout, nullptr);
        layerDevice->vk.DestroyPipeline(device, layerDevice->transferPipeline, nullptr);

        for (auto buffer : layerDevice->commandBuffers)
        {
            layerDevice->vk.FreeCommandBuffers(layerDevice->device, layerDevice->commandPools[buffer.first], 1, &buffer.second);
        }

        for (auto pool : layerDevice->commandPools)
        {
            layerDevice->vk.DestroyCommandPool(layerDevice->device, pool.second, nullptr);
        }

        layerDevice->vk.DestroyDevice(device, pAllocator);

        {
            std::lock_guard<std::mutex> l(g_device_map_mutex);

            g_device_map.erase(getKey(device));
        }

        delete layerDevice;
    }

    VkResult VKAPI_CALL nl_EnumerateInstanceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties)
    {
        if (pPropertyCount)
            *pPropertyCount = 1;

        if (pProperties)
        {
            std::strcpy(pProperties->layerName, LAYER_NAME);
            std::strcpy(pProperties->description, "a screenshot layer");
            pProperties->implementationVersion = 1;
            pProperties->specVersion           = VK_MAKE_VERSION(1, 2, 0);
        }

        return VK_SUCCESS;
    }

    VkResult VKAPI_CALL nl_EnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties)
    {
        return nl_EnumerateInstanceLayerProperties(pPropertyCount, pProperties);
    }

    VkResult VKAPI_CALL nl_EnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties)
    {
        if (pLayerName == NULL || std::strcmp(pLayerName, LAYER_NAME))
        {
            return VK_ERROR_LAYER_NOT_PRESENT;
        }

        // don't expose any extensions
        if (pPropertyCount)
        {
            *pPropertyCount = 0;
        }
        return VK_SUCCESS;
    }

    VkResult VKAPI_CALL nl_EnumerateDeviceExtensionProperties(VkPhysicalDevice       physicalDevice,
                                                              const char*            pLayerName,
                                                              uint32_t*              pPropertyCount,
                                                              VkExtensionProperties* pProperties)
    {
        // pass through any queries that aren't to us
        if (pLayerName == NULL || std::strcmp(pLayerName, LAYER_NAME))
        {
            if (physicalDevice == VK_NULL_HANDLE)
            {
                return VK_SUCCESS;
            }

            auto layerInstance = getLayerInstance(physicalDevice);
            return layerInstance->vk.EnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
        }

        // don't expose any extensions
        if (pPropertyCount)
        {
            *pPropertyCount = 0;
        }
        return VK_SUCCESS;
    }

    VKAPI_ATTR VkResult VKAPI_CALL nl_CreateSwapchainKHR(VkDevice                        device,
                                                         const VkSwapchainCreateInfoKHR* pCreateInfo,
                                                         const VkAllocationCallbacks*    pAllocator,
                                                         VkSwapchainKHR*                 pSwapchain)
    {
        Logger::trace("vkCreateSwapchainKHR");

        auto layerDevice = getLayerDevice(device);

        VkSwapchainCreateInfoKHR modifiedCreateInfo = *pCreateInfo;

        modifiedCreateInfo.imageUsage |= VK_IMAGE_USAGE_SAMPLED_BIT;

        VkResult res = layerDevice->vk.CreateSwapchainKHR(device, &modifiedCreateInfo, pAllocator, pSwapchain);
        if (res != VK_SUCCESS)
            return res;

        LayerSwapchain* layerSwapchain = new LayerSwapchain();

        res = layerDevice->vk.GetSwapchainImagesKHR(device, *pSwapchain, &layerSwapchain->count, nullptr);
        ASSERT_VULKAN(res);

        layerSwapchain->swapchain   = *pSwapchain;
        layerSwapchain->images      = std::vector<VkImage>(layerSwapchain->count);
        layerSwapchain->imageFormat = pCreateInfo->imageFormat;
        layerSwapchain->extent      = pCreateInfo->imageExtent;

        res = layerDevice->vk.GetSwapchainImagesKHR(device, *pSwapchain, &layerSwapchain->count, layerSwapchain->images.data());
        ASSERT_VULKAN(res);

        layerSwapchain->imageViews = createRGBAViews(layerDevice, layerSwapchain->images, layerSwapchain->imageFormat);

        layerSwapchain->pool = createDescriptorPool(layerDevice, layerSwapchain->count);

        uint32_t bufferSize = layerSwapchain->extent.width * layerSwapchain->extent.height * sizeof(uint32_t);

        createBuffer(layerDevice,
                     bufferSize,
                     VK_BUFFER_USAGE_STORAGE_BUFFER_BIT,
                     VK_MEMORY_PROPERTY_HOST_CACHED_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, // TODO only require cached
                     layerSwapchain->buffer,
                     layerSwapchain->bufferMemory);

        layerSwapchain->descriptorSets = allocateDescriptorSets(
            layerDevice, layerSwapchain->pool, layerDevice->descriptorLayout, layerSwapchain->imageViews, layerSwapchain->buffer);

        VkFenceCreateInfo fenceCreateInfo = {VK_STRUCTURE_TYPE_FENCE_CREATE_INFO, nullptr, 0};

        res = layerDevice->vk.CreateFence(layerDevice->device, &fenceCreateInfo, nullptr, &layerSwapchain->fence);
        ASSERT_VULKAN(res);

        VkSemaphoreCreateInfo semaphoreCreateInfo = {VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO, nullptr, 0};

        res = layerDevice->vk.CreateSemaphore(layerDevice->device, &semaphoreCreateInfo, nullptr, &layerSwapchain->semaphore);
        ASSERT_VULKAN(res);

        layerDevice->swapchains[*pSwapchain] = std::move(layerSwapchain); // TODO AAAAAAAAAAAAAAAAAA

        return VK_SUCCESS;
    }

    VKAPI_ATTR void VKAPI_CALL nl_DestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator)
    {
        Logger::trace("vkDestroySwapchainKHR");

        auto layerDevice = getLayerDevice(device);

        LayerSwapchain* layerSwapchain = layerDevice->swapchains[swapchain]; // TODO AAAAAAAAAAAAAAAAAAAAAAA
        layerDevice->swapchains.erase(swapchain);

        while (layerSwapchain->lock.load())
            continue;

        for (auto view : layerSwapchain->imageViews)
        {
            layerDevice->vk.DestroyImageView(device, view, nullptr);
        }
        layerDevice->vk.DestroyDescriptorPool(device, layerSwapchain->pool, nullptr);
        layerDevice->vk.DestroyBuffer(device, layerSwapchain->buffer, nullptr);
        layerDevice->vk.FreeMemory(device, layerSwapchain->bufferMemory, nullptr);
        layerDevice->vk.DestroyFence(device, layerSwapchain->fence, nullptr);
        layerDevice->vk.DestroySemaphore(device, layerSwapchain->semaphore, nullptr);

        layerDevice->vk.DestroySwapchainKHR(device, swapchain, nullptr);

        delete layerSwapchain;
    }

    VKAPI_ATTR VkResult VKAPI_CALL nl_QueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo)
    {
        auto layerDevice = getLayerDevice(queue);

        static uint32_t keySymbol = convertToKeySym("End");

        static bool pressed    = false;
        bool        screenshot = false;

        if (unlikely(isKeyPressed(keySymbol)))
        {
            if (!pressed)
            {
                screenshot = true;
                pressed    = true;
            }
        }
        else
        {
            pressed = false;
        }

        if (screenshot)
        {
            assert(pPresentInfo->swapchainCount == 1);
            LayerSwapchain* layerSwapchain = layerDevice->swapchains[pPresentInfo->pSwapchains[0]]; // TODO AAAAAAAAAAAAAAAAAAAAAAA

            unsigned int trash = 0;
            if (!layerSwapchain->lock.compare_exchange_strong(trash, 1))
                goto BUSY;

            uint32_t index = pPresentInfo->pImageIndices[0];

            auto commandBuffer = layerDevice->commandBuffers[queue];

            layerDevice->vk.ResetCommandBuffer(commandBuffer, 0);

            VkCommandBufferBeginInfo beginInfo;
            beginInfo.sType            = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
            beginInfo.pNext            = nullptr;
            beginInfo.flags            = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
            beginInfo.pInheritanceInfo = nullptr;

            layerDevice->vk.BeginCommandBuffer(commandBuffer, &beginInfo);

            ImageToBufferCopy copy;
            copy.imageExtentx    = layerSwapchain->extent.width;
            copy.imageExtenty    = layerSwapchain->extent.height;
            copy.imageOffsetx    = 0;
            copy.imageOffsety    = 0;
            copy.mipLevel        = 0;
            copy.bufferOffset    = 0;
            copy.bufferRowLength = layerSwapchain->extent.width;

            layerDevice->vk.CmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_COMPUTE, layerDevice->transferPipeline);

            layerDevice->vk.CmdBindDescriptorSets(
                commandBuffer, VK_PIPELINE_BIND_POINT_COMPUTE, layerDevice->pipelineLayout, 0, 1, &layerSwapchain->descriptorSets[index], 0, 0);

            layerDevice->vk.CmdPushConstants(commandBuffer, layerDevice->pipelineLayout, VK_SHADER_STAGE_ALL, 0, sizeof(copy), (void*) &copy);

            VkImageMemoryBarrier memoryBarrier;
            memoryBarrier.sType               = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
            memoryBarrier.pNext               = nullptr;
            memoryBarrier.oldLayout           = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
            memoryBarrier.newLayout           = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            memoryBarrier.image               = layerSwapchain->images[index];
            memoryBarrier.srcAccessMask       = 0;
            memoryBarrier.dstAccessMask       = VK_ACCESS_SHADER_READ_BIT;
            memoryBarrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            memoryBarrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;

            memoryBarrier.subresourceRange.aspectMask     = VK_IMAGE_ASPECT_COLOR_BIT;
            memoryBarrier.subresourceRange.baseMipLevel   = 0;
            memoryBarrier.subresourceRange.levelCount     = 1;
            memoryBarrier.subresourceRange.baseArrayLayer = 0;
            memoryBarrier.subresourceRange.layerCount     = 1;

            layerDevice->vk.CmdPipelineBarrier(
                commandBuffer, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0, 0, nullptr, 0, nullptr, 1, &memoryBarrier);

            layerDevice->vk.CmdDispatch(commandBuffer, layerSwapchain->extent.width / 8 + 1, layerSwapchain->extent.height / 8 + 1, 1);

            memoryBarrier.oldLayout     = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            memoryBarrier.newLayout     = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
            memoryBarrier.srcAccessMask = VK_ACCESS_SHADER_WRITE_BIT;
            memoryBarrier.dstAccessMask = 0;

            VkMemoryBarrier bufferBarrier;
            bufferBarrier.sType         = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
            bufferBarrier.pNext         = nullptr;
            bufferBarrier.srcAccessMask = VK_ACCESS_SHADER_WRITE_BIT;
            bufferBarrier.dstAccessMask = VK_ACCESS_HOST_READ_BIT;

            layerDevice->vk.CmdPipelineBarrier(commandBuffer,
                                               VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
                                               VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                               0,
                                               1,
                                               &bufferBarrier,
                                               0,
                                               nullptr,
                                               1,
                                               &memoryBarrier);

            layerDevice->vk.EndCommandBuffer(commandBuffer);

            std::vector<VkPipelineStageFlags> waitStages(pPresentInfo->waitSemaphoreCount, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT);

            VkSubmitInfo submitInfo         = {};
            submitInfo.sType                = VK_STRUCTURE_TYPE_SUBMIT_INFO;
            submitInfo.waitSemaphoreCount   = pPresentInfo->waitSemaphoreCount;
            submitInfo.pWaitSemaphores      = pPresentInfo->pWaitSemaphores;
            submitInfo.pWaitDstStageMask    = waitStages.data();
            submitInfo.commandBufferCount   = 1;
            submitInfo.pCommandBuffers      = &commandBuffer;
            submitInfo.signalSemaphoreCount = 1;
            submitInfo.pSignalSemaphores    = &layerSwapchain->semaphore;

            std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();

            layerDevice->vk.QueueSubmit(queue, 1, &submitInfo, layerSwapchain->fence);

            auto convertToPNG = [layerDevice, layerSwapchain, start]() {
                layerDevice->vk.WaitForFences(layerDevice->device, 1, &layerSwapchain->fence, VK_TRUE, ~0LLU);

                std::chrono::time_point<std::chrono::high_resolution_clock> blit = std::chrono::high_resolution_clock::now();

                layerDevice->vk.ResetFences(layerDevice->device, 1, &layerSwapchain->fence);

                VkResult result;
                uint32_t bufferSize = layerSwapchain->extent.width * layerSwapchain->extent.height * sizeof(uint32_t);
                void*    data;
                result = layerDevice->vk.MapMemory(layerDevice->device, layerSwapchain->bufferMemory, 0, bufferSize, 0, &data);
                ASSERT_VULKAN(result);

                // TODO invalidate memory here?

                stbi_write_png(
                    "/tmp/screenshot.png", layerSwapchain->extent.width, layerSwapchain->extent.height, 4, data, layerSwapchain->extent.width * 4);
                layerDevice->vk.UnmapMemory(layerDevice->device, layerSwapchain->bufferMemory);

                std::chrono::time_point<std::chrono::high_resolution_clock> end = std::chrono::high_resolution_clock::now();
                Logger::err("finished saving");

                std::chrono::duration<float, std::micro> micro_seconds = blit - start;
                float                                    gputime       = micro_seconds.count();

                micro_seconds = end - blit;
                float cputime = micro_seconds.count();
                Logger::err(std::to_string(gputime) + "µs shader vs " + std::to_string(cputime) + "µs cpu time");

                layerSwapchain->lock.store(0);
            };

            std::thread(convertToPNG).detach();

            VkPresentInfoKHR modPresentInfo   = *pPresentInfo;
            modPresentInfo.waitSemaphoreCount = 1;
            modPresentInfo.pWaitSemaphores    = &layerSwapchain->semaphore;

            return layerDevice->vk.QueuePresentKHR(queue, &modPresentInfo);
        }
    BUSY:

        return layerDevice->vk.QueuePresentKHR(queue, pPresentInfo);
    }
} // namespace nl

extern "C"
{
    VK_LAYER_EXPORT PFN_vkVoidFunction VKAPI_CALL nl_GetDeviceProcAddr(VkDevice device, const char* pName);
    VK_LAYER_EXPORT PFN_vkVoidFunction VKAPI_CALL nl_GetInstanceProcAddr(VkInstance instance, const char* pName);

#define GETPROCADDR(func)                \
    if (!std::strcmp(pName, "vk" #func)) \
        return (PFN_vkVoidFunction) &nl_##func;

#define INTERCEPT_CALLS                                \
    /* instance chain functions we intercept */        \
    GETPROCADDR(GetInstanceProcAddr);                  \
    GETPROCADDR(EnumerateInstanceLayerProperties);     \
    GETPROCADDR(EnumerateInstanceExtensionProperties); \
    GETPROCADDR(CreateInstance);                       \
    GETPROCADDR(DestroyInstance);                      \
                                                       \
    /* device chain functions we intercept*/           \
    GETPROCADDR(GetDeviceProcAddr);                    \
    GETPROCADDR(EnumerateDeviceLayerProperties);       \
    GETPROCADDR(EnumerateDeviceExtensionProperties);   \
    GETPROCADDR(CreateDevice);                         \
    GETPROCADDR(DestroyDevice);                        \
    GETPROCADDR(CreateSwapchainKHR);                   \
    GETPROCADDR(DestroySwapchainKHR);                  \
    GETPROCADDR(QueuePresentKHR);

    VK_LAYER_EXPORT PFN_vkVoidFunction VKAPI_CALL nl_GetDeviceProcAddr(VkDevice device, const char* pName)
    {
        using namespace nl;
        INTERCEPT_CALLS;

        auto layerDevice = getLayerDevice(device);
        return layerDevice->vk.GetDeviceProcAddr(device, pName);
    }

    VK_LAYER_EXPORT PFN_vkVoidFunction VKAPI_CALL nl_GetInstanceProcAddr(VkInstance instance, const char* pName)
    {
        using namespace nl;
        INTERCEPT_CALLS;

        auto layerInstance = getLayerInstance(instance);
        return layerInstance->vk.GetInstanceProcAddr(instance, pName);
    }

#undef GETPROCADDR
#undef INTERCEPT_CALLS
}
