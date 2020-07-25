#pragma once

#include <type_traits>

//Frog generated
template <typename T>
constexpr VkStructureType sTypeFromStruct()
{
    if constexpr (std::is_same<T, VkApplicationInfo>::value)
    {
        return VK_STRUCTURE_TYPE_APPLICATION_INFO;
    }
    if constexpr (std::is_same<T, VkInstanceCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkDeviceQueueCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkDeviceCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkSubmitInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SUBMIT_INFO;
    }
    if constexpr (std::is_same<T, VkMemoryAllocateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    }
    if constexpr (std::is_same<T, VkMappedMemoryRange>::value)
    {
        return VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
    }
    if constexpr (std::is_same<T, VkBindSparseInfo>::value)
    {
        return VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;
    }
    if constexpr (std::is_same<T, VkFenceCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkSemaphoreCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkEventCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkQueryPoolCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkBufferCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkBufferViewCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkImageCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkImageViewCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkShaderModuleCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineCacheCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineShaderStageCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineVertexInputStateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineInputAssemblyStateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineTessellationStateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineViewportStateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineRasterizationStateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineMultisampleStateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineDepthStencilStateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineColorBlendStateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineDynamicStateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkGraphicsPipelineCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkComputePipelineCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineLayoutCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkSamplerCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkDescriptorSetLayoutCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkDescriptorPoolCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkDescriptorSetAllocateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
    }
    if constexpr (std::is_same<T, VkWriteDescriptorSet>::value)
    {
        return VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    }
    if constexpr (std::is_same<T, VkCopyDescriptorSet>::value)
    {
        return VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;
    }
    if constexpr (std::is_same<T, VkFramebufferCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkRenderPassCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkCommandPoolCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkCommandBufferAllocateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    }
    if constexpr (std::is_same<T, VkCommandBufferInheritanceInfo>::value)
    {
        return VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
    }
    if constexpr (std::is_same<T, VkCommandBufferBeginInfo>::value)
    {
        return VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    }
    if constexpr (std::is_same<T, VkRenderPassBeginInfo>::value)
    {
        return VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    }
    if constexpr (std::is_same<T, VkBufferMemoryBarrier>::value)
    {
        return VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
    }
    if constexpr (std::is_same<T, VkImageMemoryBarrier>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    }
    if constexpr (std::is_same<T, VkMemoryBarrier>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    }
    if constexpr (std::is_same<T, VkLayerInstanceCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkLayerDeviceCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceVulkan11Features>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceVulkan11Properties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceVulkan12Features>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceVulkan12Properties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkSwapchainCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkPresentInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkDisplaySurfaceCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR;
    }
#ifdef VK_USE_PLATFORM_XLIB_KHR
    if constexpr (std::is_same<T, VkXlibSurfaceCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    if constexpr (std::is_same<T, VkXcbSurfaceCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    if constexpr (std::is_same<T, VkWaylandSurfaceCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same<T, VkAndroidSurfaceCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkWin32SurfaceCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
    }
#endif
    if constexpr (std::is_same<T, VkDebugReportCallbackCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPipelineRasterizationStateRasterizationOrderAMD>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;
    }
    if constexpr (std::is_same<T, VkDebugMarkerObjectNameInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkDebugMarkerObjectTagInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkDebugMarkerMarkerInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkDedicatedAllocationImageCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkDedicatedAllocationBufferCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkDedicatedAllocationMemoryAllocateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceTransformFeedbackPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPipelineRasterizationStateStreamCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkImageViewAddressPropertiesNVX>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX;
    }
    if constexpr (std::is_same<T, VkTextureLODGatherFormatPropertiesAMD>::value)
    {
        return VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD;
    }
#ifdef VK_USE_PLATFORM_GGP
    if constexpr (std::is_same<T, VkStreamDescriptorSurfaceCreateInfoGGP>::value)
    {
        return VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP;
    }
#endif
    if constexpr (std::is_same<T, VkPhysicalDeviceCornerSampledImageFeaturesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;
    }
    if constexpr (std::is_same<T, VkExternalMemoryImageCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkExportMemoryAllocateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkExportMemoryWin32HandleInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV;
    }
#endif
    if constexpr (std::is_same<T, VkValidationFlagsEXT>::value)
    {
        return VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
    }
#ifdef VK_USE_PLATFORM_VI_NN
    if constexpr (std::is_same<T, VkViSurfaceCreateInfoNN>::value)
    {
        return VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN;
    }
#endif
    if constexpr (std::is_same<T, VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkImageViewASTCDecodeModeEXT>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceASTCDecodeFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkImportMemoryWin32HandleInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkExportMemoryWin32HandleInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkMemoryWin32HandlePropertiesKHR>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkMemoryGetWin32HandleInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkImportSemaphoreWin32HandleInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkExportSemaphoreWin32HandleInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkD3d12FenceSubmitInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkSemaphoreGetWin32HandleInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR;
    }
#endif
    if constexpr (std::is_same<T, VkPhysicalDeviceConditionalRenderingFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkConditionalRenderingBeginInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPresentRegionsKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR;
    }
    if constexpr (std::is_same<T, VkPipelineViewportWScalingStateCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkSurfaceCapabilities2EXT>::value)
    {
        return VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT;
    }
    if constexpr (std::is_same<T, VkDisplayPowerInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkDeviceEventInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkDisplayEventInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkSwapchainCounterCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;
    }
    if constexpr (std::is_same<T, VkPipelineViewportSwizzleStateCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceDiscardRectanglePropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPipelineDiscardRectangleStateCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceConservativeRasterizationPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPipelineRasterizationConservativeStateCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPipelineRasterizationDepthClipStateCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkHdrMetadataEXT>::value)
    {
        return VK_STRUCTURE_TYPE_HDR_METADATA_EXT;
    }
    if constexpr (std::is_same<T, VkSharedPresentSurfaceCapabilitiesKHR>::value)
    {
        return VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkImportFenceWin32HandleInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkExportFenceWin32HandleInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR;
    }
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkFenceGetWin32HandleInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR;
    }
#endif
    if constexpr (std::is_same<T, VkPhysicalDevicePerformanceQueryPropertiesKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR;
    }
    if constexpr (std::is_same<T, VkQueryPoolPerformanceCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkPerformanceQuerySubmitInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkAcquireProfilingLockInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkPerformanceCounterKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR;
    }
    if constexpr (std::is_same<T, VkPerformanceCounterDescriptionKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR;
    }
    if constexpr (std::is_same<T, VkDisplayModeProperties2KHR>::value)
    {
        return VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR;
    }
    if constexpr (std::is_same<T, VkDisplayPlaneInfo2KHR>::value)
    {
        return VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR;
    }
    if constexpr (std::is_same<T, VkDisplayPlaneCapabilities2KHR>::value)
    {
        return VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR;
    }
    if constexpr (std::is_same<T, VkDebugUtilsObjectNameInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkDebugUtilsObjectTagInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkDebugUtilsLabelEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT;
    }
    if constexpr (std::is_same<T, VkDebugUtilsMessengerCallbackDataEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;
    }
    if constexpr (std::is_same<T, VkDebugUtilsMessengerCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
    }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same<T, VkMemoryGetAndroidHardwareBufferInfoANDROID>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
    }
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same<T, VkExternalFormatANDROID>::value)
    {
        return VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID;
    }
