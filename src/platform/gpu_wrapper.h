#pragma once

#include <cstdint>

struct SDL_Window;
struct SDL_Renderer;

namespace platform {

struct GpuFrameStats {
  std::uint32_t draw_calls = 0;
  std::uint32_t triangles = 0;
};

class GpuWrapper {
public:
  bool init(SDL_Window* window);
  void shutdown();

  void begin_frame(float r, float g, float b, float a);
  void submit_indexed(std::uint32_t index_count);
  void end_frame();

  [[nodiscard]] const GpuFrameStats& stats() const;

private:
  SDL_Renderer* renderer_ = nullptr;
  GpuFrameStats stats_{};
};

} // namespace platform
