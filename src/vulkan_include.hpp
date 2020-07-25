#pragma once

#include <cassert>

#define VK_NO_PROTOTYPES 1

#include "vulkan/vulkan.h"
#include "vulkan/vk_layer.h"

#include "generated/vulkan_dispatch_table.hpp"

#ifndef ASSERT_VULKAN
#define ASSERT_VULKAN(val) assert(val);
#endif
