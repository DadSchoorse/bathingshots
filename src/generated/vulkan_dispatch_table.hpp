#pragma once

//Frog generated
struct VulkanDispatchTable
{
    PFN_vkDestroyInstance DestroyInstance = nullptr;
    PFN_vkEnumeratePhysicalDevices EnumeratePhysicalDevices = nullptr;
    PFN_vkGetDeviceProcAddr GetDeviceProcAddr = nullptr;
    PFN_vkGetInstanceProcAddr GetInstanceProcAddr = nullptr;
    PFN_vkGetPhysicalDeviceProperties GetPhysicalDeviceProperties = nullptr;
    PFN_vkGetPhysicalDeviceQueueFamilyProperties GetPhysicalDeviceQueueFamilyProperties = nullptr;
    PFN_vkGetPhysicalDeviceMemoryProperties GetPhysicalDeviceMemoryProperties = nullptr;
    PFN_vkGetPhysicalDeviceFeatures GetPhysicalDeviceFeatures = nullptr;
    PFN_vkGetPhysicalDeviceFormatProperties GetPhysicalDeviceFormatProperties = nullptr;
    PFN_vkGetPhysicalDeviceImageFormatProperties GetPhysicalDeviceImageFormatProperties = nullptr;
    PFN_vkCreateDevice CreateDevice = nullptr;
    PFN_vkDestroyDevice DestroyDevice = nullptr;
    PFN_vkEnumerateDeviceLayerProperties EnumerateDeviceLayerProperties = nullptr;
    PFN_vkEnumerateDeviceExtensionProperties EnumerateDeviceExtensionProperties = nullptr;
    PFN_vkGetDeviceQueue GetDeviceQueue = nullptr;
    PFN_vkQueueSubmit QueueSubmit = nullptr;
    PFN_vkQueueWaitIdle QueueWaitIdle = nullptr;
    PFN_vkDeviceWaitIdle DeviceWaitIdle = nullptr;
    PFN_vkAllocateMemory AllocateMemory = nullptr;
    PFN_vkFreeMemory FreeMemory = nullptr;
    PFN_vkMapMemory MapMemory = nullptr;
    PFN_vkUnmapMemory UnmapMemory = nullptr;
    PFN_vkFlushMappedMemoryRanges FlushMappedMemoryRanges = nullptr;
    PFN_vkInvalidateMappedMemoryRanges InvalidateMappedMemoryRanges = nullptr;
    PFN_vkGetDeviceMemoryCommitment GetDeviceMemoryCommitment = nullptr;
    PFN_vkGetBufferMemoryRequirements GetBufferMemoryRequirements = nullptr;
    PFN_vkBindBufferMemory BindBufferMemory = nullptr;
    PFN_vkGetImageMemoryRequirements GetImageMemoryRequirements = nullptr;
    PFN_vkBindImageMemory BindImageMemory = nullptr;
    PFN_vkGetImageSparseMemoryRequirements GetImageSparseMemoryRequirements = nullptr;
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties GetPhysicalDeviceSparseImageFormatProperties = nullptr;
    PFN_vkQueueBindSparse QueueBindSparse = nullptr;
    PFN_vkCreateFence CreateFence = nullptr;
    PFN_vkDestroyFence DestroyFence = nullptr;
    PFN_vkResetFences ResetFences = nullptr;
    PFN_vkGetFenceStatus GetFenceStatus = nullptr;
    PFN_vkWaitForFences WaitForFences = nullptr;
    PFN_vkCreateSemaphore CreateSemaphore = nullptr;
    PFN_vkDestroySemaphore DestroySemaphore = nullptr;
    PFN_vkCreateEvent CreateEvent = nullptr;
    PFN_vkDestroyEvent DestroyEvent = nullptr;
    PFN_vkGetEventStatus GetEventStatus = nullptr;
    PFN_vkSetEvent SetEvent = nullptr;
    PFN_vkResetEvent ResetEvent = nullptr;
    PFN_vkCreateQueryPool CreateQueryPool = nullptr;
    PFN_vkDestroyQueryPool DestroyQueryPool = nullptr;
    PFN_vkGetQueryPoolResults GetQueryPoolResults = nullptr;
    PFN_vkResetQueryPool ResetQueryPool = nullptr;
    PFN_vkCreateBuffer CreateBuffer = nullptr;
    PFN_vkDestroyBuffer DestroyBuffer = nullptr;
    PFN_vkCreateBufferView CreateBufferView = nullptr;
    PFN_vkDestroyBufferView DestroyBufferView = nullptr;
    PFN_vkCreateImage CreateImage = nullptr;
    PFN_vkDestroyImage DestroyImage = nullptr;
    PFN_vkGetImageSubresourceLayout GetImageSubresourceLayout = nullptr;
    PFN_vkCreateImageView CreateImageView = nullptr;
    PFN_vkDestroyImageView DestroyImageView = nullptr;
    PFN_vkCreateShaderModule CreateShaderModule = nullptr;
    PFN_vkDestroyShaderModule DestroyShaderModule = nullptr;
    PFN_vkCreatePipelineCache CreatePipelineCache = nullptr;
    PFN_vkDestroyPipelineCache DestroyPipelineCache = nullptr;
    PFN_vkGetPipelineCacheData GetPipelineCacheData = nullptr;
    PFN_vkMergePipelineCaches MergePipelineCaches = nullptr;
    PFN_vkCreateGraphicsPipelines CreateGraphicsPipelines = nullptr;
    PFN_vkCreateComputePipelines CreateComputePipelines = nullptr;
    PFN_vkDestroyPipeline DestroyPipeline = nullptr;
    PFN_vkCreatePipelineLayout CreatePipelineLayout = nullptr;
    PFN_vkDestroyPipelineLayout DestroyPipelineLayout = nullptr;
    PFN_vkCreateSampler CreateSampler = nullptr;
    PFN_vkDestroySampler DestroySampler = nullptr;
    PFN_vkCreateDescriptorSetLayout CreateDescriptorSetLayout = nullptr;
    PFN_vkDestroyDescriptorSetLayout DestroyDescriptorSetLayout = nullptr;
    PFN_vkCreateDescriptorPool CreateDescriptorPool = nullptr;
    PFN_vkDestroyDescriptorPool DestroyDescriptorPool = nullptr;
    PFN_vkResetDescriptorPool ResetDescriptorPool = nullptr;
    PFN_vkAllocateDescriptorSets AllocateDescriptorSets = nullptr;
    PFN_vkFreeDescriptorSets FreeDescriptorSets = nullptr;
    PFN_vkUpdateDescriptorSets UpdateDescriptorSets = nullptr;
    PFN_vkCreateFramebuffer CreateFramebuffer = nullptr;
    PFN_vkDestroyFramebuffer DestroyFramebuffer = nullptr;
    PFN_vkCreateRenderPass CreateRenderPass = nullptr;
    PFN_vkDestroyRenderPass DestroyRenderPass = nullptr;
    PFN_vkGetRenderAreaGranularity GetRenderAreaGranularity = nullptr;
    PFN_vkCreateCommandPool CreateCommandPool = nullptr;
    PFN_vkDestroyCommandPool DestroyCommandPool = nullptr;
    PFN_vkResetCommandPool ResetCommandPool = nullptr;
    PFN_vkAllocateCommandBuffers AllocateCommandBuffers = nullptr;
    PFN_vkFreeCommandBuffers FreeCommandBuffers = nullptr;
    PFN_vkBeginCommandBuffer BeginCommandBuffer = nullptr;
    PFN_vkEndCommandBuffer EndCommandBuffer = nullptr;
    PFN_vkResetCommandBuffer ResetCommandBuffer = nullptr;
    PFN_vkCmdBindPipeline CmdBindPipeline = nullptr;
    PFN_vkCmdSetViewport CmdSetViewport = nullptr;
    PFN_vkCmdSetScissor CmdSetScissor = nullptr;
    PFN_vkCmdSetLineWidth CmdSetLineWidth = nullptr;
    PFN_vkCmdSetDepthBias CmdSetDepthBias = nullptr;
    PFN_vkCmdSetBlendConstants CmdSetBlendConstants = nullptr;
    PFN_vkCmdSetDepthBounds CmdSetDepthBounds = nullptr;
    PFN_vkCmdSetStencilCompareMask CmdSetStencilCompareMask = nullptr;
    PFN_vkCmdSetStencilWriteMask CmdSetStencilWriteMask = nullptr;
    PFN_vkCmdSetStencilReference CmdSetStencilReference = nullptr;
    PFN_vkCmdBindDescriptorSets CmdBindDescriptorSets = nullptr;
    PFN_vkCmdBindIndexBuffer CmdBindIndexBuffer = nullptr;
    PFN_vkCmdBindVertexBuffers CmdBindVertexBuffers = nullptr;
    PFN_vkCmdDraw CmdDraw = nullptr;
    PFN_vkCmdDrawIndexed CmdDrawIndexed = nullptr;
    PFN_vkCmdDrawIndirect CmdDrawIndirect = nullptr;
    PFN_vkCmdDrawIndexedIndirect CmdDrawIndexedIndirect = nullptr;
    PFN_vkCmdDispatch CmdDispatch = nullptr;
    PFN_vkCmdDispatchIndirect CmdDispatchIndirect = nullptr;
    PFN_vkCmdCopyBuffer CmdCopyBuffer = nullptr;
    PFN_vkCmdCopyImage CmdCopyImage = nullptr;
    PFN_vkCmdBlitImage CmdBlitImage = nullptr;
    PFN_vkCmdCopyBufferToImage CmdCopyBufferToImage = nullptr;
    PFN_vkCmdCopyImageToBuffer CmdCopyImageToBuffer = nullptr;
    PFN_vkCmdUpdateBuffer CmdUpdateBuffer = nullptr;
    PFN_vkCmdFillBuffer CmdFillBuffer = nullptr;
    PFN_vkCmdClearColorImage CmdClearColorImage = nullptr;
    PFN_vkCmdClearDepthStencilImage CmdClearDepthStencilImage = nullptr;
    PFN_vkCmdClearAttachments CmdClearAttachments = nullptr;
    PFN_vkCmdResolveImage CmdResolveImage = nullptr;
    PFN_vkCmdSetEvent CmdSetEvent = nullptr;
    PFN_vkCmdResetEvent CmdResetEvent = nullptr;
    PFN_vkCmdWaitEvents CmdWaitEvents = nullptr;
    PFN_vkCmdPipelineBarrier CmdPipelineBarrier = nullptr;
    PFN_vkCmdBeginQuery CmdBeginQuery = nullptr;
    PFN_vkCmdEndQuery CmdEndQuery = nullptr;
    PFN_vkCmdBeginConditionalRenderingEXT CmdBeginConditionalRenderingEXT = nullptr;
    PFN_vkCmdEndConditionalRenderingEXT CmdEndConditionalRenderingEXT = nullptr;
    PFN_vkCmdResetQueryPool CmdResetQueryPool = nullptr;
    PFN_vkCmdWriteTimestamp CmdWriteTimestamp = nullptr;
    PFN_vkCmdCopyQueryPoolResults CmdCopyQueryPoolResults = nullptr;
    PFN_vkCmdPushConstants CmdPushConstants = nullptr;
    PFN_vkCmdBeginRenderPass CmdBeginRenderPass = nullptr;
    PFN_vkCmdNextSubpass CmdNextSubpass = nullptr;
    PFN_vkCmdEndRenderPass CmdEndRenderPass = nullptr;
    PFN_vkCmdExecuteCommands CmdExecuteCommands = nullptr;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    PFN_vkCreateAndroidSurfaceKHR CreateAndroidSurfaceKHR = nullptr;
#endif
    PFN_vkGetPhysicalDeviceDisplayPropertiesKHR GetPhysicalDeviceDisplayPropertiesKHR = nullptr;
    PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR GetPhysicalDeviceDisplayPlanePropertiesKHR = nullptr;
    PFN_vkGetDisplayPlaneSupportedDisplaysKHR GetDisplayPlaneSupportedDisplaysKHR = nullptr;
    PFN_vkGetDisplayModePropertiesKHR GetDisplayModePropertiesKHR = nullptr;
    PFN_vkCreateDisplayModeKHR CreateDisplayModeKHR = nullptr;
    PFN_vkGetDisplayPlaneCapabilitiesKHR GetDisplayPlaneCapabilitiesKHR = nullptr;
    PFN_vkCreateDisplayPlaneSurfaceKHR CreateDisplayPlaneSurfaceKHR = nullptr;
    PFN_vkCreateSharedSwapchainsKHR CreateSharedSwapchainsKHR = nullptr;
    PFN_vkDestroySurfaceKHR DestroySurfaceKHR = nullptr;
    PFN_vkGetPhysicalDeviceSurfaceSupportKHR GetPhysicalDeviceSurfaceSupportKHR = nullptr;
    PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR GetPhysicalDeviceSurfaceCapabilitiesKHR = nullptr;
    PFN_vkGetPhysicalDeviceSurfaceFormatsKHR GetPhysicalDeviceSurfaceFormatsKHR = nullptr;
    PFN_vkGetPhysicalDeviceSurfacePresentModesKHR GetPhysicalDeviceSurfacePresentModesKHR = nullptr;
    PFN_vkCreateSwapchainKHR CreateSwapchainKHR = nullptr;
    PFN_vkDestroySwapchainKHR DestroySwapchainKHR = nullptr;
    PFN_vkGetSwapchainImagesKHR GetSwapchainImagesKHR = nullptr;
    PFN_vkAcquireNextImageKHR AcquireNextImageKHR = nullptr;
    PFN_vkQueuePresentKHR QueuePresentKHR = nullptr;
#ifdef VK_USE_PLATFORM_VI_NN
    PFN_vkCreateViSurfaceNN CreateViSurfaceNN = nullptr;
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    PFN_vkCreateWaylandSurfaceKHR CreateWaylandSurfaceKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR GetPhysicalDeviceWaylandPresentationSupportKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkCreateWin32SurfaceKHR CreateWin32SurfaceKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR GetPhysicalDeviceWin32PresentationSupportKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    PFN_vkCreateXlibSurfaceKHR CreateXlibSurfaceKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR GetPhysicalDeviceXlibPresentationSupportKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    PFN_vkCreateXcbSurfaceKHR CreateXcbSurfaceKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR GetPhysicalDeviceXcbPresentationSupportKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    PFN_vkCreateDirectFBSurfaceEXT CreateDirectFBSurfaceEXT = nullptr;
#endif
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT GetPhysicalDeviceDirectFBPresentationSupportEXT = nullptr;
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
    PFN_vkCreateImagePipeSurfaceFUCHSIA CreateImagePipeSurfaceFUCHSIA = nullptr;
#endif
#ifdef VK_USE_PLATFORM_GGP
    PFN_vkCreateStreamDescriptorSurfaceGGP CreateStreamDescriptorSurfaceGGP = nullptr;
#endif
    PFN_vkCreateDebugReportCallbackEXT CreateDebugReportCallbackEXT = nullptr;
    PFN_vkDestroyDebugReportCallbackEXT DestroyDebugReportCallbackEXT = nullptr;
    PFN_vkDebugReportMessageEXT DebugReportMessageEXT = nullptr;
    PFN_vkDebugMarkerSetObjectNameEXT DebugMarkerSetObjectNameEXT = nullptr;
    PFN_vkDebugMarkerSetObjectTagEXT DebugMarkerSetObjectTagEXT = nullptr;
    PFN_vkCmdDebugMarkerBeginEXT CmdDebugMarkerBeginEXT = nullptr;
    PFN_vkCmdDebugMarkerEndEXT CmdDebugMarkerEndEXT = nullptr;
    PFN_vkCmdDebugMarkerInsertEXT CmdDebugMarkerInsertEXT = nullptr;
    PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV GetPhysicalDeviceExternalImageFormatPropertiesNV = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryWin32HandleNV GetMemoryWin32HandleNV = nullptr;
#endif
    PFN_vkCmdExecuteGeneratedCommandsNV CmdExecuteGeneratedCommandsNV = nullptr;
    PFN_vkCmdPreprocessGeneratedCommandsNV CmdPreprocessGeneratedCommandsNV = nullptr;
    PFN_vkCmdBindPipelineShaderGroupNV CmdBindPipelineShaderGroupNV = nullptr;
    PFN_vkGetGeneratedCommandsMemoryRequirementsNV GetGeneratedCommandsMemoryRequirementsNV = nullptr;
    PFN_vkCreateIndirectCommandsLayoutNV CreateIndirectCommandsLayoutNV = nullptr;
    PFN_vkDestroyIndirectCommandsLayoutNV DestroyIndirectCommandsLayoutNV = nullptr;
    PFN_vkGetPhysicalDeviceFeatures2 GetPhysicalDeviceFeatures2 = nullptr;
    PFN_vkGetPhysicalDeviceProperties2 GetPhysicalDeviceProperties2 = nullptr;
    PFN_vkGetPhysicalDeviceFormatProperties2 GetPhysicalDeviceFormatProperties2 = nullptr;
    PFN_vkGetPhysicalDeviceImageFormatProperties2 GetPhysicalDeviceImageFormatProperties2 = nullptr;
    PFN_vkGetPhysicalDeviceQueueFamilyProperties2 GetPhysicalDeviceQueueFamilyProperties2 = nullptr;
    PFN_vkGetPhysicalDeviceMemoryProperties2 GetPhysicalDeviceMemoryProperties2 = nullptr;
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 GetPhysicalDeviceSparseImageFormatProperties2 = nullptr;
    PFN_vkCmdPushDescriptorSetKHR CmdPushDescriptorSetKHR = nullptr;
    PFN_vkTrimCommandPool TrimCommandPool = nullptr;
    PFN_vkGetPhysicalDeviceExternalBufferProperties GetPhysicalDeviceExternalBufferProperties = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryWin32HandleKHR GetMemoryWin32HandleKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetMemoryWin32HandlePropertiesKHR GetMemoryWin32HandlePropertiesKHR = nullptr;
#endif
    PFN_vkGetMemoryFdKHR GetMemoryFdKHR = nullptr;
    PFN_vkGetMemoryFdPropertiesKHR GetMemoryFdPropertiesKHR = nullptr;
    PFN_vkGetPhysicalDeviceExternalSemaphoreProperties GetPhysicalDeviceExternalSemaphoreProperties = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetSemaphoreWin32HandleKHR GetSemaphoreWin32HandleKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportSemaphoreWin32HandleKHR ImportSemaphoreWin32HandleKHR = nullptr;
#endif
    PFN_vkGetSemaphoreFdKHR GetSemaphoreFdKHR = nullptr;
    PFN_vkImportSemaphoreFdKHR ImportSemaphoreFdKHR = nullptr;
    PFN_vkGetPhysicalDeviceExternalFenceProperties GetPhysicalDeviceExternalFenceProperties = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetFenceWin32HandleKHR GetFenceWin32HandleKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkImportFenceWin32HandleKHR ImportFenceWin32HandleKHR = nullptr;
#endif
    PFN_vkGetFenceFdKHR GetFenceFdKHR = nullptr;
    PFN_vkImportFenceFdKHR ImportFenceFdKHR = nullptr;
    PFN_vkReleaseDisplayEXT ReleaseDisplayEXT = nullptr;
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    PFN_vkAcquireXlibDisplayEXT AcquireXlibDisplayEXT = nullptr;
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    PFN_vkGetRandROutputDisplayEXT GetRandROutputDisplayEXT = nullptr;
#endif
    PFN_vkDisplayPowerControlEXT DisplayPowerControlEXT = nullptr;
    PFN_vkRegisterDeviceEventEXT RegisterDeviceEventEXT = nullptr;
    PFN_vkRegisterDisplayEventEXT RegisterDisplayEventEXT = nullptr;
    PFN_vkGetSwapchainCounterEXT GetSwapchainCounterEXT = nullptr;
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT GetPhysicalDeviceSurfaceCapabilities2EXT = nullptr;
    PFN_vkEnumeratePhysicalDeviceGroups EnumeratePhysicalDeviceGroups = nullptr;
    PFN_vkGetDeviceGroupPeerMemoryFeatures GetDeviceGroupPeerMemoryFeatures = nullptr;
    PFN_vkBindBufferMemory2 BindBufferMemory2 = nullptr;
    PFN_vkBindImageMemory2 BindImageMemory2 = nullptr;
    PFN_vkCmdSetDeviceMask CmdSetDeviceMask = nullptr;
    PFN_vkGetDeviceGroupPresentCapabilitiesKHR GetDeviceGroupPresentCapabilitiesKHR = nullptr;
    PFN_vkGetDeviceGroupSurfacePresentModesKHR GetDeviceGroupSurfacePresentModesKHR = nullptr;
    PFN_vkAcquireNextImage2KHR AcquireNextImage2KHR = nullptr;
    PFN_vkCmdDispatchBase CmdDispatchBase = nullptr;
    PFN_vkGetPhysicalDevicePresentRectanglesKHR GetPhysicalDevicePresentRectanglesKHR = nullptr;
    PFN_vkCreateDescriptorUpdateTemplate CreateDescriptorUpdateTemplate = nullptr;
    PFN_vkDestroyDescriptorUpdateTemplate DestroyDescriptorUpdateTemplate = nullptr;
    PFN_vkUpdateDescriptorSetWithTemplate UpdateDescriptorSetWithTemplate = nullptr;
    PFN_vkCmdPushDescriptorSetWithTemplateKHR CmdPushDescriptorSetWithTemplateKHR = nullptr;
    PFN_vkSetHdrMetadataEXT SetHdrMetadataEXT = nullptr;
    PFN_vkGetSwapchainStatusKHR GetSwapchainStatusKHR = nullptr;
    PFN_vkGetRefreshCycleDurationGOOGLE GetRefreshCycleDurationGOOGLE = nullptr;
    PFN_vkGetPastPresentationTimingGOOGLE GetPastPresentationTimingGOOGLE = nullptr;
#ifdef VK_USE_PLATFORM_IOS_MVK
    PFN_vkCreateIOSSurfaceMVK CreateIOSSurfaceMVK = nullptr;
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
    PFN_vkCreateMacOSSurfaceMVK CreateMacOSSurfaceMVK = nullptr;
#endif
#ifdef VK_USE_PLATFORM_METAL_EXT
    PFN_vkCreateMetalSurfaceEXT CreateMetalSurfaceEXT = nullptr;
#endif
    PFN_vkCmdSetViewportWScalingNV CmdSetViewportWScalingNV = nullptr;
    PFN_vkCmdSetDiscardRectangleEXT CmdSetDiscardRectangleEXT = nullptr;
    PFN_vkCmdSetSampleLocationsEXT CmdSetSampleLocationsEXT = nullptr;
    PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT GetPhysicalDeviceMultisamplePropertiesEXT = nullptr;
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR GetPhysicalDeviceSurfaceCapabilities2KHR = nullptr;
    PFN_vkGetPhysicalDeviceSurfaceFormats2KHR GetPhysicalDeviceSurfaceFormats2KHR = nullptr;
    PFN_vkGetPhysicalDeviceDisplayProperties2KHR GetPhysicalDeviceDisplayProperties2KHR = nullptr;
    PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR GetPhysicalDeviceDisplayPlaneProperties2KHR = nullptr;
    PFN_vkGetDisplayModeProperties2KHR GetDisplayModeProperties2KHR = nullptr;
    PFN_vkGetDisplayPlaneCapabilities2KHR GetDisplayPlaneCapabilities2KHR = nullptr;
    PFN_vkGetBufferMemoryRequirements2 GetBufferMemoryRequirements2 = nullptr;
    PFN_vkGetImageMemoryRequirements2 GetImageMemoryRequirements2 = nullptr;
    PFN_vkGetImageSparseMemoryRequirements2 GetImageSparseMemoryRequirements2 = nullptr;
    PFN_vkCreateSamplerYcbcrConversion CreateSamplerYcbcrConversion = nullptr;
    PFN_vkDestroySamplerYcbcrConversion DestroySamplerYcbcrConversion = nullptr;
    PFN_vkGetDeviceQueue2 GetDeviceQueue2 = nullptr;
    PFN_vkCreateValidationCacheEXT CreateValidationCacheEXT = nullptr;
    PFN_vkDestroyValidationCacheEXT DestroyValidationCacheEXT = nullptr;
    PFN_vkGetValidationCacheDataEXT GetValidationCacheDataEXT = nullptr;
    PFN_vkMergeValidationCachesEXT MergeValidationCachesEXT = nullptr;
    PFN_vkGetDescriptorSetLayoutSupport GetDescriptorSetLayoutSupport = nullptr;
    PFN_vkGetShaderInfoAMD GetShaderInfoAMD = nullptr;
    PFN_vkSetLocalDimmingAMD SetLocalDimmingAMD = nullptr;
    PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT GetPhysicalDeviceCalibrateableTimeDomainsEXT = nullptr;
    PFN_vkGetCalibratedTimestampsEXT GetCalibratedTimestampsEXT = nullptr;
    PFN_vkSetDebugUtilsObjectNameEXT SetDebugUtilsObjectNameEXT = nullptr;
    PFN_vkSetDebugUtilsObjectTagEXT SetDebugUtilsObjectTagEXT = nullptr;
    PFN_vkQueueBeginDebugUtilsLabelEXT QueueBeginDebugUtilsLabelEXT = nullptr;
    PFN_vkQueueEndDebugUtilsLabelEXT QueueEndDebugUtilsLabelEXT = nullptr;
    PFN_vkQueueInsertDebugUtilsLabelEXT QueueInsertDebugUtilsLabelEXT = nullptr;
    PFN_vkCmdBeginDebugUtilsLabelEXT CmdBeginDebugUtilsLabelEXT = nullptr;
    PFN_vkCmdEndDebugUtilsLabelEXT CmdEndDebugUtilsLabelEXT = nullptr;
    PFN_vkCmdInsertDebugUtilsLabelEXT CmdInsertDebugUtilsLabelEXT = nullptr;
    PFN_vkCreateDebugUtilsMessengerEXT CreateDebugUtilsMessengerEXT = nullptr;
    PFN_vkDestroyDebugUtilsMessengerEXT DestroyDebugUtilsMessengerEXT = nullptr;
    PFN_vkSubmitDebugUtilsMessageEXT SubmitDebugUtilsMessageEXT = nullptr;
    PFN_vkGetMemoryHostPointerPropertiesEXT GetMemoryHostPointerPropertiesEXT = nullptr;
    PFN_vkCmdWriteBufferMarkerAMD CmdWriteBufferMarkerAMD = nullptr;
    PFN_vkCreateRenderPass2 CreateRenderPass2 = nullptr;
    PFN_vkCmdBeginRenderPass2 CmdBeginRenderPass2 = nullptr;
    PFN_vkCmdNextSubpass2 CmdNextSubpass2 = nullptr;
    PFN_vkCmdEndRenderPass2 CmdEndRenderPass2 = nullptr;
    PFN_vkGetSemaphoreCounterValue GetSemaphoreCounterValue = nullptr;
    PFN_vkWaitSemaphores WaitSemaphores = nullptr;
    PFN_vkSignalSemaphore SignalSemaphore = nullptr;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    PFN_vkGetAndroidHardwareBufferPropertiesANDROID GetAndroidHardwareBufferPropertiesANDROID = nullptr;
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    PFN_vkGetMemoryAndroidHardwareBufferANDROID GetMemoryAndroidHardwareBufferANDROID = nullptr;
#endif
    PFN_vkCmdDrawIndirectCount CmdDrawIndirectCount = nullptr;
    PFN_vkCmdDrawIndexedIndirectCount CmdDrawIndexedIndirectCount = nullptr;
    PFN_vkCmdSetCheckpointNV CmdSetCheckpointNV = nullptr;
    PFN_vkGetQueueCheckpointDataNV GetQueueCheckpointDataNV = nullptr;
    PFN_vkCmdBindTransformFeedbackBuffersEXT CmdBindTransformFeedbackBuffersEXT = nullptr;
    PFN_vkCmdBeginTransformFeedbackEXT CmdBeginTransformFeedbackEXT = nullptr;
    PFN_vkCmdEndTransformFeedbackEXT CmdEndTransformFeedbackEXT = nullptr;
    PFN_vkCmdBeginQueryIndexedEXT CmdBeginQueryIndexedEXT = nullptr;
    PFN_vkCmdEndQueryIndexedEXT CmdEndQueryIndexedEXT = nullptr;
    PFN_vkCmdDrawIndirectByteCountEXT CmdDrawIndirectByteCountEXT = nullptr;
    PFN_vkCmdSetExclusiveScissorNV CmdSetExclusiveScissorNV = nullptr;
    PFN_vkCmdBindShadingRateImageNV CmdBindShadingRateImageNV = nullptr;
    PFN_vkCmdSetViewportShadingRatePaletteNV CmdSetViewportShadingRatePaletteNV = nullptr;
    PFN_vkCmdSetCoarseSampleOrderNV CmdSetCoarseSampleOrderNV = nullptr;
    PFN_vkCmdDrawMeshTasksNV CmdDrawMeshTasksNV = nullptr;
    PFN_vkCmdDrawMeshTasksIndirectNV CmdDrawMeshTasksIndirectNV = nullptr;
    PFN_vkCmdDrawMeshTasksIndirectCountNV CmdDrawMeshTasksIndirectCountNV = nullptr;
    PFN_vkCompileDeferredNV CompileDeferredNV = nullptr;
    PFN_vkCreateAccelerationStructureNV CreateAccelerationStructureNV = nullptr;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkDestroyAccelerationStructureKHR DestroyAccelerationStructureKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetAccelerationStructureMemoryRequirementsKHR GetAccelerationStructureMemoryRequirementsKHR = nullptr;
#endif
    PFN_vkGetAccelerationStructureMemoryRequirementsNV GetAccelerationStructureMemoryRequirementsNV = nullptr;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkBindAccelerationStructureMemoryKHR BindAccelerationStructureMemoryKHR = nullptr;
#endif
    PFN_vkCmdCopyAccelerationStructureNV CmdCopyAccelerationStructureNV = nullptr;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdCopyAccelerationStructureKHR CmdCopyAccelerationStructureKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCopyAccelerationStructureKHR CopyAccelerationStructureKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdCopyAccelerationStructureToMemoryKHR CmdCopyAccelerationStructureToMemoryKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCopyAccelerationStructureToMemoryKHR CopyAccelerationStructureToMemoryKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdCopyMemoryToAccelerationStructureKHR CmdCopyMemoryToAccelerationStructureKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCopyMemoryToAccelerationStructureKHR CopyMemoryToAccelerationStructureKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdWriteAccelerationStructuresPropertiesKHR CmdWriteAccelerationStructuresPropertiesKHR = nullptr;
#endif
    PFN_vkCmdBuildAccelerationStructureNV CmdBuildAccelerationStructureNV = nullptr;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkWriteAccelerationStructuresPropertiesKHR WriteAccelerationStructuresPropertiesKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdTraceRaysKHR CmdTraceRaysKHR = nullptr;
#endif
    PFN_vkCmdTraceRaysNV CmdTraceRaysNV = nullptr;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetRayTracingShaderGroupHandlesKHR GetRayTracingShaderGroupHandlesKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR GetRayTracingCaptureReplayShaderGroupHandlesKHR = nullptr;
#endif
    PFN_vkGetAccelerationStructureHandleNV GetAccelerationStructureHandleNV = nullptr;
    PFN_vkCreateRayTracingPipelinesNV CreateRayTracingPipelinesNV = nullptr;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCreateRayTracingPipelinesKHR CreateRayTracingPipelinesKHR = nullptr;
#endif
    PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV GetPhysicalDeviceCooperativeMatrixPropertiesNV = nullptr;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdTraceRaysIndirectKHR CmdTraceRaysIndirectKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetDeviceAccelerationStructureCompatibilityKHR GetDeviceAccelerationStructureCompatibilityKHR = nullptr;
#endif
    PFN_vkGetImageViewHandleNVX GetImageViewHandleNVX = nullptr;
    PFN_vkGetImageViewAddressNVX GetImageViewAddressNVX = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT GetPhysicalDeviceSurfacePresentModes2EXT = nullptr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkGetDeviceGroupSurfacePresentModes2EXT GetDeviceGroupSurfacePresentModes2EXT = nullptr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkAcquireFullScreenExclusiveModeEXT AcquireFullScreenExclusiveModeEXT = nullptr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    PFN_vkReleaseFullScreenExclusiveModeEXT ReleaseFullScreenExclusiveModeEXT = nullptr;
#endif
    PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = nullptr;
    PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = nullptr;
    PFN_vkAcquireProfilingLockKHR AcquireProfilingLockKHR = nullptr;
    PFN_vkReleaseProfilingLockKHR ReleaseProfilingLockKHR = nullptr;
    PFN_vkGetImageDrmFormatModifierPropertiesEXT GetImageDrmFormatModifierPropertiesEXT = nullptr;
    PFN_vkGetBufferOpaqueCaptureAddress GetBufferOpaqueCaptureAddress = nullptr;
    PFN_vkGetBufferDeviceAddress GetBufferDeviceAddress = nullptr;
    PFN_vkCreateHeadlessSurfaceEXT CreateHeadlessSurfaceEXT = nullptr;
    PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = nullptr;
    PFN_vkInitializePerformanceApiINTEL InitializePerformanceApiINTEL = nullptr;
    PFN_vkUninitializePerformanceApiINTEL UninitializePerformanceApiINTEL = nullptr;
    PFN_vkCmdSetPerformanceMarkerINTEL CmdSetPerformanceMarkerINTEL = nullptr;
    PFN_vkCmdSetPerformanceStreamMarkerINTEL CmdSetPerformanceStreamMarkerINTEL = nullptr;
    PFN_vkCmdSetPerformanceOverrideINTEL CmdSetPerformanceOverrideINTEL = nullptr;
    PFN_vkAcquirePerformanceConfigurationINTEL AcquirePerformanceConfigurationINTEL = nullptr;
    PFN_vkReleasePerformanceConfigurationINTEL ReleasePerformanceConfigurationINTEL = nullptr;
    PFN_vkQueueSetPerformanceConfigurationINTEL QueueSetPerformanceConfigurationINTEL = nullptr;
    PFN_vkGetPerformanceParameterINTEL GetPerformanceParameterINTEL = nullptr;
    PFN_vkGetDeviceMemoryOpaqueCaptureAddress GetDeviceMemoryOpaqueCaptureAddress = nullptr;
    PFN_vkGetPipelineExecutablePropertiesKHR GetPipelineExecutablePropertiesKHR = nullptr;
    PFN_vkGetPipelineExecutableStatisticsKHR GetPipelineExecutableStatisticsKHR = nullptr;
    PFN_vkGetPipelineExecutableInternalRepresentationsKHR GetPipelineExecutableInternalRepresentationsKHR = nullptr;
    PFN_vkCmdSetLineStippleEXT CmdSetLineStippleEXT = nullptr;
    PFN_vkGetPhysicalDeviceToolPropertiesEXT GetPhysicalDeviceToolPropertiesEXT = nullptr;
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCreateAccelerationStructureKHR CreateAccelerationStructureKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdBuildAccelerationStructureKHR CmdBuildAccelerationStructureKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCmdBuildAccelerationStructureIndirectKHR CmdBuildAccelerationStructureIndirectKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkBuildAccelerationStructureKHR BuildAccelerationStructureKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetAccelerationStructureDeviceAddressKHR GetAccelerationStructureDeviceAddressKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkCreateDeferredOperationKHR CreateDeferredOperationKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkDestroyDeferredOperationKHR DestroyDeferredOperationKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetDeferredOperationMaxConcurrencyKHR GetDeferredOperationMaxConcurrencyKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkGetDeferredOperationResultKHR GetDeferredOperationResultKHR = nullptr;
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    PFN_vkDeferredOperationJoinKHR DeferredOperationJoinKHR = nullptr;
#endif
    PFN_vkCmdSetCullModeEXT CmdSetCullModeEXT = nullptr;
    PFN_vkCmdSetFrontFaceEXT CmdSetFrontFaceEXT = nullptr;
    PFN_vkCmdSetPrimitiveTopologyEXT CmdSetPrimitiveTopologyEXT = nullptr;
    PFN_vkCmdSetViewportWithCountEXT CmdSetViewportWithCountEXT = nullptr;
    PFN_vkCmdSetScissorWithCountEXT CmdSetScissorWithCountEXT = nullptr;
    PFN_vkCmdBindVertexBuffers2EXT CmdBindVertexBuffers2EXT = nullptr;
    PFN_vkCmdSetDepthTestEnableEXT CmdSetDepthTestEnableEXT = nullptr;
    PFN_vkCmdSetDepthWriteEnableEXT CmdSetDepthWriteEnableEXT = nullptr;
    PFN_vkCmdSetDepthCompareOpEXT CmdSetDepthCompareOpEXT = nullptr;
    PFN_vkCmdSetDepthBoundsTestEnableEXT CmdSetDepthBoundsTestEnableEXT = nullptr;
    PFN_vkCmdSetStencilTestEnableEXT CmdSetStencilTestEnableEXT = nullptr;
    PFN_vkCmdSetStencilOpEXT CmdSetStencilOpEXT = nullptr;
    PFN_vkCreatePrivateDataSlotEXT CreatePrivateDataSlotEXT = nullptr;
    PFN_vkDestroyPrivateDataSlotEXT DestroyPrivateDataSlotEXT = nullptr;
    PFN_vkSetPrivateDataEXT SetPrivateDataEXT = nullptr;
    PFN_vkGetPrivateDataEXT GetPrivateDataEXT = nullptr;
};

