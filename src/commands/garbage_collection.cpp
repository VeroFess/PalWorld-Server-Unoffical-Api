#include "commands.h"
#include "SDKDirect.h"
#include "utils.h"
#include "engine_functions.h"

void garbage_collection_handle(std::vector<folly::fbstring> &user_input) {
    ForceGarbageCollection(Engine, true);
    spdlog::info("[CMD::ForceGarbageCollection] done");
}