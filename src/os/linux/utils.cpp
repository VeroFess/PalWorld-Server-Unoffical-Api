#include "utils.h"
#include <iostream>
#include <vector>
#include <string>
#include <locale>
#include <iconv.h>

std::string local_codepage_to_utf16(std::string input) {
    iconv_t conv = iconv_open("UTF-16LE", "UTF-8");
    if (conv == (iconv_t)-1) {
        perror("iconv_open");
        return "";
    }

    size_t            in_bytes_left  = input.size();
    size_t            out_bytes_left = in_bytes_left * 4;
    std::vector<char> outbuf(out_bytes_left, 0);

    char *in_buf  = const_cast<char *>(input.data());
    char *out_ptr = outbuf.data();

    if (iconv(conv, &in_buf, &in_bytes_left, &out_ptr, &out_bytes_left) == (size_t)-1) {
        perror("iconv");
        iconv_close(conv);
        return "";
    }

    iconv_close(conv);
    std::string utf16_str(outbuf.data(), out_ptr - outbuf.data());
    return utf16_str;
}

std::string utf16_to_local_codepage(char16_t *data, size_t len) {
    std::string utf16_str((char *)data, len * sizeof(char16_t));

    iconv_t conv = iconv_open("UTF-8", "UTF-16LE");
    if (conv == (iconv_t)-1) {
        perror("iconv_open");
        return "";
    }

    size_t            in_bytes_left  = utf16_str.size();
    size_t            out_bytes_left = in_bytes_left * 4;
    std::vector<char> outbuf(out_bytes_left, 0);

    char *in_buf  = const_cast<char *>(utf16_str.data());
    char *out_ptr = outbuf.data();

    if (iconv(conv, &in_buf, &in_bytes_left, &out_ptr, &out_bytes_left) == (size_t)-1) {
        perror("iconv");
        iconv_close(conv);
        return "";
    }

    iconv_close(conv);
    return std::string(outbuf.data());
}