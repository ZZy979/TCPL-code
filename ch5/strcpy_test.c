#include <assert.h>

#include "strcpy.h"

int strcmp(const char *, const char *);

int main() {
    char *test_cases[] = {
        "hello, world!",
        "abc\0def",
        "!",
        ""
    };
    char temp[20];
    int i;

    for (i = 0; i < 4; ++i) {
        strcpy(temp, test_cases[i]);
        assert(strcmp(temp, test_cases[i]) == 0);
    }
    return 0;
}
