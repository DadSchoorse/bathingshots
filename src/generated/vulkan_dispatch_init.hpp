#pragma once

//Frog generated
static void initInstanceTable(PFN_vkGetInstanceProcAddr gipa, VkInstance instance, VulkanDispatchTable* table)
{
    if (table->DestroyInstance == nullptr)
        table->DestroyInstance = (PFN_vkDestroyInstance) gipa(instance, "vkDestroyInstance");
    if (table->EnumeratePhysicalDevices == nullptr)
        table->EnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices) gipa(instance, "vkEnumeratePhysicalDevices");
    if (table->GetInstanceProcAddr == nullptr)
        table->GetInstanceProcAddr = (PFN_vkGetInstanceProcAddr) gipa(instance, "vkGetInstanceProcAddr");
    if (table->GetPhysicalDeviceProperties == nullptr)
        table->GetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties) gipa(instance, "vkGetPhysicalDeviceProperties");
    if (table->GetPhysicalDeviceQueueFamilyProperties == nullptr)
        table->GetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties) gipa(instance, "vkGetPhysicalDeviceQueueFamilyProperties");
    if (table->GetPhysicalDeviceMemoryProperties == nullptr)
        table->GetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties) gipa(instance, "vkGetPhysicalDeviceMemoryProperties");
    if (table->GetPhysicalDeviceFeatures == nullptr)
        table->GetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures) gipa(instance, "vkGetPhysicalDeviceFeatures");
    if (table->GetPhysicalDeviceFormatProperties == nullptr)
        table->GetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties) gipa(instance, "vkGetPhysicalDeviceFormatProperties");
    if (table->GetPhysicalDeviceImageFormatProperties == nullptr)
        table->GetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties) gipa(instance, "vkGetPhysicalDeviceImageFormatProperties");
    if (table->CreateDevice == nullptr)
        table->CreateDevice = (PFN_vkCreateDevice) gipa(instance, "vkCreateDevice");
    if (table->EnumerateDeviceLayerProperties == nullptr)
        table->EnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties) gipa(instance, "vkEnumerateDeviceLayerProperties");
    if (table->EnumerateDeviceExtensionProperties == nullptr)
        table->EnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties) gipa(instance, "vkEnumerateDeviceExtensionProperties");
    if (table->GetPhysicalDeviceSparseImageFormatProperties == nullptr)
        table->GetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties) gipa(instance, "vkGetPhysicalDeviceSparseImageFormatProperties");
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (table->CreateAndroidSurfaceKHR == nullptr)
        table->CreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR) gipa(instance, "vkCreateAndroidSurfaceKHR");
#endif
    if (table->GetPhysicalDeviceDisplayPropertiesKHR == nullptr)
        table->GetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR) gipa(instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
    if (table->GetPhysicalDeviceDisplayPlanePropertiesKHR == nullptr)
        table->GetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR) gipa(instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
    if (table->GetDisplayPlaneSupportedDisplaysKHR == nullptr)
        table->GetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR) gipa(instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
    if (table->GetDisplayModePropertiesKHR == nullptr)
        table->GetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR) gipa(instance, "vkGetDisplayModePropertiesKHR");
    if (table->CreateDisplayModeKHR == nullptr)
        table->CreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR) gipa(instance, "vkCreateDisplayModeKHR");
    if (table->GetDisplayPlaneCapabilitiesKHR == nullptr)
        table->GetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR) gipa(instance, "vkGetDisplayPlaneCapabilitiesKHR");
    if (table->CreateDisplayPlaneSurfaceKHR == nullptr)
        table->CreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR) gipa(instance, "vkCreateDisplayPlaneSurfaceKHR");
    if (table->DestroySurfaceKHR == nullptr)
        table->DestroySurfaceKHR = (PFN_vkDestroySurfaceKHR) gipa(instance, "vkDestroySurfaceKHR");
    if (table->GetPhysicalDeviceSurfaceSupportKHR == nullptr)
        table->GetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR) gipa(instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
    if (table->GetPhysicalDeviceSurfaceCapabilitiesKHR == nullptr)
        table->GetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR) gipa(instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    if (table->GetPhysicalDeviceSurfaceFormatsKHR == nullptr)
        table->GetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR) gipa(instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
    if (table->GetPhysicalDeviceSurfacePresentModesKHR == nullptr)
        table->GetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR) gipa(instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
#ifdef VK_USE_PLATFORM_VI_NN
    if (table->CreateViSurfaceNN == nullptr)
        table->CreateViSurfaceNN = (PFN_vkCreateViSurfaceNN) gipa(instance, "vkCreateViSurfaceNN");
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    if (table->CreateWaylandSurfaceKHR == nullptr)
        table->CreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR) gipa(instance, "vkCreateWaylandSurfaceKHR");
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    if (table->GetPhysicalDeviceWaylandPresentationSupportKHR == nullptr)
        table->GetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR) gipa(instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->CreateWin32SurfaceKHR == nullptr)
        table->CreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR) gipa(instance, "vkCreateWin32SurfaceKHR");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->GetPhysicalDeviceWin32PresentationSupportKHR == nullptr)
        table->GetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR) gipa(instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    if (table->CreateXlibSurfaceKHR == nullptr)
        table->CreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR) gipa(instance, "vkCreateXlibSurfaceKHR");
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
    if (table->GetPhysicalDeviceXlibPresentationSupportKHR == nullptr)
        table->GetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR) gipa(instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    if (table->CreateXcbSurfaceKHR == nullptr)
        table->CreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR) gipa(instance, "vkCreateXcbSurfaceKHR");
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
    if (table->GetPhysicalDeviceXcbPresentationSupportKHR == nullptr)
        table->GetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR) gipa(instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
#endif
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    if (table->CreateDirectFBSurfaceEXT == nullptr)
        table->CreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT) gipa(instance, "vkCreateDirectFBSurfaceEXT");
#endif
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    if (table->GetPhysicalDeviceDirectFBPresentationSupportEXT == nullptr)
        table->GetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT) gipa(instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
    if (table->CreateImagePipeSurfaceFUCHSIA == nullptr)
        table->CreateImagePipeSurfaceFUCHSIA = (PFN_vkCreateImagePipeSurfaceFUCHSIA) gipa(instance, "vkCreateImagePipeSurfaceFUCHSIA");
#endif
#ifdef VK_USE_PLATFORM_GGP
    if (table->CreateStreamDescriptorSurfaceGGP == nullptr)
        table->CreateStreamDescriptorSurfaceGGP = (PFN_vkCreateStreamDescriptorSurfaceGGP) gipa(instance, "vkCreateStreamDescriptorSurfaceGGP");
#endif
    if (table->CreateDebugReportCallbackEXT == nullptr)
        table->CreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT) gipa(instance, "vkCreateDebugReportCallbackEXT");
    if (table->DestroyDebugReportCallbackEXT == nullptr)
        table->DestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT) gipa(instance, "vkDestroyDebugReportCallbackEXT");
    if (table->DebugReportMessageEXT == nullptr)
        table->DebugReportMessageEXT = (PFN_vkDebugReportMessageEXT) gipa(instance, "vkDebugReportMessageEXT");
    if (table->GetPhysicalDeviceExternalImageFormatPropertiesNV == nullptr)
        table->GetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV) gipa(instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
    if (table->GetPhysicalDeviceFeatures2 == nullptr)
        table->GetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2) gipa(instance, "vkGetPhysicalDeviceFeatures2");
    if (table->GetPhysicalDeviceFeatures2 == nullptr)
        table->GetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2) gipa(instance, "vkGetPhysicalDeviceFeatures2KHR");
    if (table->GetPhysicalDeviceProperties2 == nullptr)
        table->GetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2) gipa(instance, "vkGetPhysicalDeviceProperties2");
    if (table->GetPhysicalDeviceProperties2 == nullptr)
        table->GetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2) gipa(instance, "vkGetPhysicalDeviceProperties2KHR");
    if (table->GetPhysicalDeviceFormatProperties2 == nullptr)
        table->GetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2) gipa(instance, "vkGetPhysicalDeviceFormatProperties2");
    if (table->GetPhysicalDeviceFormatProperties2 == nullptr)
        table->GetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2) gipa(instance, "vkGetPhysicalDeviceFormatProperties2KHR");
    if (table->GetPhysicalDeviceImageFormatProperties2 == nullptr)
        table->GetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2) gipa(instance, "vkGetPhysicalDeviceImageFormatProperties2");
    if (table->GetPhysicalDeviceImageFormatProperties2 == nullptr)
        table->GetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2) gipa(instance, "vkGetPhysicalDeviceImageFormatProperties2KHR");
    if (table->GetPhysicalDeviceQueueFamilyProperties2 == nullptr)
        table->GetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2) gipa(instance, "vkGetPhysicalDeviceQueueFamilyProperties2");
    if (table->GetPhysicalDeviceQueueFamilyProperties2 == nullptr)
        table->GetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2) gipa(instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
    if (table->GetPhysicalDeviceMemoryProperties2 == nullptr)
        table->GetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2) gipa(instance, "vkGetPhysicalDeviceMemoryProperties2");
    if (table->GetPhysicalDeviceMemoryProperties2 == nullptr)
        table->GetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2) gipa(instance, "vkGetPhysicalDeviceMemoryProperties2KHR");
    if (table->GetPhysicalDeviceSparseImageFormatProperties2 == nullptr)
        table->GetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2) gipa(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2");
    if (table->GetPhysicalDeviceSparseImageFormatProperties2 == nullptr)
        table->GetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2) gipa(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
    if (table->GetPhysicalDeviceExternalBufferProperties == nullptr)
        table->GetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties) gipa(instance, "vkGetPhysicalDeviceExternalBufferProperties");
    if (table->GetPhysicalDeviceExternalBufferProperties == nullptr)
        table->GetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties) gipa(instance, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
    if (table->GetPhysicalDeviceExternalSemaphoreProperties == nullptr)
        table->GetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties) gipa(instance, "vkGetPhysicalDeviceExternalSemaphoreProperties");
    if (table->GetPhysicalDeviceExternalSemaphoreProperties == nullptr)
        table->GetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties) gipa(instance, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
    if (table->GetPhysicalDeviceExternalFenceProperties == nullptr)
        table->GetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties) gipa(instance, "vkGetPhysicalDeviceExternalFenceProperties");
    if (table->GetPhysicalDeviceExternalFenceProperties == nullptr)
        table->GetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties) gipa(instance, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
    if (table->ReleaseDisplayEXT == nullptr)
        table->ReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT) gipa(instance, "vkReleaseDisplayEXT");
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    if (table->AcquireXlibDisplayEXT == nullptr)
        table->AcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT) gipa(instance, "vkAcquireXlibDisplayEXT");
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    if (table->GetRandROutputDisplayEXT == nullptr)
        table->GetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT) gipa(instance, "vkGetRandROutputDisplayEXT");
