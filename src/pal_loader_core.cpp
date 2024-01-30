#include "common_entry.h"
#include "spdlog/spdlog.h"
#include "sdk.hpp"

#include <cstdio>
#include <iostream>

void pal_loader_thread_start() {
    spdlog::info("loading ...");

    SDK::InitGObjects();

    SDK::UEngine             *engine      = nullptr;
    SDK::UWorld              *world       = nullptr;
    SDK::UPalUtility         *utility     = nullptr;
    SDK::APalGameStateInGame *stateInGame = nullptr;

    for (int i = 0; i < SDK::UObject::GObjects->Num(); i++) {
        SDK::UObject *object = SDK::UObject::GObjects->GetByIndex(i);

        if (!object)
            continue;

        if (object->IsA(SDK::UEngine::StaticClass()) && !object->IsDefaultObject()) {
            engine = static_cast<SDK::UEngine *>(object);
            break;
        }
    }

    world = *reinterpret_cast<SDK::UWorld **>(uintptr_t(GetImageBaseOffset()) + Offsets::GWorld);

    utility = SDK::UPalUtility::GetDefaultObj();

    stateInGame = utility->GetPalGameStateInGame(world);

    spdlog::info("Unreal::GObjects         = {:x}", uintptr_t(SDK::UObject::GObjects));
    spdlog::info("Unreal::GEngine          = {}", uintptr_t(engine));
    spdlog::info("Unreal::GWorld           = {}", uintptr_t(world));
    spdlog::info("UPalUtility              = {:x}", uintptr_t(utility));
    spdlog::info("PalGameStateInGame       = {:x}", uintptr_t(stateInGame));
    spdlog::info("IsDevelopmentBuild       = {}", utility->IsDevelopmentBuild());

    // Now wo can do some magic!

    // Hook code removed, it's unstable

    while (true) {
        std::cout << "Pal Loader > ";
        std::string userInput;
        std::getline(std::cin, userInput);

        if (userInput == "state") {
            spdlog::info("[CMD::State] WorldName               = {}", stateInGame->GetWorldName().ToString());
            spdlog::info("[CMD::State] World Save Directory    = {}", stateInGame->WorldSaveDirectoryName.ToString());
            spdlog::info("[CMD::State] Server Frame Time       = {}", stateInGame->GetServerFrameTime());
            spdlog::info("[CMD::State] Max Player              = {}", stateInGame->GetMaxPlayerNum());
        } else if (userInput.starts_with("broadcast")) {
            auto message = userInput.substr(10);

            // Chinese need UTF16-LE
            // MultiByteToWideChar(CP_ACP, 0, message.c_str(), message.size(), unicodeMessage, 0x100);

            utility->SendSystemAnnounce(world, SDK::FString(std::wstring(message.begin(), message.end()).c_str()));

            spdlog::info("[CMD::BroadcastChatMessage] {}", message);
        } else {
            spdlog::info("[CMD::???] Unknown command");
        }
    }
}