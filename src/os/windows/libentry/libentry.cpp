#include <windows.h>
#include "common_entry.h"
#include "SDKDirect.h"
#include <chrono>
#include <thread>

DWORD WINAPI pal_loader_thread_start_wapper(LPVOID lpThreadParameter) {
    constexpr size_t MAX_RETRY = 20;
    size_t retryCount = 0;

    while (retryCount < MAX_RETRY && SDK::World == nullptr && SDK::StateInGame == nullptr) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        retryCount++;
    }

    pal_loader_thread_start();

    // FIXME: pal_loader_thread_start is seen as infinitely looping.
    FreeLibraryAndExitThread((HINSTANCE)lpThreadParameter, 0);
    return 0;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    DWORD ignoredTid;
    switch (fdwReason) {
    case DLL_PROCESS_ATTACH:
        CreateThread(NULL, NULL, pal_loader_thread_start_wapper, (LPVOID)hinstDLL, NULL, &ignoredTid);
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        if (lpvReserved != nullptr) {
            break;
        }
        break;
    }
    return TRUE;
}