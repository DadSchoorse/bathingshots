#pragma once

#include "layer_private.hpp"

namespace nl
{
    VkPipelineLayout createPipelineLayout(LayerDevice* device, VkDescriptorSetLayout layout, uint32_t pushSize);

    VkPipeline createComputePipeline(LayerDevice* device, VkPipelineLayout layout, std::span<uint32_t> shader);
} // namespace nl