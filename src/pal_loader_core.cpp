#include "common_entry.h"
#include "spdlog/spdlog.h"
#include "sdk.hpp"

#include "utils.h"

#include <cstdio>
#include <iostream>

typedef void (*ForceGarbageCollectionType)(SDK::UEngine *engine, bool bForcePurge);
typedef SDK::FString *(*LowLevelGetRemoteAddressType)(SDK::UIpConnection *connection, bool bAppendPort);
typedef bool (*KickPlayerType)(const SDK::UObject *WorldContextObject, const SDK::FGuid *PlayerUId, const SDK::FText *KickReason);
typedef SDK::FText *(*GetEmptyFTextType)();

std::string str_tolower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    return s;
}

void pal_loader_thread_start() {
    spdlog::info("loading ...");

    SDK::InitGObjects();

    SDK::UEngine                *engine                   = nullptr;
    SDK::UWorld                 *world                    = nullptr;
    SDK::UPalUtility            *utility                  = nullptr;
    SDK::APalGameStateInGame    *stateInGame              = nullptr;
    ForceGarbageCollectionType   ForceGarbageCollection   = nullptr;
    LowLevelGetRemoteAddressType LowLevelGetRemoteAddress = nullptr;
    KickPlayerType               KickPlayer               = nullptr;
    GetEmptyFTextType            GetEmptyFText            = nullptr;

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
    KickPlayer               = reinterpret_cast<KickPlayerType>(uintptr_t(GetImageBaseOffset()) + Offsets::KickPlayer);
    GetEmptyFText            = reinterpret_cast<GetEmptyFTextType>(uintptr_t(GetImageBaseOffset()) + Offsets::GetEmptyFText);

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
                spdlog::info("[CMD::List] current {} player online", player_characters.Num());

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

                    auto state    = utility->GetPlayerStateByPlayer(character);
                    auto raw_name = state->GetPlayerName();
                    auto uid      = utility->GetPlayerUIDByActor(character);

                    std::string name = utf16_to_local_codepage(raw_name.Data, raw_name.NumElements);

                    spdlog::info("[CMD::List] {}, {:08x}, {}", name, static_cast<uint32_t>(uid.A), address);
                }
            }
        } else if (userInput.starts_with("kick")) {
            auto                              kick_uid = str_tolower(userInput.substr(5));
            SDK::TArray<SDK::APalCharacter *> player_characters;
            utility->GetAllPlayerCharacters(world, &player_characters);

            if (player_characters.IsValid()) {
                for (int i = 0; i < player_characters.Num(); i++) {
                    char        hexuid[9] = {};
                    auto        character = static_cast<SDK::APalPlayerCharacter *>(player_characters[i]);
                    auto        uid       = utility->GetPlayerUIDByActor(character);
                    auto        state     = utility->GetPlayerStateByPlayer(character);
                    auto        raw_name  = state->GetPlayerName();
                    std::string name      = utf16_to_local_codepage(raw_name.Data, raw_name.NumElements);

                    sprintf_s(hexuid, "%08x", static_cast<uint32_t>(uid.A));

                    if (kick_uid == std::string(hexuid)) {
                        SDK::FText *reason = GetEmptyFText();

                        auto kicked = KickPlayer(world, &uid, reason);

                        if (kicked) {
                            spdlog::info("[CMD::Kick] player {} kicked", name);
                        }
                    }
                }
            }
        } else {
            spdlog::info("[CMD::???] Unknown command");
        }
    }
}