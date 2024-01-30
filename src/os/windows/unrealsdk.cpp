#include <windows.h>
#include "sdk.hpp"

uintptr_t GetImageBaseOffset() {
    return uintptr_t(GetModuleHandle(0));
}
