#include <assert.h>
#include <string.h>

#include "strcat.h"

typedef struct {
    char s[40];
    char t[20];
    char expected[40];
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"hello, ", "world!", "hello, world!"},
        {"", "world!", "world!"},
        {"hello, ", "", "hello, "},
        {"", "", ""}
    };
    int i;

    for (i = 0; i < 4; ++i) {
        strcat_(test_cases[i].s, test_cases[i].t);
        assert(strcmp(test_cases[i].s, test_cases[i].expected) == 0);
    }
    return 0;
}
