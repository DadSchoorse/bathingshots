#pragma once

#include "layer_private.hpp"

namespace nl
{
    std::vector<VkImageView> createRGBAViews(LayerDevice* device, const std::vector<VkImage>& images, VkFormat format);
}
