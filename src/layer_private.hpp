#pragma once

#include "likely.hpp"
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

    struct LayerDevice
    {
        VulkanDispatchTable  vk             = {};
        VkDevice             device         = VK_NULL_HANDLE;
        VkPhysicalDevice     physicalDevice = VK_NULL_HANDLE;
        LayerInstance*       instance       = nullptr;
        VkPrivateDataSlotEXT dataSlot       = VK_NULL_HANDLE;
    };

    struct DeviceCache
    {
        void*        loaderKey   = nullptr;
        LayerDevice* layerDevice = nullptr;
    };
} // namespace nl