#endif
    if (table->GetPhysicalDeviceSurfaceCapabilities2EXT == nullptr)
        table->GetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT) gipa(instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
    if (table->EnumeratePhysicalDeviceGroups == nullptr)
        table->EnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups) gipa(instance, "vkEnumeratePhysicalDeviceGroups");
    if (table->EnumeratePhysicalDeviceGroups == nullptr)
        table->EnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups) gipa(instance, "vkEnumeratePhysicalDeviceGroupsKHR");
    if (table->GetPhysicalDevicePresentRectanglesKHR == nullptr)
        table->GetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) gipa(instance, "vkGetPhysicalDevicePresentRectanglesKHR");
#ifdef VK_USE_PLATFORM_IOS_MVK
    if (table->CreateIOSSurfaceMVK == nullptr)
        table->CreateIOSSurfaceMVK = (PFN_vkCreateIOSSurfaceMVK) gipa(instance, "vkCreateIOSSurfaceMVK");
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
    if (table->CreateMacOSSurfaceMVK == nullptr)
        table->CreateMacOSSurfaceMVK = (PFN_vkCreateMacOSSurfaceMVK) gipa(instance, "vkCreateMacOSSurfaceMVK");
#endif
#ifdef VK_USE_PLATFORM_METAL_EXT
    if (table->CreateMetalSurfaceEXT == nullptr)
        table->CreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT) gipa(instance, "vkCreateMetalSurfaceEXT");
#endif
    if (table->GetPhysicalDeviceMultisamplePropertiesEXT == nullptr)
        table->GetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT) gipa(instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
    if (table->GetPhysicalDeviceSurfaceCapabilities2KHR == nullptr)
        table->GetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR) gipa(instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
    if (table->GetPhysicalDeviceSurfaceFormats2KHR == nullptr)
        table->GetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR) gipa(instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
    if (table->GetPhysicalDeviceDisplayProperties2KHR == nullptr)
        table->GetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR) gipa(instance, "vkGetPhysicalDeviceDisplayProperties2KHR");
    if (table->GetPhysicalDeviceDisplayPlaneProperties2KHR == nullptr)
        table->GetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR) gipa(instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
    if (table->GetDisplayModeProperties2KHR == nullptr)
        table->GetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR) gipa(instance, "vkGetDisplayModeProperties2KHR");
    if (table->GetDisplayPlaneCapabilities2KHR == nullptr)
        table->GetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR) gipa(instance, "vkGetDisplayPlaneCapabilities2KHR");
    if (table->GetPhysicalDeviceCalibrateableTimeDomainsEXT == nullptr)
        table->GetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT) gipa(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
    if (table->CreateDebugUtilsMessengerEXT == nullptr)
        table->CreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT) gipa(instance, "vkCreateDebugUtilsMessengerEXT");
    if (table->DestroyDebugUtilsMessengerEXT == nullptr)
        table->DestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT) gipa(instance, "vkDestroyDebugUtilsMessengerEXT");
    if (table->SubmitDebugUtilsMessageEXT == nullptr)
        table->SubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT) gipa(instance, "vkSubmitDebugUtilsMessageEXT");
    if (table->GetPhysicalDeviceCooperativeMatrixPropertiesNV == nullptr)
        table->GetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV) gipa(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->GetPhysicalDeviceSurfacePresentModes2EXT == nullptr)
        table->GetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT) gipa(instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
#endif
    if (table->EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR == nullptr)
        table->EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR) gipa(instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
    if (table->GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR == nullptr)
        table->GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR) gipa(instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
    if (table->CreateHeadlessSurfaceEXT == nullptr)
        table->CreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT) gipa(instance, "vkCreateHeadlessSurfaceEXT");
    if (table->GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV == nullptr)
        table->GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV) gipa(instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
    if (table->GetPhysicalDeviceToolPropertiesEXT == nullptr)
        table->GetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT) gipa(instance, "vkGetPhysicalDeviceToolPropertiesEXT");
}

