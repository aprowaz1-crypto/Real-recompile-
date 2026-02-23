#include "gpu_wrapper.h"

#include <SDL2/SDL.h>

namespace platform {

bool GpuWrapper::init(SDL_Window* window) {
  renderer_ = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  return renderer_ != nullptr;
}

void GpuWrapper::shutdown() {
  if (renderer_ != nullptr) {
    SDL_DestroyRenderer(renderer_);
    renderer_ = nullptr;
  }
}

void GpuWrapper::begin_frame(float r, float g, float b, float a) {
  if (renderer_ == nullptr) {
    return;
  }

  stats_ = {};
  SDL_SetRenderDrawColor(
      renderer_,
      static_cast<std::uint8_t>(r * 255.0f),
      static_cast<std::uint8_t>(g * 255.0f),
      static_cast<std::uint8_t>(b * 255.0f),
      static_cast<std::uint8_t>(a * 255.0f));
  SDL_RenderClear(renderer_);
}

void GpuWrapper::submit_indexed(std::uint32_t index_count) {
  stats_.draw_calls += 1;
  stats_.triangles += (index_count / 3);
}

void GpuWrapper::end_frame() {
  if (renderer_ != nullptr) {
    SDL_RenderPresent(renderer_);
  }
}

const GpuFrameStats& GpuWrapper::stats() const {
  return stats_;
}

} // namespace platform