#endif
    if constexpr (std::is_same<T, VkPhysicalDeviceInlineUniformBlockFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceInlineUniformBlockPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkWriteDescriptorSetInlineUniformBlockEXT>::value)
    {
        return VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT;
    }
    if constexpr (std::is_same<T, VkDescriptorPoolInlineUniformBlockCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkSampleLocationsInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkRenderPassSampleLocationsBeginInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPipelineSampleLocationsStateCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceSampleLocationsPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkMultisamplePropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPipelineColorBlendAdvancedStateCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT;
    }
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkAccelerationStructureCreateGeometryTypeInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_GEOMETRY_TYPE_INFO_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkAccelerationStructureDeviceAddressInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkAccelerationStructureGeometryAabbsDataKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkAccelerationStructureGeometryInstancesDataKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkAccelerationStructureGeometryTrianglesDataKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkAccelerationStructureGeometryKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkAccelerationStructureMemoryRequirementsInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkAccelerationStructureVersionKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkCopyAccelerationStructureInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkCopyAccelerationStructureToMemoryInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkCopyMemoryToAccelerationStructureInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkPhysicalDeviceRayTracingFeaturesKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_FEATURES_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkPhysicalDeviceRayTracingPropertiesKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkRayTracingPipelineCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkRayTracingShaderGroupCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkAccelerationStructureCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkRayTracingPipelineInterfaceCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR;
    }
