#pragma once

#include <cstdint>
#include <string>

namespace nl
{
    uint32_t convertToKeySym(std::string key);
    bool     isKeyPressed(uint32_t ks);
} // namespace nl
