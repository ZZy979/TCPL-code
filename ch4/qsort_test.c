#include <assert.h>

#include "qsort.h"

typedef struct {
    int arr[20];
    int left;
    int right;
    int sorted[20];
} TESTCASE;

int array_equal(int a[], int b[], int left, int right);

int main() {
    TESTCASE test_cases[] = {
        {{6, 3, 1, 8, 4, 2, 7, 0, 9, 5}, 0, 9, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}},
        {{6, 3, 1, 8, 4, 2, 7, 0, 9, 5}, 2, 8, {6, 3, 0, 1, 2, 4, 7, 8, 9, 5}},
        {{6, 3, 1, 8, 4, 2, 7, 0, 9, 5}, 5, 1, {6, 3, 1, 8, 4, 2, 7, 0, 9, 5}},
        {{3, 2, 3}, 0, 2, {2, 3, 3}},
        {{8}, 0, 0, {8}},
        {{}, 0, -1, {}}
    };
    int i;

    for (i = 0; i < 6; ++i) {
        qsort(test_cases[i].arr, test_cases[i].left, test_cases[i].right);
        assert(array_equal(test_cases[i].arr, test_cases[i].sorted, test_cases[i].left, test_cases[i].right));
    }
    return 0;
}

int array_equal(int a[], int b[], int left, int right) {
    int i;

    for (i = left; i <= right; ++i)
        if (a[i] != b[i])
            return 0;
    return 1;
}