#endif
    if constexpr (std::is_same<T, VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkGeometryAABBNV>::value)
    {
        return VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV;
    }
    if constexpr (std::is_same<T, VkFilterCubicImageViewImageFormatPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkAccelerationStructureMemoryRequirementsInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceRayTracingPropertiesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV;
    }
    if constexpr (std::is_same<T, VkRayTracingShaderGroupCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkAccelerationStructureInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkImportMemoryHostPointerInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkMemoryHostPointerPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceExternalMemoryHostPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceShaderClockFeaturesKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR;
    }
    if constexpr (std::is_same<T, VkPipelineCompilerControlCreateInfoAMD>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD;
    }
    if constexpr (std::is_same<T, VkCalibratedTimestampInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceShaderCorePropertiesAMD>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;
    }
    if constexpr (std::is_same<T, VkDeviceMemoryOverallocationCreateInfoAMD>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPipelineVertexInputDivisorStateCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceMeshShaderFeaturesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceMeshShaderPropertiesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceShaderImageFootprintFeaturesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;
    }
    if constexpr (std::is_same<T, VkPipelineViewportExclusiveScissorStateCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkCheckpointDataNV>::value)
    {
        return VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceExclusiveScissorFeaturesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL;
    }
    if constexpr (std::is_same<T, VkQueryPoolPerformanceQueryCreateInfoINTEL>::value)
    {
        return VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL;
    }
    if constexpr (std::is_same<T, VkInitializePerformanceApiInfoINTEL>::value)
    {
        return VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL;
    }
    if constexpr (std::is_same<T, VkPerformanceMarkerInfoINTEL>::value)
    {
        return VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL;
    }
    if constexpr (std::is_same<T, VkPerformanceStreamMarkerInfoINTEL>::value)
    {
        return VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL;
    }
    if constexpr (std::is_same<T, VkPerformanceOverrideInfoINTEL>::value)
    {
        return VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL;
    }
    if constexpr (std::is_same<T, VkPerformanceConfigurationAcquireInfoINTEL>::value)
    {
        return VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL;
    }
#ifdef VK_USE_PLATFORM_METAL_EXT
    if constexpr (std::is_same<T, VkMetalSurfaceCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT;
    }
#endif
    if constexpr (std::is_same<T, VkPhysicalDeviceFragmentDensityMapFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceFragmentDensityMapPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkRenderPassFragmentDensityMapCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceCoherentMemoryFeaturesAMD>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceMemoryBudgetPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceMemoryPriorityFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkMemoryPriorityAllocateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceToolPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkBufferDeviceAddressCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkValidationFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceCooperativeMatrixFeaturesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV;
    }
    if constexpr (std::is_same<T, VkCooperativeMatrixPropertiesNV>::value)
    {
        return VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceCooperativeMatrixPropertiesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV;
    }
    if constexpr (std::is_same<T, VkFramebufferMixedSamplesCombinationNV>::value)
    {
        return VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkSurfaceFullScreenExclusiveInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT;
    }
#endif
    if constexpr (std::is_same<T, VkHeadlessSurfaceCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same<T, VkSurfaceCapabilitiesFullScreenExclusiveEXT>::value)
    {
        return VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT;
    }
#endif
    if constexpr (std::is_same<T, VkPhysicalDeviceLineRasterizationFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPipelineRasterizationLineStateCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceLineRasterizationPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceIndexTypeUint8FeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT;
    }
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkDeferredOperationInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_DEFERRED_OPERATION_INFO_KHR;
    }
#endif
    if constexpr (std::is_same<T, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR;
    }
    if constexpr (std::is_same<T, VkPipelineInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkPipelineExecutablePropertiesKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR;
    }
    if constexpr (std::is_same<T, VkPipelineExecutableInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkPipelineExecutableStatisticKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR;
    }
    if constexpr (std::is_same<T, VkPipelineExecutableInternalRepresentationKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV;
    }
    if constexpr (std::is_same<T, VkGraphicsShaderGroupCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkGraphicsPipelineShaderGroupsCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkIndirectCommandsLayoutTokenNV>::value)
    {
        return VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV;
    }
    if constexpr (std::is_same<T, VkIndirectCommandsLayoutCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkGeneratedCommandsInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV;
    }
    if constexpr (std::is_same<T, VkGeneratedCommandsMemoryRequirementsInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceRobustness2FeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceRobustness2PropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceCustomBorderColorPropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceCustomBorderColorFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT;
    }
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkPipelineLibraryCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR;
    }
