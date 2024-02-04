#include "console.h"

#include "folly/FBString.h"
#include <vector>

typedef void (*console_command_handler_type)(std::vector<folly::fbstring> &user_input);

void broadcast_handle(std::vector<folly::fbstring> &user_input);
void garbage_collection_handle(std::vector<folly::fbstring> &user_input);
void list_handle(std::vector<folly::fbstring> &user_input);
void kick_handle(std::vector<folly::fbstring> &user_input);