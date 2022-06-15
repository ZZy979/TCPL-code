#include <assert.h>
#include <string.h>

#include "squeeze2.h"

typedef struct {
    char s[30];
    char t[30];
    char expected[30];
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {"squeeze", "e", "squz"},
        {"squeeze", "eqs", "uz"},
        {"squeeze", "abcdefghijklmnopqrstuvwxyz", ""},
        {"squeeze", "x", "squeeze"},
        {"squeeze", "", "squeeze"},
        {"I don't know what happened.", "aeiouAEIOU", " dn't knw wht hppnd."},
        {"", "abcd", ""},
        {"", "", ""}
    };
    int i;

    for (i = 0; i < 8; ++i) {
        squeeze2(test_cases[i].s, test_cases[i].t);
        assert(strcmp(test_cases[i].s, test_cases[i].expected) == 0);
    }
    return 0;
}
