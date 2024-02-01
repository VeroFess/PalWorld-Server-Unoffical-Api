#pragma once

#include <string>

#ifdef __linux_off
std::string utf16_to_local_codepage(char16_t *data, size_t len);
std::string local_codepage_to_utf16(std::string input);
#else
std::wstring local_codepage_to_utf16(std::string input);
std::string  utf16_to_local_codepage(wchar_t *data, size_t len);
#endif