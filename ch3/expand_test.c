#include <assert.h>
#include <string.h>

#include "expand.h"

typedef struct {
    char original[50];
    char expanded[50];
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"[0-9a-z]", "[0123456789abcdefghijklmnopqrstuvwxyz]"},
        {"4-8+3", "45678+3"},
        {"A-F-I", "ABCDEFFGHI"},
        {"2-5-3", "2345"},
        {"-1", "-1"},
        {"A-", "A-"},
        {"z-a,5-1", ","},
        {"a-Z,0-a", "a-Z,0-a"},
        {"", ""}
    };
    char temp[50];
    int i;

    for (i = 0; i < 9; ++i) {
        expand(test_cases[i].original, temp);
        assert(strcmp(temp, test_cases[i].expanded) == 0);
    }
    return 0;
}
