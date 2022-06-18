#include <assert.h>

#include "swap_macro.h"

int main() {
    char a = 'A', b = 'B';
    int arr[] = {1, 2, 3, 4};

    swap(char, a, b);
    assert(a == 'B' && b == 'A');

    swap(int, arr[1], arr[3]);
    assert(arr[1] == 4 && arr[3] == 2);
    return 0;
}
