#include "common_entry.h"
#include "SDKDirect.h"

#include "console.h"
#include "spdlog/async.h"
#include "spdlog/spdlog.h"
#include "lockfree_queue_sink.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"

#include "folly/Hash.h"
#include "folly/String.h"
#include "folly/container/F14Map.h"

#include "hooks.h"
#include "utils.h"
#include "commands.h"
#include "engine_functions.h"

#include <cstdio>
#include <iostream>

folly::F14FastMap<folly::fbstring, console_command_handler_type> command_handler_map;
std::shared_ptr<spdlog::async_logger>                            pal_async_log;

void pal_loader_thread_start() {
    spdlog::info("loading ...");

    engine_init();
    SDK::sdk_init();

    // Start initializing spdlog
    spdlog::init_thread_pool(8192, 1);

    auto stdout_sink = std::make_shared<spdlog::sinks::stdout_color_sink_st>();

    std::vector<spdlog::sink_ptr> backend_sinks;
    backend_sinks.push_back(stdout_sink);

    auto memory_buffer_sink = std::make_shared<lockfree_queue_sink_mt>();
    memory_buffer_sink->add_sink(stdout_sink);

    std::vector<spdlog::sink_ptr> default_sinks;
    default_sinks.push_back(memory_buffer_sink);

    auto command_logger = std::make_shared<spdlog::logger>("COMMANDS", std::begin(backend_sinks), std::end(backend_sinks));
    pal_async_log       = std::make_shared<spdlog::async_logger>("ENGEVENT", std::begin(default_sinks), std::end(default_sinks), spdlog::thread_pool(), spdlog::async_overflow_policy::overrun_oldest);
    spdlog::register_logger(command_logger);
    spdlog::set_default_logger(command_logger);

    // If there is a log, refresh it
    std::thread log_watchdog([&] {
        while (true) {
            using namespace std::chrono_literals;
            std::this_thread::sleep_for(200ms);

            if (log_momory_queue.size() > 0) {
                ic_async_stop();
            }
        }
    });
    log_watchdog.detach();

    install_hooks();

    command_handler_map.insert({ "broadcast", broadcast_handle });
    command_handler_map.insert({ "gc", garbage_collection_handle });
    command_handler_map.insert({ "list", list_handle });
    command_handler_map.insert({ "kick", kick_handle });

    // All initialization has been completed, infinite loop to accept user input
    while (true) {
        char *input_c_ptr = ic_readline("pal loader ");

        memory_buffer_sink->show_log();

        if (input_c_ptr != nullptr) {
            // don't run async, keep in main thread
            folly::fbstring user_input_raw(input_c_ptr);
            free(input_c_ptr);

            auto user_input = trimWhitespace(user_input_raw);
            if (user_input.empty()) {
                continue;
            }

            std::vector<folly::fbstring> splited_user_input;
            folly::split(' ', user_input, splited_user_input);

            if (splited_user_input.size() != 0) {
                auto command = splited_user_input[0];
                splited_user_input.erase(splited_user_input.begin());

                if (command_handler_map.contains(command)) {
                    command_handler_map[command](splited_user_input);
                } else {
                    spdlog::warn("unkonwon command -> {}", command.toStdString());
                }
            }
        }
    }
}