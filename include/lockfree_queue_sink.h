#include "folly/MPMCQueue.h"
#include "folly/String.h"
#include "isocline.h"
#include "spdlog/sinks/base_sink.h"
#include "console.h"

template<typename Mutex>
class lockfree_queue_sink : public spdlog::sinks::base_sink<Mutex> {
    public:
    public:
        lockfree_queue_sink() = default;
        explicit lockfree_queue_sink(std::vector<std::shared_ptr<spdlog::sinks::sink>> sinks)
            : sinks_(sinks) {}

        lockfree_queue_sink(const lockfree_queue_sink &)            = delete;
        lockfree_queue_sink &operator=(const lockfree_queue_sink &) = delete;

        void add_sink(std::shared_ptr<spdlog::sinks::sink> sub_sink) {
            std::lock_guard<Mutex> lock(spdlog::sinks::base_sink<Mutex>::mutex_);
            sinks_.push_back(sub_sink);
        }

        void remove_sink(std::shared_ptr<spdlog::sinks::sink> sub_sink) {
            std::lock_guard<Mutex> lock(spdlog::sinks::base_sink<Mutex>::mutex_);
            sinks_.erase(std::remove(sinks_.begin(), sinks_.end(), sub_sink), sinks_.end());
        }

        void set_sinks(std::vector<std::shared_ptr<spdlog::sinks::sink>> sinks) {
            std::lock_guard<Mutex> lock(spdlog::sinks::base_sink<Mutex>::mutex_);
            sinks_ = std::move(sinks);
        }

        std::vector<std::shared_ptr<spdlog::sinks::sink>> &sinks() {
            return sinks_;
        }

        void show_log(size_t lim = 0) {
            auto items_available = static_cast<size_t>(log_momory_queue.size());
            auto n_items         = lim > 0 ? std::min(lim, items_available) : items_available;

            spdlog::details::log_msg_buffer *elem;
            while ((n_items != 0) && log_momory_queue.read(elem)) {
                for (auto &sub_sink : sinks_) {
                    if (sub_sink->should_log(elem->level)) {
                        sub_sink->log(spdlog::details::log_msg(*elem));
                    }
                }

                delete elem;
                n_items--;
            }
        }

    protected:
        void sink_it_(const spdlog::details::log_msg &msg) override {
            auto elem = new spdlog::details::log_msg_buffer(msg);
            log_momory_queue.write(elem);
        }

        void flush_() override {
            for (auto &sub_sink : sinks_) {
                sub_sink->flush();
            }
        }

        std::vector<std::shared_ptr<spdlog::sinks::sink>> sinks_;
};

#include "spdlog/details/null_mutex.h"
using lockfree_queue_sink_mt = lockfree_queue_sink<spdlog::details::null_mutex>;