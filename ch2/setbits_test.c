#include <assert.h>

#include "setbits.h"

int main() {
    assert(setbits(58, 4, 3, 9) == 38);
    assert(setbits(58, 4, 5, 14) == 46);
    assert(setbits(58, 0, 1, 2) == 58);
    assert(setbits(58, 31, 31, 4294967295U) == 4294967294U);
    assert(setbits(2252356397U, 15, 8, 0) == 2252341293U);
    assert(setbits(2252356397U, 0, 1, 0) == 2252356396U);
    assert(setbits(2252356397U, 31, 1, 0) == 104872749);
    assert(setbits(2252356397U, 31, 31, 4294967295U) == 4294967295U);
    assert(setbits(0, 10, 5, 22) == 1408);
    return 0;
}
