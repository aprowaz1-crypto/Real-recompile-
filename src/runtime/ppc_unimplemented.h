#pragma once

#include <cstdint>

namespace ppc {

std::uint32_t cntlzw(std::uint32_t value);
std::uint32_t popcntw(std::uint32_t value);
std::uint32_t rlwinm(std::uint32_t rs, std::uint32_t sh, std::uint32_t mb, std::uint32_t me);
float fres_approx(float value);

} // namespace ppc
