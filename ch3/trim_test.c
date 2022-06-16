#include <assert.h>
#include <string.h>

#include "trim.h"

typedef struct {
    char original[20];
    char trimmed[20];
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"hello, world!\n", "hello, world!"},
        {" abc\ndef\tghi  \n", " abc\ndef\tghi"},
        {" \t\n", ""},
        {"", ""}
    };
    int i;

    for (i = 0; i < 4; ++i) {
        int n = trim(test_cases[i].original);
        assert(strcmp(test_cases[i].original, test_cases[i].trimmed) == 0);
        assert(n == strlen(test_cases[i].trimmed) - 1);
    }
    return 0;
}
