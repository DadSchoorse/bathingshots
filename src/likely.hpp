#pragma once

#if defined(__GNUC__) || defined(__clang__)
#define likely(x)   __builtin_expect((x), 1)
#define unlikely(x) __builtin_expect((x), 0)
#else
#define likely(x)   (x)
#define unlikely(x) (x)
#endif