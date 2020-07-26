#pragma once

#include "layer_private.hpp"

namespace nl
{
    void createBuffer(LayerDevice*          device,
                      VkDeviceSize          size,
                      VkBufferUsageFlags    usage,
                      VkMemoryPropertyFlags properties,
                      VkBuffer&             buffer,
                      VkDeviceMemory&       bufferMemory);
}
