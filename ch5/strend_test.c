#include <assert.h>

#include "strend.h"

typedef struct {
    char s[20];
    char t[20];
    int expected;
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"hello, world", "world", 1},
        {"hello, world", "word", 0},
        {"hello, world", "", 1},
        {"hello, world", "hello, world!", 0},
        {"", "world", 0},
        {"", "", 1}
    };
    int i;

    for (i = 0; i < 6; ++i)
        assert(strend(test_cases[i].s, test_cases[i].t) == test_cases[i].expected);
    return 0;
}
