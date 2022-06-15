#include <assert.h>

#include "invert.h"

int main() {
    assert(invert(58, 4, 3) == 38);
    assert(invert(58, 4, 5) == 37);
    assert(invert(58, 0, 1) == 59);
    assert(invert(58, 31, 31) == 4294967236U);
    assert(invert(2252356397U, 15, 8) == 2252391469U);
    assert(invert(2252356397U, 0, 1) == 2252356396U);
    assert(invert(2252356397U, 31, 1) == 104872749);
    assert(invert(2252356397U, 31, 31) == 2042610899);
    assert(invert(0, 10, 5) == 1984);
    return 0;
}
