#include <assert.h>
#include <string.h>

#include "reverse.h"

typedef struct {
    char original[20];
    char reversed[20];
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"hello, world!\n", "\n!dlrow ,olleh"},
        {"123", "321"},
        {"a", "a"},
        {"", ""}
    };
    int i;

    for (i = 0; i < 4; ++i) {
        reverse(test_cases[i].original);
        assert(strcmp(test_cases[i].original, test_cases[i].reversed) == 0);
    }
    return 0;
}
