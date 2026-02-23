#include "settings.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>

namespace runner {
namespace {

std::string trim(const std::string& value) {
  const auto first = value.find_first_not_of(" \t\r\n");
  if (first == std::string::npos) {
    return "";
  }
  const auto last = value.find_last_not_of(" \t\r\n");
  return value.substr(first, last - first + 1);
}

bool parse_bool(const std::string& value, bool fallback) {
  std::string v = value;
  std::transform(v.begin(), v.end(), v.begin(), [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
  if (v == "1" || v == "true" || v == "yes" || v == "on") {
    return true;
  }
  if (v == "0" || v == "false" || v == "no" || v == "off") {
    return false;
  }
  return fallback;
}

template <typename T>
T clamp(T value, T low, T high) {
  if (value < low) {
    return low;
  }
  if (value > high) {
    return high;
  }
  return value;
}

} // namespace

Settings load_settings(const std::string& path) {
  Settings settings{};
  std::ifstream in(path);
  if (!in.is_open()) {
    return settings;
  }

  std::string line;
  while (std::getline(in, line)) {
    line = trim(line);
    if (line.empty() || line.starts_with('#') || line.starts_with(';')) {
      continue;
    }

    const auto eq = line.find('=');
    if (eq == std::string::npos) {
      continue;
    }

    const std::string key = trim(line.substr(0, eq));
    const std::string value = trim(line.substr(eq + 1));

    try {
      if (key == "width") settings.width = clamp<std::uint32_t>(static_cast<std::uint32_t>(std::stoul(value)), 640u, 7680u);
      else if (key == "height") settings.height = clamp<std::uint32_t>(static_cast<std::uint32_t>(std::stoul(value)), 480u, 4320u);
      else if (key == "fullscreen") settings.fullscreen = parse_bool(value, settings.fullscreen);
      else if (key == "vsync") settings.vsync = parse_bool(value, settings.vsync);
      else if (key == "master_volume") settings.master_volume = clamp<float>(std::stof(value), 0.0f, 1.0f);
      else if (key == "input_deadzone") settings.input_deadzone = clamp<float>(std::stof(value), 0.0f, 1.0f);
      else if (key == "render_scale") settings.render_scale = clamp<float>(std::stof(value), 0.5f, 2.0f);
    } catch (...) {
    }
  }

  return settings;
}

bool save_settings(const std::string& path, const Settings& settings) {
  std::ofstream out(path, std::ios::trunc);
  if (!out.is_open()) {
    return false;
  }

  out << "# Runtime settings\n";
  out << "width=" << settings.width << '\n';
  out << "height=" << settings.height << '\n';
  out << "fullscreen=" << (settings.fullscreen ? "true" : "false") << '\n';
  out << "vsync=" << (settings.vsync ? "true" : "false") << '\n';
  out << "master_volume=" << settings.master_volume << '\n';
  out << "input_deadzone=" << settings.input_deadzone << '\n';
  out << "render_scale=" << settings.render_scale << '\n';
  return true;
}

void print_settings(const Settings& settings) {
  std::cout << "Current settings:\n";
  std::cout << "  resolution: " << settings.width << "x" << settings.height << '\n';
  std::cout << "  fullscreen: " << (settings.fullscreen ? "on" : "off") << '\n';
  std::cout << "  vsync: " << (settings.vsync ? "on" : "off") << '\n';
  std::cout << "  master_volume: " << settings.master_volume << '\n';
  std::cout << "  input_deadzone: " << settings.input_deadzone << '\n';
  std::cout << "  render_scale: " << settings.render_scale << '\n';
}

void interactive_settings_menu(Settings& settings) {
  while (true) {
    std::cout << "\n=== Settings Menu ===\n";
    std::cout << "1) Resolution\n";
    std::cout << "2) Toggle fullscreen\n";
    std::cout << "3) Toggle vsync\n";
    std::cout << "4) Master volume\n";
    std::cout << "5) Input deadzone\n";
    std::cout << "6) Render scale\n";
    std::cout << "7) Show settings\n";
    std::cout << "0) Exit menu\n";
    std::cout << "Select: ";

    int choice = -1;
    std::cin >> choice;
    if (!std::cin.good()) {
      std::cin.clear();
      std::cin.ignore(1024, '\n');
      continue;
    }

    if (choice == 0) {
      return;
    }

    if (choice == 1) {
      std::uint32_t w = settings.width;
      std::uint32_t h = settings.height;
      std::cout << "Width: ";
      std::cin >> w;
      std::cout << "Height: ";
      std::cin >> h;
      settings.width = clamp<std::uint32_t>(w, 640u, 7680u);
      settings.height = clamp<std::uint32_t>(h, 480u, 4320u);
    } else if (choice == 2) {
      settings.fullscreen = !settings.fullscreen;
    } else if (choice == 3) {
      settings.vsync = !settings.vsync;
    } else if (choice == 4) {
      float v = settings.master_volume;
      std::cout << "Master volume (0.0 - 1.0): ";
      std::cin >> v;
      settings.master_volume = clamp<float>(v, 0.0f, 1.0f);
    } else if (choice == 5) {
      float v = settings.input_deadzone;
      std::cout << "Input deadzone (0.0 - 1.0): ";
      std::cin >> v;
      settings.input_deadzone = clamp<float>(v, 0.0f, 1.0f);
    } else if (choice == 6) {
      float v = settings.render_scale;
      std::cout << "Render scale (0.5 - 2.0): ";
      std::cin >> v;
      settings.render_scale = clamp<float>(v, 0.5f, 2.0f);
    } else if (choice == 7) {
      print_settings(settings);
    }
  }
}

} // namespace runner
