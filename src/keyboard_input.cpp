#include "keyboard_input.hpp"

#include "logger.hpp"

// TODO build without X11
#ifndef NL_X11
#define NL_X11 1
#endif

#if NL_X11
#include "keyboard_input_x11.hpp"
#endif

namespace nl
{
    uint32_t convertToKeySym(std::string key)
    {
#if NL_X11
        return convertToKeySymX11(key);
#endif
        return 0u;
    }

    bool isKeyPressed(uint32_t ks)
    {
#if NL_X11
        return isKeyPressedX11(ks);
#endif
        return false;
    }
} // namespace nl