static void initDeviceTable(PFN_vkGetDeviceProcAddr gdpa, VkDevice device, VulkanDispatchTable* table)
{
    if (table->GetDeviceProcAddr == nullptr)
        table->GetDeviceProcAddr = (PFN_vkGetDeviceProcAddr) gdpa(device, "vkGetDeviceProcAddr");
    if (table->DestroyDevice == nullptr)
        table->DestroyDevice = (PFN_vkDestroyDevice) gdpa(device, "vkDestroyDevice");
    if (table->GetDeviceQueue == nullptr)
        table->GetDeviceQueue = (PFN_vkGetDeviceQueue) gdpa(device, "vkGetDeviceQueue");
    if (table->QueueSubmit == nullptr)
        table->QueueSubmit = (PFN_vkQueueSubmit) gdpa(device, "vkQueueSubmit");
    if (table->QueueWaitIdle == nullptr)
        table->QueueWaitIdle = (PFN_vkQueueWaitIdle) gdpa(device, "vkQueueWaitIdle");
    if (table->DeviceWaitIdle == nullptr)
        table->DeviceWaitIdle = (PFN_vkDeviceWaitIdle) gdpa(device, "vkDeviceWaitIdle");
    if (table->AllocateMemory == nullptr)
        table->AllocateMemory = (PFN_vkAllocateMemory) gdpa(device, "vkAllocateMemory");
    if (table->FreeMemory == nullptr)
        table->FreeMemory = (PFN_vkFreeMemory) gdpa(device, "vkFreeMemory");
    if (table->MapMemory == nullptr)
        table->MapMemory = (PFN_vkMapMemory) gdpa(device, "vkMapMemory");
    if (table->UnmapMemory == nullptr)
        table->UnmapMemory = (PFN_vkUnmapMemory) gdpa(device, "vkUnmapMemory");
    if (table->FlushMappedMemoryRanges == nullptr)
        table->FlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges) gdpa(device, "vkFlushMappedMemoryRanges");
    if (table->InvalidateMappedMemoryRanges == nullptr)
        table->InvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges) gdpa(device, "vkInvalidateMappedMemoryRanges");
    if (table->GetDeviceMemoryCommitment == nullptr)
        table->GetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment) gdpa(device, "vkGetDeviceMemoryCommitment");
    if (table->GetBufferMemoryRequirements == nullptr)
        table->GetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements) gdpa(device, "vkGetBufferMemoryRequirements");
    if (table->BindBufferMemory == nullptr)
        table->BindBufferMemory = (PFN_vkBindBufferMemory) gdpa(device, "vkBindBufferMemory");
    if (table->GetImageMemoryRequirements == nullptr)
        table->GetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements) gdpa(device, "vkGetImageMemoryRequirements");
    if (table->BindImageMemory == nullptr)
        table->BindImageMemory = (PFN_vkBindImageMemory) gdpa(device, "vkBindImageMemory");
    if (table->GetImageSparseMemoryRequirements == nullptr)
        table->GetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements) gdpa(device, "vkGetImageSparseMemoryRequirements");
    if (table->QueueBindSparse == nullptr)
        table->QueueBindSparse = (PFN_vkQueueBindSparse) gdpa(device, "vkQueueBindSparse");
    if (table->CreateFence == nullptr)
        table->CreateFence = (PFN_vkCreateFence) gdpa(device, "vkCreateFence");
    if (table->DestroyFence == nullptr)
        table->DestroyFence = (PFN_vkDestroyFence) gdpa(device, "vkDestroyFence");
    if (table->ResetFences == nullptr)
        table->ResetFences = (PFN_vkResetFences) gdpa(device, "vkResetFences");
    if (table->GetFenceStatus == nullptr)
        table->GetFenceStatus = (PFN_vkGetFenceStatus) gdpa(device, "vkGetFenceStatus");
    if (table->WaitForFences == nullptr)
        table->WaitForFences = (PFN_vkWaitForFences) gdpa(device, "vkWaitForFences");
    if (table->CreateSemaphore == nullptr)
        table->CreateSemaphore = (PFN_vkCreateSemaphore) gdpa(device, "vkCreateSemaphore");
    if (table->DestroySemaphore == nullptr)
        table->DestroySemaphore = (PFN_vkDestroySemaphore) gdpa(device, "vkDestroySemaphore");
    if (table->CreateEvent == nullptr)
        table->CreateEvent = (PFN_vkCreateEvent) gdpa(device, "vkCreateEvent");
    if (table->DestroyEvent == nullptr)
        table->DestroyEvent = (PFN_vkDestroyEvent) gdpa(device, "vkDestroyEvent");
    if (table->GetEventStatus == nullptr)
        table->GetEventStatus = (PFN_vkGetEventStatus) gdpa(device, "vkGetEventStatus");
    if (table->SetEvent == nullptr)
        table->SetEvent = (PFN_vkSetEvent) gdpa(device, "vkSetEvent");
    if (table->ResetEvent == nullptr)
        table->ResetEvent = (PFN_vkResetEvent) gdpa(device, "vkResetEvent");
    if (table->CreateQueryPool == nullptr)
        table->CreateQueryPool = (PFN_vkCreateQueryPool) gdpa(device, "vkCreateQueryPool");
    if (table->DestroyQueryPool == nullptr)
        table->DestroyQueryPool = (PFN_vkDestroyQueryPool) gdpa(device, "vkDestroyQueryPool");
    if (table->GetQueryPoolResults == nullptr)
        table->GetQueryPoolResults = (PFN_vkGetQueryPoolResults) gdpa(device, "vkGetQueryPoolResults");
    if (table->ResetQueryPool == nullptr)
        table->ResetQueryPool = (PFN_vkResetQueryPool) gdpa(device, "vkResetQueryPool");
    if (table->ResetQueryPool == nullptr)
        table->ResetQueryPool = (PFN_vkResetQueryPool) gdpa(device, "vkResetQueryPoolEXT");
    if (table->CreateBuffer == nullptr)
        table->CreateBuffer = (PFN_vkCreateBuffer) gdpa(device, "vkCreateBuffer");
    if (table->DestroyBuffer == nullptr)
        table->DestroyBuffer = (PFN_vkDestroyBuffer) gdpa(device, "vkDestroyBuffer");
    if (table->CreateBufferView == nullptr)
        table->CreateBufferView = (PFN_vkCreateBufferView) gdpa(device, "vkCreateBufferView");
    if (table->DestroyBufferView == nullptr)
        table->DestroyBufferView = (PFN_vkDestroyBufferView) gdpa(device, "vkDestroyBufferView");
    if (table->CreateImage == nullptr)
        table->CreateImage = (PFN_vkCreateImage) gdpa(device, "vkCreateImage");
    if (table->DestroyImage == nullptr)
        table->DestroyImage = (PFN_vkDestroyImage) gdpa(device, "vkDestroyImage");
    if (table->GetImageSubresourceLayout == nullptr)
        table->GetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout) gdpa(device, "vkGetImageSubresourceLayout");
    if (table->CreateImageView == nullptr)
        table->CreateImageView = (PFN_vkCreateImageView) gdpa(device, "vkCreateImageView");
    if (table->DestroyImageView == nullptr)
        table->DestroyImageView = (PFN_vkDestroyImageView) gdpa(device, "vkDestroyImageView");
    if (table->CreateShaderModule == nullptr)
        table->CreateShaderModule = (PFN_vkCreateShaderModule) gdpa(device, "vkCreateShaderModule");
    if (table->DestroyShaderModule == nullptr)
        table->DestroyShaderModule = (PFN_vkDestroyShaderModule) gdpa(device, "vkDestroyShaderModule");
    if (table->CreatePipelineCache == nullptr)
        table->CreatePipelineCache = (PFN_vkCreatePipelineCache) gdpa(device, "vkCreatePipelineCache");
    if (table->DestroyPipelineCache == nullptr)
        table->DestroyPipelineCache = (PFN_vkDestroyPipelineCache) gdpa(device, "vkDestroyPipelineCache");
    if (table->GetPipelineCacheData == nullptr)
        table->GetPipelineCacheData = (PFN_vkGetPipelineCacheData) gdpa(device, "vkGetPipelineCacheData");
    if (table->MergePipelineCaches == nullptr)
        table->MergePipelineCaches = (PFN_vkMergePipelineCaches) gdpa(device, "vkMergePipelineCaches");
    if (table->CreateGraphicsPipelines == nullptr)
        table->CreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines) gdpa(device, "vkCreateGraphicsPipelines");
    if (table->CreateComputePipelines == nullptr)
        table->CreateComputePipelines = (PFN_vkCreateComputePipelines) gdpa(device, "vkCreateComputePipelines");
    if (table->DestroyPipeline == nullptr)
        table->DestroyPipeline = (PFN_vkDestroyPipeline) gdpa(device, "vkDestroyPipeline");
    if (table->CreatePipelineLayout == nullptr)
        table->CreatePipelineLayout = (PFN_vkCreatePipelineLayout) gdpa(device, "vkCreatePipelineLayout");
    if (table->DestroyPipelineLayout == nullptr)
        table->DestroyPipelineLayout = (PFN_vkDestroyPipelineLayout) gdpa(device, "vkDestroyPipelineLayout");
    if (table->CreateSampler == nullptr)
        table->CreateSampler = (PFN_vkCreateSampler) gdpa(device, "vkCreateSampler");
    if (table->DestroySampler == nullptr)
        table->DestroySampler = (PFN_vkDestroySampler) gdpa(device, "vkDestroySampler");
    if (table->CreateDescriptorSetLayout == nullptr)
        table->CreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout) gdpa(device, "vkCreateDescriptorSetLayout");
    if (table->DestroyDescriptorSetLayout == nullptr)
        table->DestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout) gdpa(device, "vkDestroyDescriptorSetLayout");
    if (table->CreateDescriptorPool == nullptr)
        table->CreateDescriptorPool = (PFN_vkCreateDescriptorPool) gdpa(device, "vkCreateDescriptorPool");
    if (table->DestroyDescriptorPool == nullptr)
        table->DestroyDescriptorPool = (PFN_vkDestroyDescriptorPool) gdpa(device, "vkDestroyDescriptorPool");
    if (table->ResetDescriptorPool == nullptr)
        table->ResetDescriptorPool = (PFN_vkResetDescriptorPool) gdpa(device, "vkResetDescriptorPool");
    if (table->AllocateDescriptorSets == nullptr)
        table->AllocateDescriptorSets = (PFN_vkAllocateDescriptorSets) gdpa(device, "vkAllocateDescriptorSets");
    if (table->FreeDescriptorSets == nullptr)
        table->FreeDescriptorSets = (PFN_vkFreeDescriptorSets) gdpa(device, "vkFreeDescriptorSets");
    if (table->UpdateDescriptorSets == nullptr)
        table->UpdateDescriptorSets = (PFN_vkUpdateDescriptorSets) gdpa(device, "vkUpdateDescriptorSets");
    if (table->CreateFramebuffer == nullptr)
        table->CreateFramebuffer = (PFN_vkCreateFramebuffer) gdpa(device, "vkCreateFramebuffer");
    if (table->DestroyFramebuffer == nullptr)
        table->DestroyFramebuffer = (PFN_vkDestroyFramebuffer) gdpa(device, "vkDestroyFramebuffer");
    if (table->CreateRenderPass == nullptr)
        table->CreateRenderPass = (PFN_vkCreateRenderPass) gdpa(device, "vkCreateRenderPass");
    if (table->DestroyRenderPass == nullptr)
        table->DestroyRenderPass = (PFN_vkDestroyRenderPass) gdpa(device, "vkDestroyRenderPass");
    if (table->GetRenderAreaGranularity == nullptr)
        table->GetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity) gdpa(device, "vkGetRenderAreaGranularity");
    if (table->CreateCommandPool == nullptr)
        table->CreateCommandPool = (PFN_vkCreateCommandPool) gdpa(device, "vkCreateCommandPool");
    if (table->DestroyCommandPool == nullptr)
        table->DestroyCommandPool = (PFN_vkDestroyCommandPool) gdpa(device, "vkDestroyCommandPool");
    if (table->ResetCommandPool == nullptr)
        table->ResetCommandPool = (PFN_vkResetCommandPool) gdpa(device, "vkResetCommandPool");
    if (table->AllocateCommandBuffers == nullptr)
        table->AllocateCommandBuffers = (PFN_vkAllocateCommandBuffers) gdpa(device, "vkAllocateCommandBuffers");
    if (table->FreeCommandBuffers == nullptr)
        table->FreeCommandBuffers = (PFN_vkFreeCommandBuffers) gdpa(device, "vkFreeCommandBuffers");
    if (table->BeginCommandBuffer == nullptr)
        table->BeginCommandBuffer = (PFN_vkBeginCommandBuffer) gdpa(device, "vkBeginCommandBuffer");
    if (table->EndCommandBuffer == nullptr)
        table->EndCommandBuffer = (PFN_vkEndCommandBuffer) gdpa(device, "vkEndCommandBuffer");
    if (table->ResetCommandBuffer == nullptr)
        table->ResetCommandBuffer = (PFN_vkResetCommandBuffer) gdpa(device, "vkResetCommandBuffer");
    if (table->CmdBindPipeline == nullptr)
        table->CmdBindPipeline = (PFN_vkCmdBindPipeline) gdpa(device, "vkCmdBindPipeline");
    if (table->CmdSetViewport == nullptr)
        table->CmdSetViewport = (PFN_vkCmdSetViewport) gdpa(device, "vkCmdSetViewport");
    if (table->CmdSetScissor == nullptr)
        table->CmdSetScissor = (PFN_vkCmdSetScissor) gdpa(device, "vkCmdSetScissor");
    if (table->CmdSetLineWidth == nullptr)
        table->CmdSetLineWidth = (PFN_vkCmdSetLineWidth) gdpa(device, "vkCmdSetLineWidth");
    if (table->CmdSetDepthBias == nullptr)
        table->CmdSetDepthBias = (PFN_vkCmdSetDepthBias) gdpa(device, "vkCmdSetDepthBias");
    if (table->CmdSetBlendConstants == nullptr)
        table->CmdSetBlendConstants = (PFN_vkCmdSetBlendConstants) gdpa(device, "vkCmdSetBlendConstants");
    if (table->CmdSetDepthBounds == nullptr)
        table->CmdSetDepthBounds = (PFN_vkCmdSetDepthBounds) gdpa(device, "vkCmdSetDepthBounds");
    if (table->CmdSetStencilCompareMask == nullptr)
        table->CmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask) gdpa(device, "vkCmdSetStencilCompareMask");
    if (table->CmdSetStencilWriteMask == nullptr)
        table->CmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask) gdpa(device, "vkCmdSetStencilWriteMask");
    if (table->CmdSetStencilReference == nullptr)
        table->CmdSetStencilReference = (PFN_vkCmdSetStencilReference) gdpa(device, "vkCmdSetStencilReference");
    if (table->CmdBindDescriptorSets == nullptr)
        table->CmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets) gdpa(device, "vkCmdBindDescriptorSets");
    if (table->CmdBindIndexBuffer == nullptr)
        table->CmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer) gdpa(device, "vkCmdBindIndexBuffer");
    if (table->CmdBindVertexBuffers == nullptr)
        table->CmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers) gdpa(device, "vkCmdBindVertexBuffers");
    if (table->CmdDraw == nullptr)
        table->CmdDraw = (PFN_vkCmdDraw) gdpa(device, "vkCmdDraw");
    if (table->CmdDrawIndexed == nullptr)
        table->CmdDrawIndexed = (PFN_vkCmdDrawIndexed) gdpa(device, "vkCmdDrawIndexed");
    if (table->CmdDrawIndirect == nullptr)
        table->CmdDrawIndirect = (PFN_vkCmdDrawIndirect) gdpa(device, "vkCmdDrawIndirect");
    if (table->CmdDrawIndexedIndirect == nullptr)
        table->CmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect) gdpa(device, "vkCmdDrawIndexedIndirect");
    if (table->CmdDispatch == nullptr)
        table->CmdDispatch = (PFN_vkCmdDispatch) gdpa(device, "vkCmdDispatch");
    if (table->CmdDispatchIndirect == nullptr)
        table->CmdDispatchIndirect = (PFN_vkCmdDispatchIndirect) gdpa(device, "vkCmdDispatchIndirect");
    if (table->CmdCopyBuffer == nullptr)
        table->CmdCopyBuffer = (PFN_vkCmdCopyBuffer) gdpa(device, "vkCmdCopyBuffer");
    if (table->CmdCopyImage == nullptr)
        table->CmdCopyImage = (PFN_vkCmdCopyImage) gdpa(device, "vkCmdCopyImage");
    if (table->CmdBlitImage == nullptr)
        table->CmdBlitImage = (PFN_vkCmdBlitImage) gdpa(device, "vkCmdBlitImage");
    if (table->CmdCopyBufferToImage == nullptr)
        table->CmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage) gdpa(device, "vkCmdCopyBufferToImage");
    if (table->CmdCopyImageToBuffer == nullptr)
        table->CmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer) gdpa(device, "vkCmdCopyImageToBuffer");
    if (table->CmdUpdateBuffer == nullptr)
        table->CmdUpdateBuffer = (PFN_vkCmdUpdateBuffer) gdpa(device, "vkCmdUpdateBuffer");
    if (table->CmdFillBuffer == nullptr)
        table->CmdFillBuffer = (PFN_vkCmdFillBuffer) gdpa(device, "vkCmdFillBuffer");
    if (table->CmdClearColorImage == nullptr)
        table->CmdClearColorImage = (PFN_vkCmdClearColorImage) gdpa(device, "vkCmdClearColorImage");
    if (table->CmdClearDepthStencilImage == nullptr)
        table->CmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage) gdpa(device, "vkCmdClearDepthStencilImage");
    if (table->CmdClearAttachments == nullptr)
        table->CmdClearAttachments = (PFN_vkCmdClearAttachments) gdpa(device, "vkCmdClearAttachments");
    if (table->CmdResolveImage == nullptr)
        table->CmdResolveImage = (PFN_vkCmdResolveImage) gdpa(device, "vkCmdResolveImage");
    if (table->CmdSetEvent == nullptr)
        table->CmdSetEvent = (PFN_vkCmdSetEvent) gdpa(device, "vkCmdSetEvent");
    if (table->CmdResetEvent == nullptr)
        table->CmdResetEvent = (PFN_vkCmdResetEvent) gdpa(device, "vkCmdResetEvent");
    if (table->CmdWaitEvents == nullptr)
        table->CmdWaitEvents = (PFN_vkCmdWaitEvents) gdpa(device, "vkCmdWaitEvents");
    if (table->CmdPipelineBarrier == nullptr)
        table->CmdPipelineBarrier = (PFN_vkCmdPipelineBarrier) gdpa(device, "vkCmdPipelineBarrier");
    if (table->CmdBeginQuery == nullptr)
        table->CmdBeginQuery = (PFN_vkCmdBeginQuery) gdpa(device, "vkCmdBeginQuery");
    if (table->CmdEndQuery == nullptr)
        table->CmdEndQuery = (PFN_vkCmdEndQuery) gdpa(device, "vkCmdEndQuery");
    if (table->CmdBeginConditionalRenderingEXT == nullptr)
        table->CmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT) gdpa(device, "vkCmdBeginConditionalRenderingEXT");
    if (table->CmdEndConditionalRenderingEXT == nullptr)
        table->CmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT) gdpa(device, "vkCmdEndConditionalRenderingEXT");
    if (table->CmdResetQueryPool == nullptr)
        table->CmdResetQueryPool = (PFN_vkCmdResetQueryPool) gdpa(device, "vkCmdResetQueryPool");
    if (table->CmdWriteTimestamp == nullptr)
        table->CmdWriteTimestamp = (PFN_vkCmdWriteTimestamp) gdpa(device, "vkCmdWriteTimestamp");
    if (table->CmdCopyQueryPoolResults == nullptr)
        table->CmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults) gdpa(device, "vkCmdCopyQueryPoolResults");
    if (table->CmdPushConstants == nullptr)
        table->CmdPushConstants = (PFN_vkCmdPushConstants) gdpa(device, "vkCmdPushConstants");
    if (table->CmdBeginRenderPass == nullptr)
        table->CmdBeginRenderPass = (PFN_vkCmdBeginRenderPass) gdpa(device, "vkCmdBeginRenderPass");
    if (table->CmdNextSubpass == nullptr)
        table->CmdNextSubpass = (PFN_vkCmdNextSubpass) gdpa(device, "vkCmdNextSubpass");
    if (table->CmdEndRenderPass == nullptr)
        table->CmdEndRenderPass = (PFN_vkCmdEndRenderPass) gdpa(device, "vkCmdEndRenderPass");
    if (table->CmdExecuteCommands == nullptr)
        table->CmdExecuteCommands = (PFN_vkCmdExecuteCommands) gdpa(device, "vkCmdExecuteCommands");
    if (table->CreateSharedSwapchainsKHR == nullptr)
        table->CreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR) gdpa(device, "vkCreateSharedSwapchainsKHR");
    if (table->CreateSwapchainKHR == nullptr)
        table->CreateSwapchainKHR = (PFN_vkCreateSwapchainKHR) gdpa(device, "vkCreateSwapchainKHR");
    if (table->DestroySwapchainKHR == nullptr)
        table->DestroySwapchainKHR = (PFN_vkDestroySwapchainKHR) gdpa(device, "vkDestroySwapchainKHR");
    if (table->GetSwapchainImagesKHR == nullptr)
        table->GetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR) gdpa(device, "vkGetSwapchainImagesKHR");
    if (table->AcquireNextImageKHR == nullptr)
        table->AcquireNextImageKHR = (PFN_vkAcquireNextImageKHR) gdpa(device, "vkAcquireNextImageKHR");
    if (table->QueuePresentKHR == nullptr)
        table->QueuePresentKHR = (PFN_vkQueuePresentKHR) gdpa(device, "vkQueuePresentKHR");
    if (table->DebugMarkerSetObjectNameEXT == nullptr)
        table->DebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT) gdpa(device, "vkDebugMarkerSetObjectNameEXT");
    if (table->DebugMarkerSetObjectTagEXT == nullptr)
        table->DebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT) gdpa(device, "vkDebugMarkerSetObjectTagEXT");
    if (table->CmdDebugMarkerBeginEXT == nullptr)
        table->CmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT) gdpa(device, "vkCmdDebugMarkerBeginEXT");
    if (table->CmdDebugMarkerEndEXT == nullptr)
        table->CmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT) gdpa(device, "vkCmdDebugMarkerEndEXT");
    if (table->CmdDebugMarkerInsertEXT == nullptr)
        table->CmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT) gdpa(device, "vkCmdDebugMarkerInsertEXT");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->GetMemoryWin32HandleNV == nullptr)
        table->GetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV) gdpa(device, "vkGetMemoryWin32HandleNV");
