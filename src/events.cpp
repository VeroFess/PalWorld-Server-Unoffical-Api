#include "events.h"

eventpp::EventDispatcher<uint32_t, bool(const pal_loader_basic_event &e), pal_loader_event_policies> dispatcher;