#include "hooks.h"
#include "spdlog/spdlog.h"
#include "engine_functions.h"
#include "utils.h"
#include "console.h"
#include "SDKDirect.h"
#include "folly/IPAddress.h"
#include "events.h"
#include "types.h"
#include "hs/hs.h"

struct process_event_callback_lookup_info {
        int                    num_callback = 0;
        process_event_callback callback_list[1];
};

folly::F14FastMap<int32_t, const char *>                               fast_name_lookup_table(1024);
folly::F14FastMap<int32_t, size_t>                                     fast_name_length_lookup_table(1024);
folly::F14FastMap<int32_t, const process_event_callback_lookup_info *> fast_callback_lookup_table(1024);
std::vector<std::vector<process_event_callback>>                       callback_lookup_vector;
std::map<int32_t, std::vector<process_event_callback>>                 fn_idx_callback_lookup_map;

volatile bool                                              locked = false;
std::map<std::string, std::vector<process_event_callback>> callback_map;
hs_database_t                                             *hyperscan_database = nullptr;
thread_local hs_scratch_t                                 *thread_scratch     = nullptr;

static int hs_event_handler(unsigned int id, unsigned long long from, unsigned long long to, unsigned int flags, void *ctx) {
    auto fid = *static_cast<int32_t *>(ctx);
    auto cbs = callback_lookup_vector[id];
    auto si  = cbs.size();

    if (si > 0) {
        for (int i = 0; i < si; i++) {
            fn_idx_callback_lookup_map[fid].push_back(cbs[i]);
        }
    }

    return 0;
}

void process_event_proxy(SDK::UObject *that, SDK::UFunction *function, void *parms) {
    if (fast_callback_lookup_table.contains(function->Index)) {
        auto cbdata = fast_callback_lookup_table[function->Index];

        if (cbdata->num_callback > 0) {
            for (int i = 0; i < cbdata->num_callback; i++) {
                if (cbdata->callback_list[i](fast_name_lookup_table[function->Index], that, function, parms)) {
                    return;
                }
            }
        }

        engine_process_event(that, function, parms);
        return;
    }

    if (!fast_name_lookup_table.contains(function->Index)) {
        auto name          = function->GetFullName();
        auto length        = strnlen(name.c_str(), name.max_size());
        auto c_name_buffer = static_cast<char *>(malloc(length + 1));

        memset(c_name_buffer, 0, length + 1);
        memcpy(c_name_buffer, name.c_str(), length);

        fast_name_lookup_table.insert({ function->Index, c_name_buffer });
        fast_name_length_lookup_table.insert({ function->Index, length });
    }

    if (hyperscan_database == nullptr) {
        engine_process_event(that, function, parms);
        return;
    }

    if (hs_alloc_scratch(hyperscan_database, &thread_scratch) != HS_SUCCESS) {
        engine_process_event(that, function, parms);
        return;
    }

    if (hs_scan(hyperscan_database, fast_name_lookup_table[function->Index], fast_name_length_lookup_table[function->Index], 0, thread_scratch, hs_event_handler, static_cast<void *>(&function->Index)) != HS_SUCCESS) {
        engine_process_event(that, function, parms);
        return;
    }

    auto cbs = fn_idx_callback_lookup_map[function->Index];
    auto si  = cbs.size();
    auto mi  = static_cast<process_event_callback_lookup_info *>(malloc((si * sizeof(process_event_callback)) + sizeof(process_event_callback_lookup_info)));

    if (mi) {
        mi->num_callback = si;

        if (si > 0) {
            for (int i = 0; i < si; i++) {
                mi->callback_list[i] = cbs[i];
            }
        }

        fast_callback_lookup_table.insert({ function->Index, mi });

        if (mi->num_callback > 0) {
            for (int i = 0; i < mi->num_callback; i++) {
                if (mi->callback_list[i](fast_name_lookup_table[function->Index], that, function, parms)) {
                    return;
                }
            }
        }
    }

    engine_process_event(that, function, parms);
    return;
}

bool register_process_event_callback(const char *regex, process_event_callback callback) {
    if (!locked && strlen(regex) > 0) {
        callback_map[std::string(regex)].push_back(callback);
        return true;
    }
    return false;
}

bool lock_and_init_process_event() {
    if (locked || callback_map.size() == 0) {
        return false;
    }

    locked = true;

    std::vector<std::string>  patterns_cppstr;
    std::vector<const char *> patterns;
    std::vector<unsigned int> flags;
    std::vector<unsigned int> ids;

    unsigned int        index_callback = 0;
    hs_compile_error_t *hs_error       = nullptr;

    for (auto cb : callback_map) {
        patterns_cppstr.push_back(cb.first);
        patterns.push_back(patterns_cppstr[index_callback].c_str());
        flags.push_back(HS_FLAG_CASELESS);
        ids.push_back(index_callback);
        callback_lookup_vector.push_back(cb.second);

        index_callback++;
    }

    auto err = hs_compile_multi(patterns.data(), flags.data(), ids.data(), patterns.size(), HS_MODE_BLOCK, nullptr, &hyperscan_database, &hs_error);

    if (err != HS_SUCCESS) {
        hs_free_compile_error(hs_error);
        return false;
    }

    return true;
}