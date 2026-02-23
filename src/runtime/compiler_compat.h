#pragma once

#include <bit>
#include <cstdint>

#ifndef __has_builtin
#define __has_builtin(x) 0
#endif

#if !__has_builtin(__builtin_assume)
#define __builtin_assume(expr) do { if (!(expr)) __builtin_unreachable(); } while (0)
#endif

#if !__has_builtin(__builtin_rotateleft64)
#define __builtin_rotateleft64(x, n) std::rotl(static_cast<std::uint64_t>(x), static_cast<int>(n))
#endif

#if !__has_builtin(__builtin_rotateleft32)
#define __builtin_rotateleft32(x, n) std::rotl(static_cast<std::uint32_t>(x), static_cast<int>(n))
#endif

#if !defined(_MSC_VER) && !defined(__rdtsc)
#define __rdtsc() __builtin_ia32_rdtsc()
#endif