#endif
    if constexpr (std::is_same<T, VkPhysicalDevicePrivateDataFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkDevicePrivateDataCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPrivateDataSlotCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceDiagnosticsConfigFeaturesNV>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV;
    }
    if constexpr (std::is_same<T, VkDeviceDiagnosticsConfigCreateInfoNV>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceImageRobustnessFeaturesEXT>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT;
    }
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    if constexpr (std::is_same<T, VkDirectFBSurfaceCreateInfoEXT>::value)
    {
        return VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT;
    }
#endif
    if constexpr (std::is_same<T, VkRenderPassMultiviewCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceMultiviewFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceMultiviewProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceFeatures2>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceProperties2>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
    }
    if constexpr (std::is_same<T, VkFormatProperties2>::value)
    {
        return VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2;
    }
    if constexpr (std::is_same<T, VkImageFormatProperties2>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceImageFormatInfo2>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;
    }
    if constexpr (std::is_same<T, VkQueueFamilyProperties2>::value)
    {
        return VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceMemoryProperties2>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;
    }
    if constexpr (std::is_same<T, VkSparseImageFormatProperties2>::value)
    {
        return VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceSparseImageFormatInfo2>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;
    }
    if constexpr (std::is_same<T, VkMemoryAllocateFlagsInfo>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO;
    }
    if constexpr (std::is_same<T, VkDeviceGroupRenderPassBeginInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO;
    }
    if constexpr (std::is_same<T, VkDeviceGroupCommandBufferBeginInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;
    }
    if constexpr (std::is_same<T, VkDeviceGroupSubmitInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO;
    }
    if constexpr (std::is_same<T, VkDeviceGroupBindSparseInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO;
    }
    if constexpr (std::is_same<T, VkDeviceGroupPresentCapabilitiesKHR>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;
    }
    if constexpr (std::is_same<T, VkImageSwapchainCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkBindImageMemorySwapchainInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkAcquireNextImageInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkDeviceGroupPresentInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkDeviceGroupSwapchainCreateInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;
    }
    if constexpr (std::is_same<T, VkBindBufferMemoryDeviceGroupInfo>::value)
    {
        return VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;
    }
    if constexpr (std::is_same<T, VkBindImageMemoryDeviceGroupInfo>::value)
    {
        return VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceShaderDrawParametersFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceGroupProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkDeviceGroupDeviceCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceExternalImageFormatInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO;
    }
    if constexpr (std::is_same<T, VkExternalImageFormatProperties>::value)
    {
        return VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceExternalBufferInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO;
    }
    if constexpr (std::is_same<T, VkExternalBufferProperties>::value)
    {
        return VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceIDProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkExternalMemoryBufferCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkExternalMemoryImageCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkExportMemoryAllocateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceExternalSemaphoreInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;
    }
    if constexpr (std::is_same<T, VkExternalSemaphoreProperties>::value)
    {
        return VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkExportSemaphoreCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceShaderFloat16Int8Features>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDevice16BitStorageFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
    }
    if constexpr (std::is_same<T, VkDescriptorUpdateTemplateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceSubgroupProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceImagelessFramebufferFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES;
    }
    if constexpr (std::is_same<T, VkFramebufferAttachmentsCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkFramebufferAttachmentImageInfo>::value)
    {
        return VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO;
    }
    if constexpr (std::is_same<T, VkRenderPassAttachmentBeginInfo>::value)
    {
        return VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO;
    }
    if constexpr (std::is_same<T, VkAttachmentDescription2>::value)
    {
        return VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2;
    }
    if constexpr (std::is_same<T, VkAttachmentReference2>::value)
    {
        return VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2;
    }
    if constexpr (std::is_same<T, VkSubpassDescription2>::value)
    {
        return VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2;
    }
    if constexpr (std::is_same<T, VkSubpassDependency2>::value)
    {
        return VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2;
    }
    if constexpr (std::is_same<T, VkRenderPassCreateInfo2>::value)
    {
        return VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2;
    }
    if constexpr (std::is_same<T, VkSubpassBeginInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO;
    }
    if constexpr (std::is_same<T, VkSubpassEndInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SUBPASS_END_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceExternalFenceInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO;
    }
    if constexpr (std::is_same<T, VkExternalFenceProperties>::value)
    {
        return VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkExportFenceCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDevicePointClippingProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkRenderPassInputAttachmentAspectCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkImageViewUsageCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPipelineTessellationDomainOriginStateCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceVariablePointersFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES;
    }
    if constexpr (std::is_same<T, VkMemoryDedicatedRequirements>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;
    }
    if constexpr (std::is_same<T, VkMemoryDedicatedAllocateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceSamplerFilterMinmaxProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkSamplerReductionModeCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkProtectedSubmitInfo>::value)
    {
        return VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceProtectedMemoryFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceProtectedMemoryProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkDeviceQueueInfo2>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2;
    }
    if constexpr (std::is_same<T, VkBufferMemoryRequirementsInfo2>::value)
    {
        return VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2;
    }
    if constexpr (std::is_same<T, VkImageMemoryRequirementsInfo2>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2;
    }
    if constexpr (std::is_same<T, VkImageSparseMemoryRequirementsInfo2>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;
    }
    if constexpr (std::is_same<T, VkMemoryRequirements2>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
    }
    if constexpr (std::is_same<T, VkSparseImageMemoryRequirements2>::value)
    {
        return VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2;
    }
    if constexpr (std::is_same<T, VkImageFormatListCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkSamplerYcbcrConversionCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkSamplerYcbcrConversionInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO;
    }
    if constexpr (std::is_same<T, VkBindImagePlaneMemoryInfo>::value)
    {
        return VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO;
    }
    if constexpr (std::is_same<T, VkImagePlaneMemoryRequirementsInfo>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceSamplerYcbcrConversionFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
    }
    if constexpr (std::is_same<T, VkSamplerYcbcrConversionImageFormatProperties>::value)
    {
        return VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkBindBufferMemoryInfo>::value)
    {
        return VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO;
    }
    if constexpr (std::is_same<T, VkBindImageMemoryInfo>::value)
    {
        return VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO;
    }
    if constexpr (std::is_same<T, VkDescriptorSetLayoutBindingFlagsCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceDescriptorIndexingFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceDescriptorIndexingProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkDescriptorSetVariableDescriptorCountAllocateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO;
    }
    if constexpr (std::is_same<T, VkDescriptorSetVariableDescriptorCountLayoutSupport>::value)
    {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT;
    }
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkBindAccelerationStructureMemoryInfoKHR>::value)
    {
        return VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_KHR;
    }
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same<T, VkWriteDescriptorSetAccelerationStructureKHR>::value)
    {
        return VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR;
    }
