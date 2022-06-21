#include <assert.h>

#include "strncat.h"

typedef struct {
    char s[40];
    char t[20];
    int n;
    char expected[40];
} TESTCASE;

int strcmp(const char *, const char *);

int main() {
    TESTCASE test_cases[] = {
        {"hello, ", "world!", 3, "hello, wor"},
        {"hello, ", "world!", 20, "hello, world!"},
        {"hello, ", "world!", 0, "hello, "},
        {"", "world!", 5, "world"},
        {"", "world!", 20, "world!"},
        {"hello, ", "", 0, "hello, "},
        {"hello, ", "", 20, "hello, "},
        {"", "", 20, ""}
    };
    int i;

    for (i = 0; i < 8; ++i) {
        strncat(test_cases[i].s, test_cases[i].t, test_cases[i].n);
        assert(strcmp(test_cases[i].s, test_cases[i].expected) == 0);
    }
    return 0;
}
