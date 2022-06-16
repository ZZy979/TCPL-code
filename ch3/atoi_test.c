#include <assert.h>

#include "atoi.h"

int main() {
    assert(atoi("114514") == 114514);
    assert(atoi(" \n\t+12345") == 12345);
    assert(atoi("-654321") == -654321);
    assert(atoi("2147483647") == 2147483647);
    assert(atoi("-2147483648") == -2147483648);
    assert(atoi("0") == 0);
    assert(atoi("123abc") == 123);
    assert(atoi("abc") == 0);
    assert(atoi("") == 0);
    return 0;
}
