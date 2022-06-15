#include <assert.h>

#include "getbits.h"

int main() {
    assert(getbits(58, 4, 3) == 6);
    assert(getbits(58, 4, 5) == 26);
    assert(getbits(58, 0, 1) == 0);
    assert(getbits(58, 31, 31) == 29);
    assert(getbits(2252356397U, 15, 8) == 59);
    assert(getbits(2252356397U, 0, 1) == 1);
    assert(getbits(2252356397U, 31, 1) == 1);
    assert(getbits(2252356397U, 31, 31) == 1126178198U);
    assert(getbits(0, 10, 5) == 0);
    return 0;
}
