#include "vulkan_pipeline.hpp"

namespace nl
{
    VkPipelineLayout createPipelineLayout(LayerDevice* device, VkDescriptorSetLayout layout, uint32_t pushSize)
    {
        VkPushConstantRange pushConstantRange;
        pushConstantRange.stageFlags = VK_SHADER_STAGE_ALL;
        pushConstantRange.offset     = 0;
        pushConstantRange.size       = pushSize;

        VkPipelineLayoutCreateInfo pipelineLayoutCreateInfo;
        pipelineLayoutCreateInfo.sType                  = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
        pipelineLayoutCreateInfo.pNext                  = nullptr;
        pipelineLayoutCreateInfo.flags                  = 0;
        pipelineLayoutCreateInfo.setLayoutCount         = 1;
        pipelineLayoutCreateInfo.pSetLayouts            = &layout;
        pipelineLayoutCreateInfo.pushConstantRangeCount = 1;
        pipelineLayoutCreateInfo.pPushConstantRanges    = &pushConstantRange;

        VkPipelineLayout pipelineLayout;
        VkResult         result = device->vk.CreatePipelineLayout(device->device, &pipelineLayoutCreateInfo, nullptr, &pipelineLayout);
        ASSERT_VULKAN(result);
        return pipelineLayout;
    }

    VkPipeline createComputePipeline(LayerDevice* device, VkPipelineLayout layout, std::span<const uint32_t> shader)
    {
        VkShaderModule shaderModule;

        VkShaderModuleCreateInfo shaderCreateInfo;

        shaderCreateInfo.sType    = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
        shaderCreateInfo.pNext    = nullptr;
        shaderCreateInfo.flags    = 0;
        shaderCreateInfo.codeSize = shader.size_bytes();
        shaderCreateInfo.pCode    = shader.data();

        VkResult result = device->vk.CreateShaderModule(device->device, &shaderCreateInfo, nullptr, &shaderModule);
        ASSERT_VULKAN(result);

        VkPipelineShaderStageCreateInfo stageCreateInfo;

        stageCreateInfo.sType               = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
        stageCreateInfo.pNext               = nullptr;
        stageCreateInfo.flags               = 0;
        stageCreateInfo.stage               = VK_SHADER_STAGE_COMPUTE_BIT;
        stageCreateInfo.module              = shaderModule;
        stageCreateInfo.pName               = "main";
        stageCreateInfo.pSpecializationInfo = nullptr; // TODO

        VkComputePipelineCreateInfo pipelineCreateInfo;

        pipelineCreateInfo.sType              = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
        pipelineCreateInfo.pNext              = nullptr;
        pipelineCreateInfo.flags              = 0;
        pipelineCreateInfo.stage              = stageCreateInfo;
        pipelineCreateInfo.layout             = layout;
        pipelineCreateInfo.basePipelineHandle = VK_NULL_HANDLE;
        pipelineCreateInfo.basePipelineIndex  = 0;

        VkPipeline pipeline;
        result = device->vk.CreateComputePipelines(device->device, VK_NULL_HANDLE, 1, &pipelineCreateInfo, nullptr, &pipeline);
        ASSERT_VULKAN(result);

        device->vk.DestroyShaderModule(device->device, shaderModule, nullptr);
        return pipeline;
    }
} // namespace nl