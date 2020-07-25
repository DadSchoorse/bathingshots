#pragma once

#include <cassert>

#include "vulkan_include.hpp"
#include "generated/vulkan_stype.hpp"

namespace nl
{
    template<typename T, typename Func>
    inline T* pNextSearch(const void* chain, Func func)
    {
        VkStructureType sType = sTypeFromStruct<T>();
        assert(sType >= 0);
        auto result = const_cast<T*>(reinterpret_cast<const T*>(chain));
        while (result && ((result->sType != sType) || !func(result)))
        {
            result = const_cast<T*>(reinterpret_cast<const T*>(result->pNext));
        }
        return result;
    }

    template<typename T>
    inline T* pNextSearch(const void* chain)
    {
        return pNextSearch<T>(chain, [](T* t) { return true; });
    }
} // namespace nl
