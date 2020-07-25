#include <mutex>
#include <unordered_map>

#include "layer_private.hpp"

#include "generated/vulkan_dispatch_init.hpp"
#include "vulkan_pnext.hpp"

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

        std::lock_guard<std::mutex> l(g_instance_map_mutex);

        LayerInstance* layerInstance = g_instance_map[key];

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

        std::lock_guard<std::mutex> l(g_device_map_mutex);

        LayerDevice* layerDevice = g_device_map[key];

        t_device_cache.loaderKey   = key;
        t_device_cache.layerDevice = layerDevice;

        return layerDevice;
    }

    VkResult VKAPI_CALL nl_CreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance)
    {
        return VK_SUCCESS;
    }

    VkResult VKAPI_CALL nl_CreateDevice(VkPhysicalDevice             physicalDevice,
                                        const VkDeviceCreateInfo*    pCreateInfo,
                                        const VkAllocationCallbacks* pAllocator,
                                        VkDevice*                    pDevice)
    {
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