#endif
    if (table->CmdExecuteGeneratedCommandsNV == nullptr)
        table->CmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV) gdpa(device, "vkCmdExecuteGeneratedCommandsNV");
    if (table->CmdPreprocessGeneratedCommandsNV == nullptr)
        table->CmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV) gdpa(device, "vkCmdPreprocessGeneratedCommandsNV");
    if (table->CmdBindPipelineShaderGroupNV == nullptr)
        table->CmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV) gdpa(device, "vkCmdBindPipelineShaderGroupNV");
    if (table->GetGeneratedCommandsMemoryRequirementsNV == nullptr)
        table->GetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV) gdpa(device, "vkGetGeneratedCommandsMemoryRequirementsNV");
    if (table->CreateIndirectCommandsLayoutNV == nullptr)
        table->CreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV) gdpa(device, "vkCreateIndirectCommandsLayoutNV");
    if (table->DestroyIndirectCommandsLayoutNV == nullptr)
        table->DestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV) gdpa(device, "vkDestroyIndirectCommandsLayoutNV");
    if (table->CmdPushDescriptorSetKHR == nullptr)
        table->CmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR) gdpa(device, "vkCmdPushDescriptorSetKHR");
    if (table->TrimCommandPool == nullptr)
        table->TrimCommandPool = (PFN_vkTrimCommandPool) gdpa(device, "vkTrimCommandPool");
    if (table->TrimCommandPool == nullptr)
        table->TrimCommandPool = (PFN_vkTrimCommandPool) gdpa(device, "vkTrimCommandPoolKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->GetMemoryWin32HandleKHR == nullptr)
        table->GetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR) gdpa(device, "vkGetMemoryWin32HandleKHR");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->GetMemoryWin32HandlePropertiesKHR == nullptr)
        table->GetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR) gdpa(device, "vkGetMemoryWin32HandlePropertiesKHR");
