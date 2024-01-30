#pragma once

#include <Windows.h>
#include <string>

std::wstring local_codepage_to_utf16(std::string input);
std::string utf16_to_local_codepage(wchar_t * data, size_t len);