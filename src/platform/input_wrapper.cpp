#include "input_wrapper.h"

#include <SDL2/SDL.h>

namespace {
constexpr std::uint32_t BTN_A = 1u << 0;
constexpr std::uint32_t BTN_B = 1u << 1;
constexpr std::uint32_t BTN_X = 1u << 2;
constexpr std::uint32_t BTN_Y = 1u << 3;
constexpr std::uint32_t BTN_LB = 1u << 4;
constexpr std::uint32_t BTN_RB = 1u << 5;
constexpr std::uint32_t BTN_START = 1u << 6;
constexpr std::uint32_t BTN_BACK = 1u << 7;
} // namespace

namespace platform {

bool InputWrapper::init() {
  if (SDL_WasInit(SDL_INIT_GAMECONTROLLER) == 0 && SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER) != 0) {
    return false;
  }

  for (int i = 0; i < SDL_NumJoysticks(); ++i) {
    if (SDL_IsGameController(i)) {
      controller_ = SDL_GameControllerOpen(i);
      if (controller_ != nullptr) {
        return true;
      }
    }
  }

  return false;
}

void InputWrapper::shutdown() {
  if (controller_ != nullptr) {
    SDL_GameControllerClose(controller_);
    controller_ = nullptr;
  }
}

void InputWrapper::poll() {
  if (controller_ == nullptr) {
    return;
  }

  SDL_GameControllerUpdate();

  state_.left_x = normalize_axis(
      SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_LEFTX));
  state_.left_y = normalize_axis(
      SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_LEFTY));
  state_.right_x = normalize_axis(
      SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_RIGHTX));
  state_.right_y = normalize_axis(
      SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_RIGHTY));

  state_.left_trigger = normalize_trigger(static_cast<std::uint16_t>(
      SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_TRIGGERLEFT)));
  state_.right_trigger = normalize_trigger(static_cast<std::uint16_t>(
      SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_TRIGGERRIGHT)));

  state_.buttons = 0;
  state_.buttons |= SDL_GameControllerGetButton(controller_, SDL_CONTROLLER_BUTTON_A) ? BTN_A : 0;
  state_.buttons |= SDL_GameControllerGetButton(controller_, SDL_CONTROLLER_BUTTON_B) ? BTN_B : 0;
  state_.buttons |= SDL_GameControllerGetButton(controller_, SDL_CONTROLLER_BUTTON_X) ? BTN_X : 0;
  state_.buttons |= SDL_GameControllerGetButton(controller_, SDL_CONTROLLER_BUTTON_Y) ? BTN_Y : 0;
  state_.buttons |= SDL_GameControllerGetButton(controller_, SDL_CONTROLLER_BUTTON_LEFTSHOULDER) ? BTN_LB : 0;
  state_.buttons |= SDL_GameControllerGetButton(controller_, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER) ? BTN_RB : 0;
  state_.buttons |= SDL_GameControllerGetButton(controller_, SDL_CONTROLLER_BUTTON_START) ? BTN_START : 0;
  state_.buttons |= SDL_GameControllerGetButton(controller_, SDL_CONTROLLER_BUTTON_BACK) ? BTN_BACK : 0;
}

const PadState& InputWrapper::player1() const {
  return state_;
}

float InputWrapper::normalize_axis(std::int16_t v) {
  constexpr float inv = 1.0f / 32767.0f;
  float out = static_cast<float>(v) * inv;
  if (out < -1.0f) {
    out = -1.0f;
  }
  if (out > 1.0f) {
    out = 1.0f;
  }
  return out;
}

float InputWrapper::normalize_trigger(std::uint16_t v) {
  constexpr float inv = 1.0f / 32767.0f;
  float out = static_cast<float>(v) * inv;
  if (out < 0.0f) {
    out = 0.0f;
  }
  if (out > 1.0f) {
    out = 1.0f;
  }
  return out;
}

} // namespace platform