#endif
    if (table->GetMemoryFdKHR == nullptr)
        table->GetMemoryFdKHR = (PFN_vkGetMemoryFdKHR) gdpa(device, "vkGetMemoryFdKHR");
    if (table->GetMemoryFdPropertiesKHR == nullptr)
        table->GetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR) gdpa(device, "vkGetMemoryFdPropertiesKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->GetSemaphoreWin32HandleKHR == nullptr)
        table->GetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR) gdpa(device, "vkGetSemaphoreWin32HandleKHR");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->ImportSemaphoreWin32HandleKHR == nullptr)
        table->ImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR) gdpa(device, "vkImportSemaphoreWin32HandleKHR");
#endif
    if (table->GetSemaphoreFdKHR == nullptr)
        table->GetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR) gdpa(device, "vkGetSemaphoreFdKHR");
    if (table->ImportSemaphoreFdKHR == nullptr)
        table->ImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR) gdpa(device, "vkImportSemaphoreFdKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->GetFenceWin32HandleKHR == nullptr)
        table->GetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR) gdpa(device, "vkGetFenceWin32HandleKHR");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->ImportFenceWin32HandleKHR == nullptr)
        table->ImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR) gdpa(device, "vkImportFenceWin32HandleKHR");
#endif
    if (table->GetFenceFdKHR == nullptr)
        table->GetFenceFdKHR = (PFN_vkGetFenceFdKHR) gdpa(device, "vkGetFenceFdKHR");
    if (table->ImportFenceFdKHR == nullptr)
        table->ImportFenceFdKHR = (PFN_vkImportFenceFdKHR) gdpa(device, "vkImportFenceFdKHR");
    if (table->DisplayPowerControlEXT == nullptr)
        table->DisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT) gdpa(device, "vkDisplayPowerControlEXT");
    if (table->RegisterDeviceEventEXT == nullptr)
        table->RegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT) gdpa(device, "vkRegisterDeviceEventEXT");
    if (table->RegisterDisplayEventEXT == nullptr)
        table->RegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT) gdpa(device, "vkRegisterDisplayEventEXT");
    if (table->GetSwapchainCounterEXT == nullptr)
        table->GetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT) gdpa(device, "vkGetSwapchainCounterEXT");
    if (table->GetDeviceGroupPeerMemoryFeatures == nullptr)
        table->GetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures) gdpa(device, "vkGetDeviceGroupPeerMemoryFeatures");
    if (table->GetDeviceGroupPeerMemoryFeatures == nullptr)
        table->GetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures) gdpa(device, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
    if (table->BindBufferMemory2 == nullptr)
        table->BindBufferMemory2 = (PFN_vkBindBufferMemory2) gdpa(device, "vkBindBufferMemory2");
    if (table->BindBufferMemory2 == nullptr)
        table->BindBufferMemory2 = (PFN_vkBindBufferMemory2) gdpa(device, "vkBindBufferMemory2KHR");
    if (table->BindImageMemory2 == nullptr)
        table->BindImageMemory2 = (PFN_vkBindImageMemory2) gdpa(device, "vkBindImageMemory2");
    if (table->BindImageMemory2 == nullptr)
        table->BindImageMemory2 = (PFN_vkBindImageMemory2) gdpa(device, "vkBindImageMemory2KHR");
    if (table->CmdSetDeviceMask == nullptr)
        table->CmdSetDeviceMask = (PFN_vkCmdSetDeviceMask) gdpa(device, "vkCmdSetDeviceMask");
    if (table->CmdSetDeviceMask == nullptr)
        table->CmdSetDeviceMask = (PFN_vkCmdSetDeviceMask) gdpa(device, "vkCmdSetDeviceMaskKHR");
    if (table->GetDeviceGroupPresentCapabilitiesKHR == nullptr)
        table->GetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) gdpa(device, "vkGetDeviceGroupPresentCapabilitiesKHR");
    if (table->GetDeviceGroupSurfacePresentModesKHR == nullptr)
        table->GetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) gdpa(device, "vkGetDeviceGroupSurfacePresentModesKHR");
    if (table->AcquireNextImage2KHR == nullptr)
        table->AcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR) gdpa(device, "vkAcquireNextImage2KHR");
    if (table->CmdDispatchBase == nullptr)
        table->CmdDispatchBase = (PFN_vkCmdDispatchBase) gdpa(device, "vkCmdDispatchBase");
    if (table->CmdDispatchBase == nullptr)
        table->CmdDispatchBase = (PFN_vkCmdDispatchBase) gdpa(device, "vkCmdDispatchBaseKHR");
    if (table->CreateDescriptorUpdateTemplate == nullptr)
        table->CreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate) gdpa(device, "vkCreateDescriptorUpdateTemplate");
    if (table->CreateDescriptorUpdateTemplate == nullptr)
        table->CreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate) gdpa(device, "vkCreateDescriptorUpdateTemplateKHR");
    if (table->DestroyDescriptorUpdateTemplate == nullptr)
        table->DestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate) gdpa(device, "vkDestroyDescriptorUpdateTemplate");
    if (table->DestroyDescriptorUpdateTemplate == nullptr)
        table->DestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate) gdpa(device, "vkDestroyDescriptorUpdateTemplateKHR");
    if (table->UpdateDescriptorSetWithTemplate == nullptr)
        table->UpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate) gdpa(device, "vkUpdateDescriptorSetWithTemplate");
    if (table->UpdateDescriptorSetWithTemplate == nullptr)
        table->UpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate) gdpa(device, "vkUpdateDescriptorSetWithTemplateKHR");
    if (table->CmdPushDescriptorSetWithTemplateKHR == nullptr)
        table->CmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR) gdpa(device, "vkCmdPushDescriptorSetWithTemplateKHR");
    if (table->SetHdrMetadataEXT == nullptr)
        table->SetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT) gdpa(device, "vkSetHdrMetadataEXT");
    if (table->GetSwapchainStatusKHR == nullptr)
        table->GetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR) gdpa(device, "vkGetSwapchainStatusKHR");
    if (table->GetRefreshCycleDurationGOOGLE == nullptr)
        table->GetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE) gdpa(device, "vkGetRefreshCycleDurationGOOGLE");
    if (table->GetPastPresentationTimingGOOGLE == nullptr)
        table->GetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE) gdpa(device, "vkGetPastPresentationTimingGOOGLE");
    if (table->CmdSetViewportWScalingNV == nullptr)
        table->CmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV) gdpa(device, "vkCmdSetViewportWScalingNV");
    if (table->CmdSetDiscardRectangleEXT == nullptr)
        table->CmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT) gdpa(device, "vkCmdSetDiscardRectangleEXT");
    if (table->CmdSetSampleLocationsEXT == nullptr)
        table->CmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT) gdpa(device, "vkCmdSetSampleLocationsEXT");
    if (table->GetBufferMemoryRequirements2 == nullptr)
        table->GetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2) gdpa(device, "vkGetBufferMemoryRequirements2");
    if (table->GetBufferMemoryRequirements2 == nullptr)
        table->GetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2) gdpa(device, "vkGetBufferMemoryRequirements2KHR");
    if (table->GetImageMemoryRequirements2 == nullptr)
        table->GetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2) gdpa(device, "vkGetImageMemoryRequirements2");
    if (table->GetImageMemoryRequirements2 == nullptr)
        table->GetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2) gdpa(device, "vkGetImageMemoryRequirements2KHR");
    if (table->GetImageSparseMemoryRequirements2 == nullptr)
        table->GetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2) gdpa(device, "vkGetImageSparseMemoryRequirements2");
    if (table->GetImageSparseMemoryRequirements2 == nullptr)
        table->GetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2) gdpa(device, "vkGetImageSparseMemoryRequirements2KHR");
    if (table->CreateSamplerYcbcrConversion == nullptr)
        table->CreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion) gdpa(device, "vkCreateSamplerYcbcrConversion");
    if (table->CreateSamplerYcbcrConversion == nullptr)
        table->CreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion) gdpa(device, "vkCreateSamplerYcbcrConversionKHR");
    if (table->DestroySamplerYcbcrConversion == nullptr)
        table->DestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion) gdpa(device, "vkDestroySamplerYcbcrConversion");
    if (table->DestroySamplerYcbcrConversion == nullptr)
        table->DestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion) gdpa(device, "vkDestroySamplerYcbcrConversionKHR");
    if (table->GetDeviceQueue2 == nullptr)
        table->GetDeviceQueue2 = (PFN_vkGetDeviceQueue2) gdpa(device, "vkGetDeviceQueue2");
    if (table->CreateValidationCacheEXT == nullptr)
        table->CreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT) gdpa(device, "vkCreateValidationCacheEXT");
    if (table->DestroyValidationCacheEXT == nullptr)
        table->DestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT) gdpa(device, "vkDestroyValidationCacheEXT");
    if (table->GetValidationCacheDataEXT == nullptr)
        table->GetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT) gdpa(device, "vkGetValidationCacheDataEXT");
    if (table->MergeValidationCachesEXT == nullptr)
        table->MergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT) gdpa(device, "vkMergeValidationCachesEXT");
    if (table->GetDescriptorSetLayoutSupport == nullptr)
        table->GetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport) gdpa(device, "vkGetDescriptorSetLayoutSupport");
    if (table->GetDescriptorSetLayoutSupport == nullptr)
        table->GetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport) gdpa(device, "vkGetDescriptorSetLayoutSupportKHR");
    if (table->GetShaderInfoAMD == nullptr)
        table->GetShaderInfoAMD = (PFN_vkGetShaderInfoAMD) gdpa(device, "vkGetShaderInfoAMD");
    if (table->SetLocalDimmingAMD == nullptr)
        table->SetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD) gdpa(device, "vkSetLocalDimmingAMD");
    if (table->GetCalibratedTimestampsEXT == nullptr)
        table->GetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT) gdpa(device, "vkGetCalibratedTimestampsEXT");
    if (table->SetDebugUtilsObjectNameEXT == nullptr)
        table->SetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT) gdpa(device, "vkSetDebugUtilsObjectNameEXT");
    if (table->SetDebugUtilsObjectTagEXT == nullptr)
        table->SetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT) gdpa(device, "vkSetDebugUtilsObjectTagEXT");
    if (table->QueueBeginDebugUtilsLabelEXT == nullptr)
        table->QueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT) gdpa(device, "vkQueueBeginDebugUtilsLabelEXT");
    if (table->QueueEndDebugUtilsLabelEXT == nullptr)
        table->QueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT) gdpa(device, "vkQueueEndDebugUtilsLabelEXT");
    if (table->QueueInsertDebugUtilsLabelEXT == nullptr)
        table->QueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT) gdpa(device, "vkQueueInsertDebugUtilsLabelEXT");
    if (table->CmdBeginDebugUtilsLabelEXT == nullptr)
        table->CmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT) gdpa(device, "vkCmdBeginDebugUtilsLabelEXT");
    if (table->CmdEndDebugUtilsLabelEXT == nullptr)
        table->CmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT) gdpa(device, "vkCmdEndDebugUtilsLabelEXT");
    if (table->CmdInsertDebugUtilsLabelEXT == nullptr)
        table->CmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT) gdpa(device, "vkCmdInsertDebugUtilsLabelEXT");
    if (table->GetMemoryHostPointerPropertiesEXT == nullptr)
        table->GetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT) gdpa(device, "vkGetMemoryHostPointerPropertiesEXT");
    if (table->CmdWriteBufferMarkerAMD == nullptr)
        table->CmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD) gdpa(device, "vkCmdWriteBufferMarkerAMD");
    if (table->CreateRenderPass2 == nullptr)
        table->CreateRenderPass2 = (PFN_vkCreateRenderPass2) gdpa(device, "vkCreateRenderPass2");
    if (table->CreateRenderPass2 == nullptr)
        table->CreateRenderPass2 = (PFN_vkCreateRenderPass2) gdpa(device, "vkCreateRenderPass2KHR");
    if (table->CmdBeginRenderPass2 == nullptr)
        table->CmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2) gdpa(device, "vkCmdBeginRenderPass2");
    if (table->CmdBeginRenderPass2 == nullptr)
        table->CmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2) gdpa(device, "vkCmdBeginRenderPass2KHR");
    if (table->CmdNextSubpass2 == nullptr)
        table->CmdNextSubpass2 = (PFN_vkCmdNextSubpass2) gdpa(device, "vkCmdNextSubpass2");
    if (table->CmdNextSubpass2 == nullptr)
        table->CmdNextSubpass2 = (PFN_vkCmdNextSubpass2) gdpa(device, "vkCmdNextSubpass2KHR");
    if (table->CmdEndRenderPass2 == nullptr)
        table->CmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2) gdpa(device, "vkCmdEndRenderPass2");
    if (table->CmdEndRenderPass2 == nullptr)
        table->CmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2) gdpa(device, "vkCmdEndRenderPass2KHR");
    if (table->GetSemaphoreCounterValue == nullptr)
        table->GetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue) gdpa(device, "vkGetSemaphoreCounterValue");
    if (table->GetSemaphoreCounterValue == nullptr)
        table->GetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue) gdpa(device, "vkGetSemaphoreCounterValueKHR");
    if (table->WaitSemaphores == nullptr)
        table->WaitSemaphores = (PFN_vkWaitSemaphores) gdpa(device, "vkWaitSemaphores");
    if (table->WaitSemaphores == nullptr)
        table->WaitSemaphores = (PFN_vkWaitSemaphores) gdpa(device, "vkWaitSemaphoresKHR");
    if (table->SignalSemaphore == nullptr)
        table->SignalSemaphore = (PFN_vkSignalSemaphore) gdpa(device, "vkSignalSemaphore");
    if (table->SignalSemaphore == nullptr)
        table->SignalSemaphore = (PFN_vkSignalSemaphore) gdpa(device, "vkSignalSemaphoreKHR");
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (table->GetAndroidHardwareBufferPropertiesANDROID == nullptr)
        table->GetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID) gdpa(device, "vkGetAndroidHardwareBufferPropertiesANDROID");
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (table->GetMemoryAndroidHardwareBufferANDROID == nullptr)
        table->GetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID) gdpa(device, "vkGetMemoryAndroidHardwareBufferANDROID");
