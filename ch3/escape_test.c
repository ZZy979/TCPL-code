#include <assert.h>
#include <string.h>

#include "escape.h"

typedef struct {
    char unescaped[20];
    char escaped[40];
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"abc\a\b\f\n\r\t\v\\\'\"123", "abc\\a\\b\\f\\n\\r\\t\\v\\\\\\\'\\\"123"},
        {"hello, world!", "hello, world!"},
        {"", ""},
        {"x", "\\x"}
    };
    char temp[40];
    int i;

    for (i = 0; i < 3; ++i) {
        escape(temp, test_cases[i].unescaped);
        assert(strcmp(temp, test_cases[i].escaped) == 0);
    }

    for (i = 0; i < 4; ++i) {
        unescape(temp, test_cases[i].escaped);
        assert(strcmp(temp, test_cases[i].unescaped) == 0);
    }
    return 0;
}
