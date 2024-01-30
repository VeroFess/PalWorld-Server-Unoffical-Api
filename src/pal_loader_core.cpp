#include "common_entry.h"
#include "spdlog/spdlog.h"
#include "sdk.hpp"

#include "utils.h"

#include <cstdio>
#include <iostream>

typedef void (*ForceGarbageCollectionType)(SDK::UEngine *engine, bool bForcePurge);
typedef SDK::FString *(*LowLevelGetRemoteAddressType)(SDK::UIpConnection *connection, bool bAppendPort);

void pal_loader_thread_start() {
    spdlog::info("loading ...");

    SDK::InitGObjects();

    SDK::UEngine                *engine                   = nullptr;
    SDK::UWorld                 *world                    = nullptr;
    SDK::UPalUtility            *utility                  = nullptr;
    SDK::APalGameStateInGame    *stateInGame              = nullptr;
    ForceGarbageCollectionType   ForceGarbageCollection   = nullptr;
    LowLevelGetRemoteAddressType LowLevelGetRemoteAddress = nullptr;

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

    ForceGarbageCollection   = reinterpret_cast<ForceGarbageCollectionType>(uintptr_t(GetImageBaseOffset()) + Offsets::ForceGarbageCollection);
    LowLevelGetRemoteAddress = reinterpret_cast<LowLevelGetRemoteAddressType>(uintptr_t(GetImageBaseOffset()) + Offsets::LowLevelGetRemoteAddress);

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

            utility->SendSystemAnnounce(world, SDK::FString(local_codepage_to_utf16(message).c_str()));

            spdlog::info("[CMD::BroadcastChatMessage] {}", message);
        } else if (userInput == "gc") {
            ForceGarbageCollection(engine, true);

            spdlog::info("[CMD::ForceGarbageCollection] done");
        } else if (userInput == "list") {
            SDK::TArray<SDK::APalCharacter *> player_characters;

            utility->GetAllPlayerCharacters(world, &player_characters);

            if (player_characters.IsValid()) {
                for (int i = 0; i < player_characters.Num(); i++) {
                    auto character = static_cast<SDK::APalPlayerCharacter *>(player_characters[i]);

                    auto controller = static_cast<SDK::APlayerController *>(character->GetController());

                    std::string address = std::string("[UNK]");

                    if (controller->NetConnection) {
                        auto fsaddress = LowLevelGetRemoteAddress(static_cast<SDK::UIpConnection *>(controller->NetConnection), true);

                        if (fsaddress && fsaddress->IsValid() && fsaddress->Num() > 1) {
                            address = fsaddress->ToString();
                        }
                    }

                    auto state = utility->GetPlayerStateByPlayer(character);

                    std::string name = state->GetPlayerName().ToString();

                    spdlog::info("[CMD::List] GetController = {}, {}", name, address);
                }
            }
        } else {
            spdlog::info("[CMD::???] Unknown command");
        }
    }
}