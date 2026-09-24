#import <UIKit/UIKit.h>
#include <pthread.h>
#include <atomic>
#include <thread>
#include <memory>
#include <string>

#include "generated/realrecompile_config.h"
#include "generated/realrecompile_init.h"

#include <rex/runtime.h>
#include <rex/kernel/kernel_state.h>
#include <rex/logging.h>

static std::unique_ptr<rex::Runtime> g_runtime;
static std::atomic<bool> g_running{false};
static std::thread g_module_thread;

static void set_game_thread_qos() {
    pthread_set_qos_class_self_np(QOS_CLASS_USER_INTERACTIVE, 0);
    pthread_setname_np("realrecompile.game");
}

static void run_game(NSString* documentsPath) {
    set_game_thread_qos();
    std::string game_dir = [documentsPath fileSystemRepresentation];
    g_runtime = std::make_unique<rex::Runtime>(game_dir);

    auto status = g_runtime->Setup(
        static_cast<uint32_t>(PPC_CODE_BASE),
        static_cast<uint32_t>(PPC_CODE_SIZE),
        static_cast<uint32_t>(PPC_IMAGE_BASE),
        static_cast<uint32_t>(PPC_IMAGE_SIZE),
        PPCFuncMappings);

    if (XFAILED(status)) {
        NSLog(@"Runtime setup failed: %08X", status);
        return;
    }

    status = g_runtime->LoadXexImage("game:\\default.xex");
    if (XFAILED(status)) {
        NSLog(@"Failed to load XEX: %08X", status);
        return;
    }

    auto main_thread = g_runtime->LaunchModule();
    if (!main_thread) {
        NSLog(@"Failed to launch module");
        return;
    }

    g_running.store(true);
    main_thread->Wait(0, 0, 0, nullptr);
    NSLog(@"Execution complete");
    g_running.store(false);
}

@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) UIWindow* window;
@end

@implementation AppDelegate
- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions {
    auto log_config = rex::BuildLogConfig(nullptr, "info", {});
    rex::InitLogging(log_config);

    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.rootViewController = [UIViewController new];
    self.window.rootViewController.view.backgroundColor = UIColor.blackColor;
    [self.window makeKeyAndVisible];

    NSString* docsPath = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject;
    g_module_thread = std::thread([docsPath]() {
        run_game(docsPath);
    });

    return YES;
}

- (void)applicationWillTerminate:(UIApplication*)application {
    if (g_runtime && g_runtime->kernel_state()) {
        g_runtime->kernel_state()->TerminateTitle();
    }
    if (g_module_thread.joinable()) {
        g_module_thread.join();
    }
    g_runtime.reset();
}
@end

int main(int argc, char* argv[]) {
    @autoreleasepool {
        pthread_set_qos_class_self_np(QOS_CLASS_USER_INTERACTIVE, 0);
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
}
