#include <assert.h>
#include <string.h>

#include "itoa.h"

typedef struct {
    int num;
    char str[12];
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {123456, "123456"},
        {-654321, "-654321"},
        {0, "0"},
        {2147483647, "2147483647"},
        {-2147483648, "-2147483648"}
    };
    char temp[12];
    int i;

    for (i = 0; i < 5; ++i) {
        itoa(test_cases[i].num, temp);
        assert(strcmp(temp, test_cases[i].str) == 0);
    }
    return 0;
}
