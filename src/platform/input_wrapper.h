#pragma once

#include <array>
#include <cstdint>

struct _SDL_GameController;
using SDL_GameController = _SDL_GameController;

namespace platform {

struct PadState {
  float left_x = 0.0f;
  float left_y = 0.0f;
  float right_x = 0.0f;
  float right_y = 0.0f;
  float left_trigger = 0.0f;
  float right_trigger = 0.0f;
  std::uint32_t buttons = 0;
};

class InputWrapper {
public:
  bool init();
  void shutdown();
  void poll();
  [[nodiscard]] const PadState& player1() const;

private:
  static float normalize_axis(std::int16_t v);
  static float normalize_trigger(std::uint16_t v);

  SDL_GameController* controller_ = nullptr;
  PadState state_{};
};

} // namespace platform
