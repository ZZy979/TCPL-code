#include <assert.h>

#include "shellsort.h"

typedef struct {
    int arr[20];
    int length;
    int sorted[20];
} TESTCASE;

int array_equal(int a[], int b[], int n);

int main() {
    TESTCASE test_cases[] = {
        {{6, 3, 1, 8, 4, 2, 7, 0, 9, 5}, 10, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}},
        {{3, 2, 3}, 3, {2, 3, 3}},
        {{8}, 1, {8}},
        {{}, 0, {}}
    };
    int i;

    for (i = 0; i < 4; ++i) {
        shellsort(test_cases[i].arr, test_cases[i].length);
        assert(array_equal(test_cases[i].arr, test_cases[i].sorted, test_cases[i].length));
    }
    return 0;
}

int array_equal(int a[], int b[], int n) {
    int i;

    for (i = 0; i < n; ++i)
        if (a[i] != b[i])
            return 0;
    return 1;
}
