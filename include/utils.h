#pragma once

#include <string>
#include <vector>

#ifdef __linux
std::string utf16_to_local_codepage(char16_t *data, size_t len);
std::string local_codepage_to_utf16(std::string input);
#else
std::wstring local_codepage_to_utf16(std::string input);
std::string  utf16_to_local_codepage(wchar_t *data, size_t len);
#endif

std::vector<unsigned short> hexstring2shorts(const std::string &hex);
unsigned long long search_pattern(const unsigned char* data, const unsigned int data_len, const std::vector<unsigned short> &&pattern);
