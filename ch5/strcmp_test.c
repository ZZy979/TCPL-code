#include <assert.h>

#include "strcmp.h"

typedef struct {
    char s[20];
    char t[20];
    int expected;
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"abc", "abd", -1},
        {"abc", "abcd", -1},
        {"abc", "abc", 0},
        {"abc", "abC", 1},
        {"abc", "a", 1},
        {"", "abc", -1},
        {"abc", "", 1},
        {"", "", 0}
    };
    int i;

    for (i = 0; i < 8; ++i) {
        int res = strcmp(test_cases[i].s, test_cases[i].t);
        if (test_cases[i].expected == -1)
            assert(res < 0);
        else if (test_cases[i].expected == 1)
            assert(res > 0);
        else
            assert(res == 0);
    }
    return 0;
}