#endif
    if (table->CmdDrawIndirectCount == nullptr)
        table->CmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount) gdpa(device, "vkCmdDrawIndirectCount");
    if (table->CmdDrawIndirectCount == nullptr)
        table->CmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount) gdpa(device, "vkCmdDrawIndirectCountKHR");
    if (table->CmdDrawIndirectCount == nullptr)
        table->CmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount) gdpa(device, "vkCmdDrawIndirectCountAMD");
    if (table->CmdDrawIndexedIndirectCount == nullptr)
        table->CmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount) gdpa(device, "vkCmdDrawIndexedIndirectCount");
    if (table->CmdDrawIndexedIndirectCount == nullptr)
        table->CmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount) gdpa(device, "vkCmdDrawIndexedIndirectCountKHR");
    if (table->CmdDrawIndexedIndirectCount == nullptr)
        table->CmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount) gdpa(device, "vkCmdDrawIndexedIndirectCountAMD");
    if (table->CmdSetCheckpointNV == nullptr)
        table->CmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV) gdpa(device, "vkCmdSetCheckpointNV");
    if (table->GetQueueCheckpointDataNV == nullptr)
        table->GetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV) gdpa(device, "vkGetQueueCheckpointDataNV");
    if (table->CmdBindTransformFeedbackBuffersEXT == nullptr)
        table->CmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT) gdpa(device, "vkCmdBindTransformFeedbackBuffersEXT");
    if (table->CmdBeginTransformFeedbackEXT == nullptr)
        table->CmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT) gdpa(device, "vkCmdBeginTransformFeedbackEXT");
    if (table->CmdEndTransformFeedbackEXT == nullptr)
        table->CmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT) gdpa(device, "vkCmdEndTransformFeedbackEXT");
    if (table->CmdBeginQueryIndexedEXT == nullptr)
        table->CmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT) gdpa(device, "vkCmdBeginQueryIndexedEXT");
    if (table->CmdEndQueryIndexedEXT == nullptr)
        table->CmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT) gdpa(device, "vkCmdEndQueryIndexedEXT");
    if (table->CmdDrawIndirectByteCountEXT == nullptr)
        table->CmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT) gdpa(device, "vkCmdDrawIndirectByteCountEXT");
    if (table->CmdSetExclusiveScissorNV == nullptr)
        table->CmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV) gdpa(device, "vkCmdSetExclusiveScissorNV");
    if (table->CmdBindShadingRateImageNV == nullptr)
        table->CmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV) gdpa(device, "vkCmdBindShadingRateImageNV");
    if (table->CmdSetViewportShadingRatePaletteNV == nullptr)
        table->CmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV) gdpa(device, "vkCmdSetViewportShadingRatePaletteNV");
    if (table->CmdSetCoarseSampleOrderNV == nullptr)
        table->CmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV) gdpa(device, "vkCmdSetCoarseSampleOrderNV");
    if (table->CmdDrawMeshTasksNV == nullptr)
        table->CmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV) gdpa(device, "vkCmdDrawMeshTasksNV");
    if (table->CmdDrawMeshTasksIndirectNV == nullptr)
        table->CmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV) gdpa(device, "vkCmdDrawMeshTasksIndirectNV");
    if (table->CmdDrawMeshTasksIndirectCountNV == nullptr)
        table->CmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV) gdpa(device, "vkCmdDrawMeshTasksIndirectCountNV");
    if (table->CompileDeferredNV == nullptr)
        table->CompileDeferredNV = (PFN_vkCompileDeferredNV) gdpa(device, "vkCompileDeferredNV");
    if (table->CreateAccelerationStructureNV == nullptr)
        table->CreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV) gdpa(device, "vkCreateAccelerationStructureNV");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->DestroyAccelerationStructureKHR == nullptr)
        table->DestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR) gdpa(device, "vkDestroyAccelerationStructureKHR");
    if (table->DestroyAccelerationStructureKHR == nullptr)
        table->DestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR) gdpa(device, "vkDestroyAccelerationStructureNV");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->GetAccelerationStructureMemoryRequirementsKHR == nullptr)
        table->GetAccelerationStructureMemoryRequirementsKHR = (PFN_vkGetAccelerationStructureMemoryRequirementsKHR) gdpa(device, "vkGetAccelerationStructureMemoryRequirementsKHR");
