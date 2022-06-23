#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "strdup.h"

int main() {
    char *test_cases[] = {"hello, world!", "abc\tdef\nghi", ""};
    int i;

    for (i = 0; i < 3; ++i) {
        char *s = strdup_(test_cases[i]);
        assert(strcmp(s, test_cases[i]) == 0);
        free(s);
    }
    return 0;
}
