#include <assert.h>
#include <string.h>

#include "squeeze.h"

typedef struct {
    char s[20];
    char c;
    char expected[20];
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"squeeze", 'e', "squz"},
        {"squeeze", 'x', "squeeze"},
        {"", 'a', ""}
    };
    int i;

    for (i = 0; i < 3; ++i) {
        squeeze(test_cases[i].s, test_cases[i].c);
        assert(strcmp(test_cases[i].s, test_cases[i].expected) == 0);
    }
    return 0;
}
