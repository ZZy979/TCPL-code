#include <assert.h>
#include <string.h>

#include "itoa3.h"

typedef struct {
    int num;
    char str[40];
    int width;
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {123456, "123456", 0},
        {123456, "  123456", 8},
        {-654321, "-654321", 7},
        {-654321, "   -654321", 10},
        {0, "0", 0},
        {2147483647, "2147483647", 10}
    };
    char temp[40];
    int i;

    for (i = 0; i < 6; ++i) {
        itoa(test_cases[i].num, temp, test_cases[i].width);
        assert(strcmp(temp, test_cases[i].str) == 0);
    }
    return 0;
}
