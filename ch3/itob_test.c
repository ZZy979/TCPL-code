#include <assert.h>
#include <string.h>

#include "itob.h"

typedef struct {
    int num;
    char str[33];
    int base;
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {123456789, "111010110111100110100010101", 2},
        {123456789, "123456789", 10},
        {123456789, "75BCD15", 16},
        {123456789, "FC2EGL", 24},
        {46654, "ZZY", 36},
        {123, "", 1},
        {123, "", 40},
        {-654321, "-654321", 10},
        {-654321, "-2375761", 8},
        {0, "0", 10},
        {2147483647, "2147483647", 10},
        {2147483647, "7FFFFFFF", 16},
        {-2147483648, "-2147483648", 10},
        {-2147483648, "-80000000", 16}
    };
    char temp[33];
    int i;

    for (i = 0; i < 14; ++i) {
        temp[0] = '\0';
        itob(test_cases[i].num, temp, test_cases[i].base);
        assert(strcmp(temp, test_cases[i].str) == 0);
    }
    return 0;
}
