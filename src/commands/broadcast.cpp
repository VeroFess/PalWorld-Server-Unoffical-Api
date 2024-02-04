#include "commands.h"
#include "SDKDirect.h"
#include "utils.h"

void broadcast_handle(std::vector<folly::fbstring> &user_input) {
    if (user_input.empty()) {
        return;
    }

    folly::fbstring message;

    for (auto ipt : user_input) {
        message.append(ipt).append(" ");
    }

#ifdef __linux
    auto u16str     = local_codepage_to_utf16(message.toStdString());
    auto fstringMsg = SDK::FString();

    fstringMsg.Data        = (char16_t *)u16str.c_str();
    fstringMsg.NumElements = u16str.size() / sizeof(char16_t);
    fstringMsg.MaxElements = fstringMsg.NumElements;
#else
    auto fstringMsg = SDK::FString(local_codepage_to_utf16(message.toStdString()).c_str());
#endif

    SDK::SendSystemAnnounce(fstringMsg);

    spdlog::info("[CMD::BroadcastChatMessage] {}", message);
}