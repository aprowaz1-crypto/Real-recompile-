// realrecompile - Android Native Activity entry point
// Simplified version of main.cpp for Android NativeActivity

#include "generated/realrecompile_config.h"
#include "generated/realrecompile_init.h"

#include <rex/cvar.h>
#include <rex/filesystem.h>
#include <rex/runtime.h>
#include <rex/logging.h>
#include <rex/kernel/xthread.h>
#include <rex/kernel/kernel_state.h>

#include <android/native_activity.h>
#include <android/log.h>
#include <android/native_window.h>

#include <atomic>
#include <filesystem>
#include <thread>
#include <memory>
#include <string>

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, "realrecompile", __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, "realrecompile", __VA_ARGS__)

// Forward declare the app creator from main.cpp's XE_DEFINE_WINDOWED_APP macro
// We include main.cpp logic inline since it uses the same app class.

static std::unique_ptr<rex::Runtime> g_runtime;
static std::atomic<bool> g_running{false};
static std::thread g_module_thread;

static void run_game(const std::string& game_dir) {
    LOGI("Starting realrecompile with game dir: %s", game_dir.c_str());

    g_runtime = std::make_unique<rex::Runtime>(game_dir);

    auto status = g_runtime->Setup(
        static_cast<uint32_t>(PPC_CODE_BASE),
        static_cast<uint32_t>(PPC_CODE_SIZE),
        static_cast<uint32_t>(PPC_IMAGE_BASE),
        static_cast<uint32_t>(PPC_IMAGE_SIZE),
        PPCFuncMappings);

    if (XFAILED(status)) {
        LOGE("Runtime setup failed: %08X", status);
        return;
    }

    status = g_runtime->LoadXexImage("game:\\default.xex");
    if (XFAILED(status)) {
        LOGE("Failed to load XEX: %08X", status);
        return;
    }

    auto main_thread = g_runtime->LaunchModule();
    if (!main_thread) {
        LOGE("Failed to launch module");
        return;
    }

    g_running.store(true, std::memory_order_release);
    main_thread->Wait(0, 0, 0, nullptr);
    LOGI("Execution complete");
    g_running.store(false, std::memory_order_release);
}

static void onNativeWindowCreated(ANativeActivity* activity, ANativeWindow* window) {
    LOGI("Native window created: %dx%d",
         ANativeWindow_getWidth(window),
         ANativeWindow_getHeight(window));

    // Get the internal data path for assets
    std::string game_dir = activity->internalDataPath;

    if (!g_running.load(std::memory_order_acquire)) {
        g_module_thread = std::thread([game_dir]() {
            run_game(game_dir);
        });
    }
}

static void onNativeWindowDestroyed(ANativeActivity* activity, ANativeWindow* window) {
    (void)activity;
    (void)window;
    LOGI("Native window destroyed");

    if (g_runtime && g_runtime->kernel_state()) {
        g_runtime->kernel_state()->TerminateTitle();
    }

    if (g_module_thread.joinable()) {
        g_module_thread.join();
    }
    g_runtime.reset();
}

static void onDestroy(ANativeActivity* activity) {
    (void)activity;
    LOGI("Activity destroyed");
    if (g_module_thread.joinable()) {
        g_module_thread.join();
    }
    g_runtime.reset();
}

// Android NativeActivity entry point
void ANativeActivity_onCreate(ANativeActivity* activity,
                               void* savedState, size_t savedStateSize) {
    (void)savedState;
    (void)savedStateSize;

    LOGI("NativeActivity onCreate");

    // Initialize logging
    auto log_config = rex::BuildLogConfig(nullptr, "info", {});
    rex::InitLogging(log_config);

    // Set up callbacks
    activity->callbacks->onNativeWindowCreated = onNativeWindowCreated;
    activity->callbacks->onNativeWindowDestroyed = onNativeWindowDestroyed;
    activity->callbacks->onDestroy = onDestroy;

    activity->instance = nullptr;
}
