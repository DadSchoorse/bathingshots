#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

//Frog
static size_t vksizeof(VkStructureType sType)
{
    switch (sType)
    {
        case VK_STRUCTURE_TYPE_APPLICATION_INFO: return sizeof(VkApplicationInfo);
        case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO: return sizeof(VkInstanceCreateInfo);
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO: return sizeof(VkDeviceQueueCreateInfo);
        case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO: return sizeof(VkDeviceCreateInfo);
        case VK_STRUCTURE_TYPE_SUBMIT_INFO: return sizeof(VkSubmitInfo);
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO: return sizeof(VkMemoryAllocateInfo);
        case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE: return sizeof(VkMappedMemoryRange);
        case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO: return sizeof(VkBindSparseInfo);
        case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO: return sizeof(VkFenceCreateInfo);
        case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO: return sizeof(VkSemaphoreCreateInfo);
        case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO: return sizeof(VkEventCreateInfo);
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO: return sizeof(VkQueryPoolCreateInfo);
        case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO: return sizeof(VkBufferCreateInfo);
        case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO: return sizeof(VkBufferViewCreateInfo);
        case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO: return sizeof(VkImageCreateInfo);
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO: return sizeof(VkImageViewCreateInfo);
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: return sizeof(VkShaderModuleCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO: return sizeof(VkPipelineCacheCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO: return sizeof(VkPipelineShaderStageCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO: return sizeof(VkPipelineVertexInputStateCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO: return sizeof(VkPipelineInputAssemblyStateCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO: return sizeof(VkPipelineTessellationStateCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO: return sizeof(VkPipelineViewportStateCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO: return sizeof(VkPipelineRasterizationStateCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO: return sizeof(VkPipelineMultisampleStateCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO: return sizeof(VkPipelineDepthStencilStateCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO: return sizeof(VkPipelineColorBlendStateCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO: return sizeof(VkPipelineDynamicStateCreateInfo);
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO: return sizeof(VkGraphicsPipelineCreateInfo);
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO: return sizeof(VkComputePipelineCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO: return sizeof(VkPipelineLayoutCreateInfo);
        case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO: return sizeof(VkSamplerCreateInfo);
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO: return sizeof(VkDescriptorSetLayoutCreateInfo);
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO: return sizeof(VkDescriptorPoolCreateInfo);
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO: return sizeof(VkDescriptorSetAllocateInfo);
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET: return sizeof(VkWriteDescriptorSet);
        case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET: return sizeof(VkCopyDescriptorSet);
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO: return sizeof(VkFramebufferCreateInfo);
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO: return sizeof(VkRenderPassCreateInfo);
        case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO: return sizeof(VkCommandPoolCreateInfo);
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO: return sizeof(VkCommandBufferAllocateInfo);
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO: return sizeof(VkCommandBufferInheritanceInfo);
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO: return sizeof(VkCommandBufferBeginInfo);
        case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO: return sizeof(VkRenderPassBeginInfo);
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER: return sizeof(VkBufferMemoryBarrier);
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER: return sizeof(VkImageMemoryBarrier);
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER: return sizeof(VkMemoryBarrier);
        case VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO: return sizeof(VkLayerInstanceCreateInfo);
        case VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO: return sizeof(VkLayerDeviceCreateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: return sizeof(VkPhysicalDeviceVulkan11Features);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES: return sizeof(VkPhysicalDeviceVulkan11Properties);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: return sizeof(VkPhysicalDeviceVulkan12Features);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES: return sizeof(VkPhysicalDeviceVulkan12Properties);
        case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR: return sizeof(VkSwapchainCreateInfoKHR);
        case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR: return sizeof(VkPresentInfoKHR);
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR: return sizeof(VkDisplaySurfaceCreateInfoKHR);
#ifdef VK_USE_PLATFORM_XLIB_KHR
        case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR: return sizeof(VkXlibSurfaceCreateInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
        case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR: return sizeof(VkXcbSurfaceCreateInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
        case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR: return sizeof(VkWaylandSurfaceCreateInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR: return sizeof(VkAndroidSurfaceCreateInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR: return sizeof(VkWin32SurfaceCreateInfoKHR);
#endif
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: return sizeof(VkDebugReportCallbackCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: return sizeof(VkPipelineRasterizationStateRasterizationOrderAMD);
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT: return sizeof(VkDebugMarkerObjectNameInfoEXT);
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT: return sizeof(VkDebugMarkerObjectTagInfoEXT);
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT: return sizeof(VkDebugMarkerMarkerInfoEXT);
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: return sizeof(VkDedicatedAllocationImageCreateInfoNV);
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: return sizeof(VkDedicatedAllocationBufferCreateInfoNV);
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: return sizeof(VkDedicatedAllocationMemoryAllocateInfoNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceTransformFeedbackPropertiesEXT);
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: return sizeof(VkPipelineRasterizationStateStreamCreateInfoEXT);
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX: return sizeof(VkImageViewAddressPropertiesNVX);
        case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD: return sizeof(VkTextureLODGatherFormatPropertiesAMD);
#ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP: return sizeof(VkStreamDescriptorSurfaceCreateInfoGGP);
#endif
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: return sizeof(VkPhysicalDeviceCornerSampledImageFeaturesNV);
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: return sizeof(VkExternalMemoryImageCreateInfoNV);
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: return sizeof(VkExportMemoryAllocateInfoNV);
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: return sizeof(VkExportMemoryWin32HandleInfoNV);
#endif
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: return sizeof(VkValidationFlagsEXT);
#ifdef VK_USE_PLATFORM_VI_NN
        case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN: return sizeof(VkViSurfaceCreateInfoNN);
#endif
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT: return sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT);
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT: return sizeof(VkImageViewASTCDecodeModeEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: return sizeof(VkPhysicalDeviceASTCDecodeFeaturesEXT);
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: return sizeof(VkImportMemoryWin32HandleInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: return sizeof(VkExportMemoryWin32HandleInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR: return sizeof(VkMemoryWin32HandlePropertiesKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR: return sizeof(VkMemoryGetWin32HandleInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: return sizeof(VkImportSemaphoreWin32HandleInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: return sizeof(VkExportSemaphoreWin32HandleInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR: return sizeof(VkD3d12FenceSubmitInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR: return sizeof(VkSemaphoreGetWin32HandleInfoKHR);
#endif
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: return sizeof(VkPhysicalDeviceConditionalRenderingFeaturesEXT);
        case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT: return sizeof(VkConditionalRenderingBeginInfoEXT);
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: return sizeof(VkPresentRegionsKHR);
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: return sizeof(VkPipelineViewportWScalingStateCreateInfoNV);
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT: return sizeof(VkSurfaceCapabilities2EXT);
        case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT: return sizeof(VkDisplayPowerInfoEXT);
        case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT: return sizeof(VkDeviceEventInfoEXT);
        case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT: return sizeof(VkDisplayEventInfoEXT);
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: return sizeof(VkSwapchainCounterCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: return sizeof(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX);
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: return sizeof(VkPipelineViewportSwizzleStateCreateInfoNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceDiscardRectanglePropertiesEXT);
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: return sizeof(VkPipelineDiscardRectangleStateCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceConservativeRasterizationPropertiesEXT);
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: return sizeof(VkPipelineRasterizationConservativeStateCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: return sizeof(VkPipelineRasterizationDepthClipStateCreateInfoEXT);
        case VK_STRUCTURE_TYPE_HDR_METADATA_EXT: return sizeof(VkHdrMetadataEXT);
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: return sizeof(VkSharedPresentSurfaceCapabilitiesKHR);
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR: return sizeof(VkImportFenceWin32HandleInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: return sizeof(VkExportFenceWin32HandleInfoKHR);
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR: return sizeof(VkFenceGetWin32HandleInfoKHR);
#endif
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: return sizeof(VkPhysicalDevicePerformanceQueryPropertiesKHR);
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: return sizeof(VkQueryPoolPerformanceCreateInfoKHR);
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: return sizeof(VkPerformanceQuerySubmitInfoKHR);
        case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR: return sizeof(VkAcquireProfilingLockInfoKHR);
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR: return sizeof(VkPerformanceCounterKHR);
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR: return sizeof(VkPerformanceCounterDescriptionKHR);
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR: return sizeof(VkDisplayModeProperties2KHR);
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR: return sizeof(VkDisplayPlaneInfo2KHR);
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR: return sizeof(VkDisplayPlaneCapabilities2KHR);
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: return sizeof(VkDebugUtilsObjectNameInfoEXT);
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT: return sizeof(VkDebugUtilsObjectTagInfoEXT);
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT: return sizeof(VkDebugUtilsLabelEXT);
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT: return sizeof(VkDebugUtilsMessengerCallbackDataEXT);
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: return sizeof(VkDebugUtilsMessengerCreateInfoEXT);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: return sizeof(VkMemoryGetAndroidHardwareBufferInfoANDROID);
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID: return sizeof(VkExternalFormatANDROID);
#endif
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT: return sizeof(VkPhysicalDeviceInlineUniformBlockFeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceInlineUniformBlockPropertiesEXT);
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT: return sizeof(VkWriteDescriptorSetInlineUniformBlockEXT);
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT: return sizeof(VkDescriptorPoolInlineUniformBlockCreateInfoEXT);
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: return sizeof(VkSampleLocationsInfoEXT);
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: return sizeof(VkRenderPassSampleLocationsBeginInfoEXT);
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: return sizeof(VkPipelineSampleLocationsStateCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceSampleLocationsPropertiesEXT);
        case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT: return sizeof(VkMultisamplePropertiesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: return sizeof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT);
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: return sizeof(VkPipelineColorBlendAdvancedStateCreateInfoEXT);
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_GEOMETRY_TYPE_INFO_KHR: return sizeof(VkAccelerationStructureCreateGeometryTypeInfoKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR: return sizeof(VkAccelerationStructureDeviceAddressInfoKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR: return sizeof(VkAccelerationStructureGeometryAabbsDataKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR: return sizeof(VkAccelerationStructureGeometryInstancesDataKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR: return sizeof(VkAccelerationStructureGeometryTrianglesDataKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR: return sizeof(VkAccelerationStructureGeometryKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_KHR: return sizeof(VkAccelerationStructureMemoryRequirementsInfoKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_KHR: return sizeof(VkAccelerationStructureVersionKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR: return sizeof(VkCopyAccelerationStructureInfoKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR: return sizeof(VkCopyAccelerationStructureToMemoryInfoKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR: return sizeof(VkCopyMemoryToAccelerationStructureInfoKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_FEATURES_KHR: return sizeof(VkPhysicalDeviceRayTracingFeaturesKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_KHR: return sizeof(VkPhysicalDeviceRayTracingPropertiesKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR: return sizeof(VkRayTracingPipelineCreateInfoKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR: return sizeof(VkRayTracingShaderGroupCreateInfoKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR: return sizeof(VkAccelerationStructureCreateInfoKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR: return sizeof(VkRayTracingPipelineInterfaceCreateInfoKHR);
#endif
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: return sizeof(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV);
        case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV: return sizeof(VkGeometryAABBNV);
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: return sizeof(VkFilterCubicImageViewImageFormatPropertiesEXT);
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV: return sizeof(VkAccelerationStructureMemoryRequirementsInfoNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: return sizeof(VkPhysicalDeviceRayTracingPropertiesNV);
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV: return sizeof(VkRayTracingShaderGroupCreateInfoNV);
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV: return sizeof(VkAccelerationStructureInfoNV);
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: return sizeof(VkImportMemoryHostPointerInfoEXT);
        case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT: return sizeof(VkMemoryHostPointerPropertiesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceExternalMemoryHostPropertiesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: return sizeof(VkPhysicalDeviceShaderClockFeaturesKHR);
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: return sizeof(VkPipelineCompilerControlCreateInfoAMD);
        case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT: return sizeof(VkCalibratedTimestampInfoEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: return sizeof(VkPhysicalDeviceShaderCorePropertiesAMD);
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: return sizeof(VkDeviceMemoryOverallocationCreateInfoAMD);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT);
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: return sizeof(VkPipelineVertexInputDivisorStateCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: return sizeof(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: return sizeof(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: return sizeof(VkPhysicalDeviceMeshShaderFeaturesNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: return sizeof(VkPhysicalDeviceMeshShaderPropertiesNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: return sizeof(VkPhysicalDeviceShaderImageFootprintFeaturesNV);
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: return sizeof(VkPipelineViewportExclusiveScissorStateCreateInfoNV);
        case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV: return sizeof(VkCheckpointDataNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: return sizeof(VkPhysicalDeviceExclusiveScissorFeaturesNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: return sizeof(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL);
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL: return sizeof(VkQueryPoolPerformanceQueryCreateInfoINTEL);
        case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL: return sizeof(VkInitializePerformanceApiInfoINTEL);
        case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL: return sizeof(VkPerformanceMarkerInfoINTEL);
        case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL: return sizeof(VkPerformanceStreamMarkerInfoINTEL);
        case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL: return sizeof(VkPerformanceOverrideInfoINTEL);
        case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL: return sizeof(VkPerformanceConfigurationAcquireInfoINTEL);
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT: return sizeof(VkMetalSurfaceCreateInfoEXT);
#endif
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: return sizeof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceFragmentDensityMapPropertiesEXT);
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: return sizeof(VkRenderPassFragmentDensityMapCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceSubgroupSizeControlPropertiesEXT);
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT: return sizeof(VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT: return sizeof(VkPhysicalDeviceSubgroupSizeControlFeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: return sizeof(VkPhysicalDeviceCoherentMemoryFeaturesAMD);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceMemoryBudgetPropertiesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: return sizeof(VkPhysicalDeviceMemoryPriorityFeaturesEXT);
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: return sizeof(VkMemoryPriorityAllocateInfoEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: return sizeof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: return sizeof(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceToolPropertiesEXT);
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: return sizeof(VkBufferDeviceAddressCreateInfoEXT);
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: return sizeof(VkValidationFeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: return sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesNV);
        case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV: return sizeof(VkCooperativeMatrixPropertiesNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: return sizeof(VkPhysicalDeviceCooperativeMatrixPropertiesNV);
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV: return sizeof(VkFramebufferMixedSamplesCombinationNV);
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: return sizeof(VkSurfaceFullScreenExclusiveInfoEXT);
#endif
        case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT: return sizeof(VkHeadlessSurfaceCreateInfoEXT);
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: return sizeof(VkSurfaceCapabilitiesFullScreenExclusiveEXT);
#endif
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: return sizeof(VkPhysicalDeviceLineRasterizationFeaturesEXT);
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: return sizeof(VkPipelineRasterizationLineStateCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceLineRasterizationPropertiesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: return sizeof(VkPhysicalDeviceIndexTypeUint8FeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: return sizeof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT);
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DEFERRED_OPERATION_INFO_KHR: return sizeof(VkDeferredOperationInfoKHR);
#endif
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: return sizeof(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR);
        case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR: return sizeof(VkPipelineInfoKHR);
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR: return sizeof(VkPipelineExecutablePropertiesKHR);
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR: return sizeof(VkPipelineExecutableInfoKHR);
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR: return sizeof(VkPipelineExecutableStatisticKHR);
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR: return sizeof(VkPipelineExecutableInternalRepresentationKHR);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT: return sizeof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: return sizeof(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV);
        case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV: return sizeof(VkGraphicsShaderGroupCreateInfoNV);
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: return sizeof(VkGraphicsPipelineShaderGroupsCreateInfoNV);
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV: return sizeof(VkIndirectCommandsLayoutTokenNV);
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV: return sizeof(VkIndirectCommandsLayoutCreateInfoNV);
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV: return sizeof(VkGeneratedCommandsInfoNV);
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV: return sizeof(VkGeneratedCommandsMemoryRequirementsInfoNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: return sizeof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT: return sizeof(VkPhysicalDeviceRobustness2FeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceRobustness2PropertiesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceCustomBorderColorPropertiesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: return sizeof(VkPhysicalDeviceCustomBorderColorFeaturesEXT);
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: return sizeof(VkPipelineLibraryCreateInfoKHR);
#endif
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT: return sizeof(VkPhysicalDevicePrivateDataFeaturesEXT);
        case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT: return sizeof(VkDevicePrivateDataCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT: return sizeof(VkPrivateDataSlotCreateInfoEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: return sizeof(VkPhysicalDeviceDiagnosticsConfigFeaturesNV);
        case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: return sizeof(VkDeviceDiagnosticsConfigCreateInfoNV);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: return sizeof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT: return sizeof(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT: return sizeof(VkPhysicalDeviceImageRobustnessFeaturesEXT);
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        case VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT: return sizeof(VkDirectFBSurfaceCreateInfoEXT);
#endif
        case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO: return sizeof(VkRenderPassMultiviewCreateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: return sizeof(VkPhysicalDeviceMultiviewFeatures);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES: return sizeof(VkPhysicalDeviceMultiviewProperties);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: return sizeof(VkPhysicalDeviceFeatures2);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2: return sizeof(VkPhysicalDeviceProperties2);
        case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2: return sizeof(VkFormatProperties2);
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2: return sizeof(VkImageFormatProperties2);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2: return sizeof(VkPhysicalDeviceImageFormatInfo2);
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2: return sizeof(VkQueueFamilyProperties2);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2: return sizeof(VkPhysicalDeviceMemoryProperties2);
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2: return sizeof(VkSparseImageFormatProperties2);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2: return sizeof(VkPhysicalDeviceSparseImageFormatInfo2);
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO: return sizeof(VkMemoryAllocateFlagsInfo);
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO: return sizeof(VkDeviceGroupRenderPassBeginInfo);
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO: return sizeof(VkDeviceGroupCommandBufferBeginInfo);
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO: return sizeof(VkDeviceGroupSubmitInfo);
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO: return sizeof(VkDeviceGroupBindSparseInfo);
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR: return sizeof(VkDeviceGroupPresentCapabilitiesKHR);
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: return sizeof(VkImageSwapchainCreateInfoKHR);
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: return sizeof(VkBindImageMemorySwapchainInfoKHR);
        case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR: return sizeof(VkAcquireNextImageInfoKHR);
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: return sizeof(VkDeviceGroupPresentInfoKHR);
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: return sizeof(VkDeviceGroupSwapchainCreateInfoKHR);
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO: return sizeof(VkBindBufferMemoryDeviceGroupInfo);
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO: return sizeof(VkBindImageMemoryDeviceGroupInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: return sizeof(VkPhysicalDeviceShaderDrawParametersFeatures);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES: return sizeof(VkPhysicalDeviceGroupProperties);
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO: return sizeof(VkDeviceGroupDeviceCreateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO: return sizeof(VkPhysicalDeviceExternalImageFormatInfo);
        case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES: return sizeof(VkExternalImageFormatProperties);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO: return sizeof(VkPhysicalDeviceExternalBufferInfo);
        case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES: return sizeof(VkExternalBufferProperties);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES: return sizeof(VkPhysicalDeviceIDProperties);
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO: return sizeof(VkExternalMemoryBufferCreateInfo);
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO: return sizeof(VkExternalMemoryImageCreateInfo);
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO: return sizeof(VkExportMemoryAllocateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO: return sizeof(VkPhysicalDeviceExternalSemaphoreInfo);
        case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES: return sizeof(VkExternalSemaphoreProperties);
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO: return sizeof(VkExportSemaphoreCreateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: return sizeof(VkPhysicalDeviceShaderFloat16Int8Features);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: return sizeof(VkPhysicalDevice16BitStorageFeatures);
        case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO: return sizeof(VkDescriptorUpdateTemplateCreateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES: return sizeof(VkPhysicalDeviceSubgroupProperties);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: return sizeof(VkPhysicalDeviceImagelessFramebufferFeatures);
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO: return sizeof(VkFramebufferAttachmentsCreateInfo);
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO: return sizeof(VkFramebufferAttachmentImageInfo);
        case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO: return sizeof(VkRenderPassAttachmentBeginInfo);
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2: return sizeof(VkAttachmentDescription2);
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2: return sizeof(VkAttachmentReference2);
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2: return sizeof(VkSubpassDescription2);
        case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2: return sizeof(VkSubpassDependency2);
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2: return sizeof(VkRenderPassCreateInfo2);
        case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO: return sizeof(VkSubpassBeginInfo);
        case VK_STRUCTURE_TYPE_SUBPASS_END_INFO: return sizeof(VkSubpassEndInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO: return sizeof(VkPhysicalDeviceExternalFenceInfo);
        case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES: return sizeof(VkExternalFenceProperties);
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO: return sizeof(VkExportFenceCreateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES: return sizeof(VkPhysicalDevicePointClippingProperties);
        case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO: return sizeof(VkRenderPassInputAttachmentAspectCreateInfo);
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO: return sizeof(VkImageViewUsageCreateInfo);
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO: return sizeof(VkPipelineTessellationDomainOriginStateCreateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: return sizeof(VkPhysicalDeviceVariablePointersFeatures);
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS: return sizeof(VkMemoryDedicatedRequirements);
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO: return sizeof(VkMemoryDedicatedAllocateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES: return sizeof(VkPhysicalDeviceSamplerFilterMinmaxProperties);
        case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO: return sizeof(VkSamplerReductionModeCreateInfo);
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO: return sizeof(VkProtectedSubmitInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: return sizeof(VkPhysicalDeviceProtectedMemoryFeatures);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES: return sizeof(VkPhysicalDeviceProtectedMemoryProperties);
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2: return sizeof(VkDeviceQueueInfo2);
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2: return sizeof(VkBufferMemoryRequirementsInfo2);
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2: return sizeof(VkImageMemoryRequirementsInfo2);
        case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2: return sizeof(VkImageSparseMemoryRequirementsInfo2);
        case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2: return sizeof(VkMemoryRequirements2);
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2: return sizeof(VkSparseImageMemoryRequirements2);
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO: return sizeof(VkImageFormatListCreateInfo);
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO: return sizeof(VkSamplerYcbcrConversionCreateInfo);
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO: return sizeof(VkSamplerYcbcrConversionInfo);
        case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO: return sizeof(VkBindImagePlaneMemoryInfo);
        case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO: return sizeof(VkImagePlaneMemoryRequirementsInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: return sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures);
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES: return sizeof(VkSamplerYcbcrConversionImageFormatProperties);
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO: return sizeof(VkBindBufferMemoryInfo);
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO: return sizeof(VkBindImageMemoryInfo);
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO: return sizeof(VkDescriptorSetLayoutBindingFlagsCreateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: return sizeof(VkPhysicalDeviceDescriptorIndexingFeatures);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES: return sizeof(VkPhysicalDeviceDescriptorIndexingProperties);
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO: return sizeof(VkDescriptorSetVariableDescriptorCountAllocateInfo);
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT: return sizeof(VkDescriptorSetVariableDescriptorCountLayoutSupport);
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_KHR: return sizeof(VkBindAccelerationStructureMemoryInfoKHR);
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: return sizeof(VkWriteDescriptorSetAccelerationStructureKHR);
#endif
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES: return sizeof(VkPhysicalDeviceMaintenance3Properties);
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT: return sizeof(VkDescriptorSetLayoutSupport);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: return sizeof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: return sizeof(VkPhysicalDevice8BitStorageFeatures);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: return sizeof(VkPhysicalDeviceShaderAtomicInt64Features);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES: return sizeof(VkPhysicalDeviceDriverProperties);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES: return sizeof(VkPhysicalDeviceFloatControlsProperties);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES: return sizeof(VkPhysicalDeviceDepthStencilResolveProperties);
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE: return sizeof(VkSubpassDescriptionDepthStencilResolve);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: return sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES: return sizeof(VkPhysicalDeviceTimelineSemaphoreProperties);
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO: return sizeof(VkSemaphoreTypeCreateInfo);
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO: return sizeof(VkTimelineSemaphoreSubmitInfo);
        case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO: return sizeof(VkSemaphoreWaitInfo);
        case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO: return sizeof(VkSemaphoreSignalInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: return sizeof(VkPhysicalDeviceVulkanMemoryModelFeatures);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: return sizeof(VkPhysicalDeviceScalarBlockLayoutFeatures);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: return sizeof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures);
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT: return sizeof(VkAttachmentReferenceStencilLayout);
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT: return sizeof(VkAttachmentDescriptionStencilLayout);
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO: return sizeof(VkBufferDeviceAddressInfo);
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO: return sizeof(VkImageStencilUsageCreateInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: return sizeof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: return sizeof(VkPhysicalDeviceBufferDeviceAddressFeatures);
        case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO: return sizeof(VkBufferOpaqueCaptureAddressCreateInfo);
        case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO: return sizeof(VkMemoryOpaqueCaptureAddressAllocateInfo);
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO: return sizeof(VkDeviceMemoryOpaqueCaptureAddressInfo);
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: return sizeof(VkPhysicalDeviceHostQueryResetFeatures);
        default: return 0;
    }
}

#ifdef __cplusplus
}
#endif
