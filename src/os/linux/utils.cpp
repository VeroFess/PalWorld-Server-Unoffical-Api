#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iconv.h>
#include <langinfo.h>

std::wstring local_codepage_to_utf16(std::string input) {
    const char *codepage     = nl_langinfo(CODESET);
    iconv_t     cd           = iconv_open("UTF-16LE", codepage);
    char       *utf16_string = (char *)malloc(input.size() * 2 + 2);

    printf("local_codepage_to_utf16 still broken! input.size() = %d, input.c_str() = %s\n", input.size(), input.c_str());

    size_t in_len  = input.size();
    size_t out_len = in_len * 2 + 2;

    memset(utf16_string, 0, out_len);

    char *in_buf  = (char *)input.c_str();
    char *out_buf = utf16_string;

    iconv(cd, &in_buf, &in_len, &out_buf, &out_len);

    return std::wstring((wchar_t *)utf16_string, out_len);
}

std::string utf16_to_local_codepage(wchar_t *data, size_t len) {
    return std::string("utf16_to_local_codepage still broken! search __linux_off and give me some help!");
}