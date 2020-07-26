#include "vulkan_image.hpp"

namespace nl
{
    std::vector<VkImageView> createRGBAViews(LayerDevice* device, const std::vector<VkImage>& images, VkFormat format)
    {
        std::vector<VkImageView> imageViews(images.size());

        VkImageViewCreateInfo imageViewCreateInfo;

        imageViewCreateInfo.sType        = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        imageViewCreateInfo.pNext        = nullptr;
        imageViewCreateInfo.flags        = 0;
        imageViewCreateInfo.image        = VK_NULL_HANDLE;
        imageViewCreateInfo.viewType     = VK_IMAGE_VIEW_TYPE_2D;
        imageViewCreateInfo.format       = format;
        imageViewCreateInfo.components.r = VK_COMPONENT_SWIZZLE_IDENTITY;
        imageViewCreateInfo.components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
        imageViewCreateInfo.components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
        imageViewCreateInfo.components.a = VK_COMPONENT_SWIZZLE_IDENTITY;

        imageViewCreateInfo.subresourceRange.aspectMask     = VK_IMAGE_ASPECT_COLOR_BIT;
        imageViewCreateInfo.subresourceRange.baseMipLevel   = 0;
        imageViewCreateInfo.subresourceRange.levelCount     = 1;
        imageViewCreateInfo.subresourceRange.baseArrayLayer = 0;
        imageViewCreateInfo.subresourceRange.layerCount     = 1;

        for (size_t i = 0; i < images.size(); i++)
        {
            imageViewCreateInfo.image = images[i];

            VkResult result = device->vk.CreateImageView(device->device, &imageViewCreateInfo, nullptr, &(imageViews[i]));
            ASSERT_VULKAN(result);
        }

        return imageViews;
    }
} // namespace nl
