#include <cstdint>
#include <iostream>

#include "ppc_unimplemented.h"

int main() {
  const std::uint32_t v = 0x00F00000u;

  const auto lz = ppc::cntlzw(v);
  const auto pop = ppc::popcntw(v);
  const auto rw = ppc::rlwinm(v, 5u, 3u, 24u);
  const auto fr = ppc::fres_approx(3.14159f);

  std::cout << "cntlzw=" << lz << " popcntw=" << pop
            << " rlwinm=" << rw << " fres~=" << fr << '\n';

  return 0;
}
