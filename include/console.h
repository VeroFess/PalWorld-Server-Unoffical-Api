#include <string>
#include "isocline.h"
#include "spdlog/async.h"
#include "spdlog/spdlog.h"
#include "folly/FBString.h"
#include "folly/MPMCQueue.h"
#include "folly/ProducerConsumerQueue.h"

extern folly::MPMCQueue<spdlog::details::log_msg_buffer *> log_momory_queue;
extern std::shared_ptr<spdlog::async_logger>               pal_async_log;


