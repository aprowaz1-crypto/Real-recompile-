#include "ppc_unimplemented.h"

#include <immintrin.h>

namespace {

inline std::uint32_t ppc_mask(std::uint32_t mb, std::uint32_t me) {
  mb &= 31;
  me &= 31;

  if (mb <= me) {
    const std::uint32_t left = 0xFFFFFFFFu >> mb;
    const std::uint32_t right = 0xFFFFFFFFu << (31u - me);
    return left & right;
  }

  const std::uint32_t hi = 0xFFFFFFFFu >> mb;
  const std::uint32_t lo = 0xFFFFFFFFu << (31u - me);
  return hi | lo;
}

inline std::uint32_t rotl32(std::uint32_t value, std::uint32_t shift) {
  shift &= 31;
  return (value << shift) | (value >> ((32u - shift) & 31u));
}

} // namespace

namespace ppc {

std::uint32_t cntlzw(std::uint32_t value) {
  if (value == 0) {
    return 32;
  }
#if defined(__LZCNT__)
  return static_cast<std::uint32_t>(_lzcnt_u32(value));
#else
  return static_cast<std::uint32_t>(__builtin_clz(value));
#endif
}

std::uint32_t popcntw(std::uint32_t value) {
#if defined(__POPCNT__)
  return static_cast<std::uint32_t>(_mm_popcnt_u32(value));
#else
  return static_cast<std::uint32_t>(__builtin_popcount(value));
#endif
}

std::uint32_t rlwinm(std::uint32_t rs, std::uint32_t sh, std::uint32_t mb, std::uint32_t me) {
  const std::uint32_t rotated = rotl32(rs, sh);
  const std::uint32_t mask = ppc_mask(mb, me);
  return rotated & mask;
}

float fres_approx(float value) {
  __m128 input = _mm_set_ss(value);
  __m128 reciprocal = _mm_rcp_ss(input);
  return _mm_cvtss_f32(reciprocal);
}

} // namespace ppc
