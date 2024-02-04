#include "console.h"

folly::MPMCQueue<spdlog::details::log_msg_buffer *> log_momory_queue(64);