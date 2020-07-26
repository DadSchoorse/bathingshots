#include "vulkan_descriptor.hpp"

namespace nl
{
    VkDescriptorPool createDescriptorPool(LayerDevice* device, uint32_t count)
    {
        std::vector<VkDescriptorPoolSize> poolSizes = {{VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, count}, {VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, count}};

        VkDescriptorPoolCreateInfo descriptorPoolCreateInfo;
        descriptorPoolCreateInfo.sType         = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
        descriptorPoolCreateInfo.pNext         = nullptr;
        descriptorPoolCreateInfo.flags         = 0;
        descriptorPoolCreateInfo.maxSets       = count;
        descriptorPoolCreateInfo.poolSizeCount = poolSizes.size();
        descriptorPoolCreateInfo.pPoolSizes    = poolSizes.data();

        VkDescriptorPool descriptorPool;

        VkResult result = device->vk.CreateDescriptorPool(device->device, &descriptorPoolCreateInfo, nullptr, &descriptorPool);
        ASSERT_VULKAN(result);
        return descriptorPool;
    }

    VkDescriptorSetLayout createDescriptorSetLayout(LayerDevice* device)
    {
        VkDescriptorSetLayout descriptorSetLayout;

        VkDescriptorSetLayoutBinding bufferBinding;
        bufferBinding.binding            = 0;
        bufferBinding.descriptorType     = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
        bufferBinding.descriptorCount    = 1;
        bufferBinding.stageFlags         = VK_SHADER_STAGE_COMPUTE_BIT;
        bufferBinding.pImmutableSamplers = nullptr;

        VkDescriptorSetLayoutBinding imageBinding;
        imageBinding.binding            = 1;
        imageBinding.descriptorType     = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
        imageBinding.descriptorCount    = 1;
        imageBinding.stageFlags         = VK_SHADER_STAGE_COMPUTE_BIT;
        imageBinding.pImmutableSamplers = nullptr;

        std::vector<VkDescriptorSetLayoutBinding> descriptorSetLayoutBindings = {bufferBinding, imageBinding};

        VkDescriptorSetLayoutCreateInfo descriptorSetCreateInfo;
        descriptorSetCreateInfo.sType        = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
        descriptorSetCreateInfo.pNext        = nullptr;
        descriptorSetCreateInfo.flags        = 0;
        descriptorSetCreateInfo.bindingCount = descriptorSetLayoutBindings.size();
        descriptorSetCreateInfo.pBindings    = descriptorSetLayoutBindings.data();

        VkResult result = device->vk.CreateDescriptorSetLayout(device->device, &descriptorSetCreateInfo, nullptr, &descriptorSetLayout);
        ASSERT_VULKAN(result)

        return descriptorSetLayout;
    }

    std::vector<VkDescriptorSet> allocateDescriptorSets(
        LayerDevice* device, VkDescriptorPool pool, VkDescriptorSetLayout layout, const std::vector<VkImageView>& imageViews, VkBuffer buffer)
    {
        std::vector<VkDescriptorSet> descriptorSets(imageViews.size());

        std::vector<VkDescriptorSetLayout> layouts(descriptorSets.size(), layout);

        VkDescriptorSetAllocateInfo descriptorSetAllocateInfo;
        descriptorSetAllocateInfo.sType              = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
        descriptorSetAllocateInfo.pNext              = nullptr;
        descriptorSetAllocateInfo.descriptorPool     = pool;
        descriptorSetAllocateInfo.descriptorSetCount = descriptorSets.size();
        descriptorSetAllocateInfo.pSetLayouts        = layouts.data();

        VkResult result = device->vk.AllocateDescriptorSets(device->device, &descriptorSetAllocateInfo, descriptorSets.data());
        ASSERT_VULKAN(result);

        for (uint32_t i = 0; i < imageViews.size(); i++)
        {
            VkDescriptorBufferInfo            bufferInfo = {buffer, 0, VK_WHOLE_SIZE};
            std::vector<VkWriteDescriptorSet> writeDescriptorSet(2);

            writeDescriptorSet[0].sType            = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            writeDescriptorSet[0].pNext            = nullptr;
            writeDescriptorSet[0].dstSet           = descriptorSets[i];
            writeDescriptorSet[0].dstBinding       = 0;
            writeDescriptorSet[0].dstArrayElement  = 0;
            writeDescriptorSet[0].descriptorCount  = 1;
            writeDescriptorSet[0].descriptorType   = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
            writeDescriptorSet[0].pImageInfo       = nullptr;
            writeDescriptorSet[0].pBufferInfo      = &bufferInfo;
            writeDescriptorSet[0].pTexelBufferView = nullptr;

            VkDescriptorImageInfo imageInfo = {VK_NULL_HANDLE, imageViews[i], VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};

            writeDescriptorSet[1].sType            = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            writeDescriptorSet[1].pNext            = nullptr;
            writeDescriptorSet[1].dstSet           = descriptorSets[i];
            writeDescriptorSet[1].dstBinding       = 1;
            writeDescriptorSet[1].dstArrayElement  = 0;
            writeDescriptorSet[1].descriptorCount  = 1;
            writeDescriptorSet[1].descriptorType   = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
            writeDescriptorSet[1].pImageInfo       = &imageInfo;
            writeDescriptorSet[1].pBufferInfo      = nullptr;
            writeDescriptorSet[1].pTexelBufferView = nullptr;

            device->vk.UpdateDescriptorSets(device->device, writeDescriptorSet.size(), writeDescriptorSet.data(), 0, nullptr);
        }
        return descriptorSets;
    }
} // namespace nl