#endif
    if (table->GetAccelerationStructureMemoryRequirementsNV == nullptr)
        table->GetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV) gdpa(device, "vkGetAccelerationStructureMemoryRequirementsNV");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->BindAccelerationStructureMemoryKHR == nullptr)
        table->BindAccelerationStructureMemoryKHR = (PFN_vkBindAccelerationStructureMemoryKHR) gdpa(device, "vkBindAccelerationStructureMemoryKHR");
    if (table->BindAccelerationStructureMemoryKHR == nullptr)
        table->BindAccelerationStructureMemoryKHR = (PFN_vkBindAccelerationStructureMemoryKHR) gdpa(device, "vkBindAccelerationStructureMemoryNV");
#endif
    if (table->CmdCopyAccelerationStructureNV == nullptr)
        table->CmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV) gdpa(device, "vkCmdCopyAccelerationStructureNV");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CmdCopyAccelerationStructureKHR == nullptr)
        table->CmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR) gdpa(device, "vkCmdCopyAccelerationStructureKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CopyAccelerationStructureKHR == nullptr)
        table->CopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR) gdpa(device, "vkCopyAccelerationStructureKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CmdCopyAccelerationStructureToMemoryKHR == nullptr)
        table->CmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR) gdpa(device, "vkCmdCopyAccelerationStructureToMemoryKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CopyAccelerationStructureToMemoryKHR == nullptr)
        table->CopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR) gdpa(device, "vkCopyAccelerationStructureToMemoryKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CmdCopyMemoryToAccelerationStructureKHR == nullptr)
        table->CmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR) gdpa(device, "vkCmdCopyMemoryToAccelerationStructureKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CopyMemoryToAccelerationStructureKHR == nullptr)
        table->CopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR) gdpa(device, "vkCopyMemoryToAccelerationStructureKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CmdWriteAccelerationStructuresPropertiesKHR == nullptr)
        table->CmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR) gdpa(device, "vkCmdWriteAccelerationStructuresPropertiesKHR");
    if (table->CmdWriteAccelerationStructuresPropertiesKHR == nullptr)
        table->CmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR) gdpa(device, "vkCmdWriteAccelerationStructuresPropertiesNV");
#endif
    if (table->CmdBuildAccelerationStructureNV == nullptr)
        table->CmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV) gdpa(device, "vkCmdBuildAccelerationStructureNV");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->WriteAccelerationStructuresPropertiesKHR == nullptr)
        table->WriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR) gdpa(device, "vkWriteAccelerationStructuresPropertiesKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CmdTraceRaysKHR == nullptr)
        table->CmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR) gdpa(device, "vkCmdTraceRaysKHR");
#endif
    if (table->CmdTraceRaysNV == nullptr)
        table->CmdTraceRaysNV = (PFN_vkCmdTraceRaysNV) gdpa(device, "vkCmdTraceRaysNV");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->GetRayTracingShaderGroupHandlesKHR == nullptr)
        table->GetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR) gdpa(device, "vkGetRayTracingShaderGroupHandlesKHR");
    if (table->GetRayTracingShaderGroupHandlesKHR == nullptr)
        table->GetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR) gdpa(device, "vkGetRayTracingShaderGroupHandlesNV");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->GetRayTracingCaptureReplayShaderGroupHandlesKHR == nullptr)
        table->GetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR) gdpa(device, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
#endif
    if (table->GetAccelerationStructureHandleNV == nullptr)
        table->GetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV) gdpa(device, "vkGetAccelerationStructureHandleNV");
    if (table->CreateRayTracingPipelinesNV == nullptr)
        table->CreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV) gdpa(device, "vkCreateRayTracingPipelinesNV");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CreateRayTracingPipelinesKHR == nullptr)
        table->CreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR) gdpa(device, "vkCreateRayTracingPipelinesKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CmdTraceRaysIndirectKHR == nullptr)
        table->CmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR) gdpa(device, "vkCmdTraceRaysIndirectKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->GetDeviceAccelerationStructureCompatibilityKHR == nullptr)
        table->GetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR) gdpa(device, "vkGetDeviceAccelerationStructureCompatibilityKHR");
