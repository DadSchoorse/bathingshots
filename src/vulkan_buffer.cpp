#include "vulkan_buffer.hpp"

namespace nl
{
    static inline uint32_t findMemoryTypeIndex(LayerDevice* device, uint32_t typeFilter, VkMemoryPropertyFlags properties)
    {
        VkPhysicalDeviceMemoryProperties physicalDeviceMemoryProperties;
        device->vk.GetPhysicalDeviceMemoryProperties(device->physicalDevice, &physicalDeviceMemoryProperties);
        for (uint32_t i = 0; i < physicalDeviceMemoryProperties.memoryTypeCount; i++)
        {
            if ((typeFilter & (1 << i)) && (physicalDeviceMemoryProperties.memoryTypes[i].propertyFlags & properties) == properties)
            {
                return i;
            }
        }

        Logger::err("Found no correct memory type");
        return 0x70AD;
    }

    void createBuffer(LayerDevice*          device,
                      VkDeviceSize          size,
                      VkBufferUsageFlags    usage,
                      VkMemoryPropertyFlags properties,
                      VkBuffer&             buffer,
                      VkDeviceMemory&       bufferMemory)
    {
        VkBufferCreateInfo bufferInfo = {};

        bufferInfo.sType       = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
        bufferInfo.size        = size;
        bufferInfo.usage       = usage;
        bufferInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

        VkResult result = device->vk.CreateBuffer(device->device, &bufferInfo, nullptr, &buffer);
        ASSERT_VULKAN(result);

        VkMemoryRequirements memRequirements;
        device->vk.GetBufferMemoryRequirements(device->device, buffer, &memRequirements);

        VkMemoryAllocateInfo allocInfo = {};

        allocInfo.sType           = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
        allocInfo.allocationSize  = memRequirements.size;
        allocInfo.memoryTypeIndex = findMemoryTypeIndex(device, memRequirements.memoryTypeBits, properties);

        result = device->vk.AllocateMemory(device->device, &allocInfo, nullptr, &bufferMemory);
        ASSERT_VULKAN(result);

        result = device->vk.BindBufferMemory(device->device, buffer, bufferMemory, 0);
        ASSERT_VULKAN(result);
    }

} // namespace nl
