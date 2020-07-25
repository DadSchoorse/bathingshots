#include <cstring>
#include <mutex>
#include <unordered_map>

#include "layer_private.hpp"
#include "logger.hpp"

#include "generated/vulkan_dispatch_init.hpp"
#include "vulkan_pnext.hpp"

#define LAYER_NAME "VK_LAYER_new_layer"

namespace nl
{
    std::unordered_map<void*, LayerInstance*> g_instance_map;
    std::mutex                                g_instance_map_mutex;
    thread_local InstanceCache                t_instance_cache;

    std::unordered_map<void*, LayerDevice*> g_device_map;
    std::mutex                              g_device_map_mutex;
    thread_local DeviceCache                t_device_cache;

    static inline LayerInstance* getLayerInstance(void* key)
    {
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

    static inline LayerDevice* getLayerDevice(void* key)
    {
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

        auto layerInstance = getLayerInstance(getKey(instance));
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

        auto layerInstance = getLayerInstance(getKey(physicalDevice));

        LayerDevice* layerDevice = new LayerDevice();

        layerDevice->vk             = layerInstance->vk;
        layerDevice->device         = *pDevice;
        layerDevice->physicalDevice = physicalDevice;
        layerDevice->instance       = layerInstance;

        initDeviceTable(gdpa, *pDevice, &layerDevice->vk);

        {
            std::lock_guard<std::mutex> l(g_device_map_mutex);

            g_device_map[getKey(*pDevice)] = layerDevice;
        }

        return VK_SUCCESS;
    }

    void VKAPI_CALL nl_DestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator)
    {
        Logger::trace("vkDestroyDevice");

        auto layerDevice = getLayerDevice(getKey(device));
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
            std::strcpy(pProperties->description, "test");
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

            auto layerInstance = getLayerInstance(getKey(physicalDevice));
            return layerInstance->vk.EnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
        }

        // don't expose any extensions
        if (pPropertyCount)
        {
            *pPropertyCount = 0;
        }
        return VK_SUCCESS;
    }
} // namespace nl

extern "C"
{
    VK_LAYER_EXPORT PFN_vkVoidFunction VKAPI_CALL newlayer_GetDeviceProcAddr(VkDevice device, const char* pName)
    {
        using namespace nl;
        return (PFN_vkVoidFunction) nl_CreateDevice;
    }

    VK_LAYER_EXPORT PFN_vkVoidFunction VKAPI_CALL newlayer_GetInstanceProcAddr(VkInstance instance, const char* pName)
    {
        using namespace nl;
        return (PFN_vkVoidFunction) nl_CreateInstance;
    }
}
