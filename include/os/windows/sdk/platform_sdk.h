#pragma once

#include <stdint.h>

namespace Offsets {
    constexpr int32_t GObjects                 = 0x088818E0;
    constexpr int32_t GWorld                   = 0x089ED4A0;
    constexpr int32_t AppendString             = 0x02D35860;
    constexpr int32_t GNames                   = 0x00000000;
    constexpr int32_t ProcessEvent             = 0x02EE14C0;
    constexpr int32_t ProcessEventIdx          = 0x0000004C;
    constexpr int32_t ForceGarbageCollection   = 0x04EF0AE0;
    constexpr int32_t LowLevelGetRemoteAddress = 0x013CBA00;
    constexpr int32_t KickPlayer               = 0x02B41240;
    constexpr int32_t GetEmptyFText            = 0x02C3AF30;
    constexpr int32_t SpawnPlayActor           = 0x04ADA840;
} // namespace Offsets

uintptr_t GetImageBaseOffset();