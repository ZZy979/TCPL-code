#include <assert.h>

#include "strncpy.h"

int memcmp(const void *, const void *, size_t);
size_t strlen(const char *);

typedef struct {
    char original[20];
    int n;
    char expected[20];
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"hello, world!", 5, "hello"},
        {"hello, world!", 20, "hello, world!"},
        {"hello, world!", 0, ""},
        {"abc\0def", 20, "abc"},
        {"!", 20, "!"},
        {"", 20, ""}
    };
    char temp[20];
    int i;

    for (i = 0; i < 6; ++i) {
        int len = strlen(test_cases[i].original);
        int ncmp = test_cases[i].n < len ? test_cases[i].n : len;

        strncpy(temp, test_cases[i].original, test_cases[i].n);
        assert(memcmp(temp, test_cases[i].expected, ncmp) == 0);
    }
    return 0;
}
