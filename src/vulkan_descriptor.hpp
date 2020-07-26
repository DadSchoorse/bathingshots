#pragma once

#include "layer_private.hpp"

namespace nl
{
    VkDescriptorPool createDescriptorPool(LayerDevice* device, uint32_t count);

    VkDescriptorSetLayout createDescriptorSetLayout(LayerDevice* device);

    std::vector<VkDescriptorSet> allocateDescriptorSets(
        LayerDevice* device, VkDescriptorPool pool, VkDescriptorSetLayout layout, const std::vector<VkImageView>& imageViews, VkBuffer buffer);
} // namespace nl