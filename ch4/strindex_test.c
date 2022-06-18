#include <assert.h>

#include "strindex.h"

typedef struct {
    char s[20];
    char t[20];
    char expected;
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"height right light", "ight", 2},
        {"hello, world!", "world!", 7},
        {"hello, world!", "hello", 0},
        {"hello", "abc", -1},
        {"hello", "", -1},
        {"", "abc", -1},
        {"", "", -1}
    };
    int i;

    for (i = 0; i < 7; ++i)
        assert(strindex(test_cases[i].s, test_cases[i].t) == test_cases[i].expected);
    return 0;
}