#endif
    if (table->GetImageViewHandleNVX == nullptr)
        table->GetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX) gdpa(device, "vkGetImageViewHandleNVX");
    if (table->GetImageViewAddressNVX == nullptr)
        table->GetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX) gdpa(device, "vkGetImageViewAddressNVX");
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->GetDeviceGroupSurfacePresentModes2EXT == nullptr)
        table->GetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT) gdpa(device, "vkGetDeviceGroupSurfacePresentModes2EXT");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->AcquireFullScreenExclusiveModeEXT == nullptr)
        table->AcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT) gdpa(device, "vkAcquireFullScreenExclusiveModeEXT");
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (table->ReleaseFullScreenExclusiveModeEXT == nullptr)
        table->ReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT) gdpa(device, "vkReleaseFullScreenExclusiveModeEXT");
#endif
    if (table->AcquireProfilingLockKHR == nullptr)
        table->AcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR) gdpa(device, "vkAcquireProfilingLockKHR");
    if (table->ReleaseProfilingLockKHR == nullptr)
        table->ReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR) gdpa(device, "vkReleaseProfilingLockKHR");
    if (table->GetImageDrmFormatModifierPropertiesEXT == nullptr)
        table->GetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT) gdpa(device, "vkGetImageDrmFormatModifierPropertiesEXT");
    if (table->GetBufferOpaqueCaptureAddress == nullptr)
        table->GetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress) gdpa(device, "vkGetBufferOpaqueCaptureAddress");
    if (table->GetBufferOpaqueCaptureAddress == nullptr)
        table->GetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress) gdpa(device, "vkGetBufferOpaqueCaptureAddressKHR");
    if (table->GetBufferDeviceAddress == nullptr)
        table->GetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress) gdpa(device, "vkGetBufferDeviceAddress");
    if (table->GetBufferDeviceAddress == nullptr)
        table->GetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress) gdpa(device, "vkGetBufferDeviceAddressKHR");
    if (table->GetBufferDeviceAddress == nullptr)
        table->GetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress) gdpa(device, "vkGetBufferDeviceAddressEXT");
    if (table->InitializePerformanceApiINTEL == nullptr)
        table->InitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL) gdpa(device, "vkInitializePerformanceApiINTEL");
    if (table->UninitializePerformanceApiINTEL == nullptr)
        table->UninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL) gdpa(device, "vkUninitializePerformanceApiINTEL");
    if (table->CmdSetPerformanceMarkerINTEL == nullptr)
        table->CmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL) gdpa(device, "vkCmdSetPerformanceMarkerINTEL");
    if (table->CmdSetPerformanceStreamMarkerINTEL == nullptr)
        table->CmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL) gdpa(device, "vkCmdSetPerformanceStreamMarkerINTEL");
    if (table->CmdSetPerformanceOverrideINTEL == nullptr)
        table->CmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL) gdpa(device, "vkCmdSetPerformanceOverrideINTEL");
    if (table->AcquirePerformanceConfigurationINTEL == nullptr)
        table->AcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL) gdpa(device, "vkAcquirePerformanceConfigurationINTEL");
    if (table->ReleasePerformanceConfigurationINTEL == nullptr)
        table->ReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL) gdpa(device, "vkReleasePerformanceConfigurationINTEL");
    if (table->QueueSetPerformanceConfigurationINTEL == nullptr)
        table->QueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL) gdpa(device, "vkQueueSetPerformanceConfigurationINTEL");
    if (table->GetPerformanceParameterINTEL == nullptr)
        table->GetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL) gdpa(device, "vkGetPerformanceParameterINTEL");
    if (table->GetDeviceMemoryOpaqueCaptureAddress == nullptr)
        table->GetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress) gdpa(device, "vkGetDeviceMemoryOpaqueCaptureAddress");
    if (table->GetDeviceMemoryOpaqueCaptureAddress == nullptr)
        table->GetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress) gdpa(device, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
    if (table->GetPipelineExecutablePropertiesKHR == nullptr)
        table->GetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR) gdpa(device, "vkGetPipelineExecutablePropertiesKHR");
    if (table->GetPipelineExecutableStatisticsKHR == nullptr)
        table->GetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR) gdpa(device, "vkGetPipelineExecutableStatisticsKHR");
    if (table->GetPipelineExecutableInternalRepresentationsKHR == nullptr)
        table->GetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR) gdpa(device, "vkGetPipelineExecutableInternalRepresentationsKHR");
    if (table->CmdSetLineStippleEXT == nullptr)
        table->CmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT) gdpa(device, "vkCmdSetLineStippleEXT");
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CreateAccelerationStructureKHR == nullptr)
        table->CreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR) gdpa(device, "vkCreateAccelerationStructureKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CmdBuildAccelerationStructureKHR == nullptr)
        table->CmdBuildAccelerationStructureKHR = (PFN_vkCmdBuildAccelerationStructureKHR) gdpa(device, "vkCmdBuildAccelerationStructureKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CmdBuildAccelerationStructureIndirectKHR == nullptr)
        table->CmdBuildAccelerationStructureIndirectKHR = (PFN_vkCmdBuildAccelerationStructureIndirectKHR) gdpa(device, "vkCmdBuildAccelerationStructureIndirectKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->BuildAccelerationStructureKHR == nullptr)
        table->BuildAccelerationStructureKHR = (PFN_vkBuildAccelerationStructureKHR) gdpa(device, "vkBuildAccelerationStructureKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->GetAccelerationStructureDeviceAddressKHR == nullptr)
        table->GetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR) gdpa(device, "vkGetAccelerationStructureDeviceAddressKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->CreateDeferredOperationKHR == nullptr)
        table->CreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR) gdpa(device, "vkCreateDeferredOperationKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->DestroyDeferredOperationKHR == nullptr)
        table->DestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR) gdpa(device, "vkDestroyDeferredOperationKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->GetDeferredOperationMaxConcurrencyKHR == nullptr)
        table->GetDeferredOperationMaxConcurrencyKHR = (PFN_vkGetDeferredOperationMaxConcurrencyKHR) gdpa(device, "vkGetDeferredOperationMaxConcurrencyKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->GetDeferredOperationResultKHR == nullptr)
        table->GetDeferredOperationResultKHR = (PFN_vkGetDeferredOperationResultKHR) gdpa(device, "vkGetDeferredOperationResultKHR");
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (table->DeferredOperationJoinKHR == nullptr)
        table->DeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR) gdpa(device, "vkDeferredOperationJoinKHR");
#endif
    if (table->CmdSetCullModeEXT == nullptr)
        table->CmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT) gdpa(device, "vkCmdSetCullModeEXT");
    if (table->CmdSetFrontFaceEXT == nullptr)
        table->CmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT) gdpa(device, "vkCmdSetFrontFaceEXT");
    if (table->CmdSetPrimitiveTopologyEXT == nullptr)
        table->CmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT) gdpa(device, "vkCmdSetPrimitiveTopologyEXT");
    if (table->CmdSetViewportWithCountEXT == nullptr)
        table->CmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT) gdpa(device, "vkCmdSetViewportWithCountEXT");
    if (table->CmdSetScissorWithCountEXT == nullptr)
        table->CmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT) gdpa(device, "vkCmdSetScissorWithCountEXT");
    if (table->CmdBindVertexBuffers2EXT == nullptr)
        table->CmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT) gdpa(device, "vkCmdBindVertexBuffers2EXT");
    if (table->CmdSetDepthTestEnableEXT == nullptr)
        table->CmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT) gdpa(device, "vkCmdSetDepthTestEnableEXT");
    if (table->CmdSetDepthWriteEnableEXT == nullptr)
        table->CmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT) gdpa(device, "vkCmdSetDepthWriteEnableEXT");
    if (table->CmdSetDepthCompareOpEXT == nullptr)
        table->CmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT) gdpa(device, "vkCmdSetDepthCompareOpEXT");
    if (table->CmdSetDepthBoundsTestEnableEXT == nullptr)
        table->CmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT) gdpa(device, "vkCmdSetDepthBoundsTestEnableEXT");
    if (table->CmdSetStencilTestEnableEXT == nullptr)
        table->CmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT) gdpa(device, "vkCmdSetStencilTestEnableEXT");
    if (table->CmdSetStencilOpEXT == nullptr)
        table->CmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT) gdpa(device, "vkCmdSetStencilOpEXT");
    if (table->CreatePrivateDataSlotEXT == nullptr)
        table->CreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT) gdpa(device, "vkCreatePrivateDataSlotEXT");
    if (table->DestroyPrivateDataSlotEXT == nullptr)
        table->DestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT) gdpa(device, "vkDestroyPrivateDataSlotEXT");
    if (table->SetPrivateDataEXT == nullptr)
        table->SetPrivateDataEXT = (PFN_vkSetPrivateDataEXT) gdpa(device, "vkSetPrivateDataEXT");
    if (table->GetPrivateDataEXT == nullptr)
        table->GetPrivateDataEXT = (PFN_vkGetPrivateDataEXT) gdpa(device, "vkGetPrivateDataEXT");
}
