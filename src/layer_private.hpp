#pragma once

#include <atomic>
#include <span>
#include <vector>
#include <unordered_map>

#include "likely.hpp"
#include "logger.hpp"
#include "vulkan_include.hpp"

namespace nl
{
#define MAKE_GET_KEY(T)               \
    static inline void* getKey(T obj) \
    {                                 \
        return *(void**) obj;         \
    }
    MAKE_GET_KEY(VkInstance);
    MAKE_GET_KEY(VkPhysicalDevice);
    MAKE_GET_KEY(VkDevice);
    MAKE_GET_KEY(VkQueue);
    MAKE_GET_KEY(VkCommandBuffer);
#undef MAKE_GET_KEY

    struct LayerInstance
    {
        VulkanDispatchTable vk       = {};
        VkInstance          instance = VK_NULL_HANDLE;
    };

    struct InstanceCache
    {
        void*          loaderKey     = nullptr;
        LayerInstance* layerInstance = nullptr;
    };

    struct LayerSwapchain
    {
        VkSwapchainKHR               swapchain;
        std::vector<VkImage>         images;
        std::vector<VkImageView>     imageViews;
        VkFormat                     imageFormat;
        VkExtent2D                   extent;
        uint32_t                     count;
        VkBuffer                     buffer;
        VkDeviceMemory               bufferMemory;
        VkDescriptorPool             pool;
        std::vector<VkDescriptorSet> descriptorSets;
        VkFence                      fence;
        VkSemaphore                  semaphore;
        std::atomic_uint             lock = 0;
    };

    struct LayerDevice
    {
        VulkanDispatchTable                          vk             = {};
        VkDevice                                     device         = VK_NULL_HANDLE;
        VkPhysicalDevice                             physicalDevice = VK_NULL_HANDLE;
        LayerInstance*                               instance       = nullptr;
        VkPrivateDataSlotEXT                         dataSlot       = VK_NULL_HANDLE;
        std::unordered_map<VkQueue, VkCommandPool>   commandPools;
        std::unordered_map<VkQueue, VkCommandBuffer> commandBuffers;
        VkDescriptorSetLayout                        descriptorLayout;
        VkPipelineLayout                             pipelineLayout;
        VkPipeline                                   transferPipeline;
    };

    struct DeviceCache
    {
        void*        loaderKey   = nullptr;
        LayerDevice* layerDevice = nullptr;
    };

    struct ImageToBufferCopy
    {
        uint32_t imageExtentx;
        uint32_t imageExtenty;
        uint32_t imageOffsetx;
        uint32_t imageOffsety;
        int32_t  mipLevel;
        uint32_t bufferOffset;
        uint32_t bufferRowLength;
    };

#define MAKE_INIT_DISPATCH_TABLE(TARGET, SOURCE)                                           \
    inline void initializeDispatchTable(TARGET dispatchableObject, SOURCE source)          \
    {                                                                                      \
        *reinterpret_cast<void**>(dispatchableObject) = *reinterpret_cast<void**>(source); \
    }
    MAKE_INIT_DISPATCH_TABLE(VkPhysicalDevice, VkInstance);
    MAKE_INIT_DISPATCH_TABLE(VkQueue, VkDevice);
    MAKE_INIT_DISPATCH_TABLE(VkCommandBuffer, VkDevice);
#undef MAKE_INIT_DISPATCH_TABLE
} // namespace nl
