#include <assert.h>

#include "binsearch2.h"

typedef struct {
    int arr[20];
    int length;
    int val;
    int expected;
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {{2, 10, 18, 22, 24, 30, 35}, 7, 24, 4},
        {{2, 10, 18, 22, 24, 30, 35}, 7, 2, 0},
        {{2, 10, 18, 22, 24, 30, 35}, 7, 35, 6},
        {{2, 10, 18, 22, 24, 30, 35}, 7, 42, -1},
        {{8}, 1, 8, 0},
        {{8}, 1, 88, -1},
        {{}, 0, 88, -1}
    };
    int i;

    for (i = 0; i < 7; ++i)
        assert(binsearch2(test_cases[i].val, test_cases[i].arr, test_cases[i].length) == test_cases[i].expected);
    return 0;
}