#endif
    if constexpr (std::is_same<T, VkPhysicalDeviceMaintenance3Properties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkDescriptorSetLayoutSupport>::value)
    {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDevice8BitStorageFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceShaderAtomicInt64Features>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceDriverProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceFloatControlsProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceDepthStencilResolveProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkSubpassDescriptionDepthStencilResolve>::value)
    {
        return VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceTimelineSemaphoreFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceTimelineSemaphoreProperties>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES;
    }
    if constexpr (std::is_same<T, VkSemaphoreTypeCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkTimelineSemaphoreSubmitInfo>::value)
    {
        return VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO;
    }
    if constexpr (std::is_same<T, VkSemaphoreWaitInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO;
    }
    if constexpr (std::is_same<T, VkSemaphoreSignalInfo>::value)
    {
        return VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceVulkanMemoryModelFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceScalarBlockLayoutFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES;
    }
    if constexpr (std::is_same<T, VkAttachmentReferenceStencilLayout>::value)
    {
        return VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT;
    }
    if constexpr (std::is_same<T, VkAttachmentDescriptionStencilLayout>::value)
    {
        return VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT;
    }
    if constexpr (std::is_same<T, VkBufferDeviceAddressInfo>::value)
    {
        return VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
    }
    if constexpr (std::is_same<T, VkImageStencilUsageCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceUniformBufferStandardLayoutFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceBufferDeviceAddressFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES;
    }
    if constexpr (std::is_same<T, VkBufferOpaqueCaptureAddressCreateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO;
    }
    if constexpr (std::is_same<T, VkMemoryOpaqueCaptureAddressAllocateInfo>::value)
    {
        return VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO;
    }
    if constexpr (std::is_same<T, VkDeviceMemoryOpaqueCaptureAddressInfo>::value)
    {
        return VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO;
    }
    if constexpr (std::is_same<T, VkPhysicalDeviceHostQueryResetFeatures>::value)
    {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES;
    }

    return (VkStructureType) -1;
}
