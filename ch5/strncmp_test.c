#include <assert.h>

#include "strncmp.h"

typedef struct {
    char s[20];
    char t[20];
    int n;
    int expected;
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"abc", "abd", 20, -1},
        {"abc", "abd", 2, 0},
        {"abc", "abd", 0, 0},
        {"abc", "abcd", 4, -1},
        {"abc", "abcd", 1, 0},
        {"abc", "abc", 20, 0},
        {"abc", "abC", 3, 1},
        {"abc", "abC", 2, 0},
        {"abc", "a", 20, 1},
        {"abc", "a", 1, 0},
        {"", "abc", 20, -1},
        {"", "abc", 0, 0},
        {"abc", "", 20, 1},
        {"abc", "", 0, 0},
        {"", "", 20, 0}
    };
    int i;

    for (i = 0; i < 15; ++i) {
        int res = strncmp(test_cases[i].s, test_cases[i].t, test_cases[i].n);
        if (test_cases[i].expected == -1)
            assert(res < 0);
        else if (test_cases[i].expected == 1)
            assert(res > 0);
        else
            assert(res == 0);
    }
    return 0;
}
