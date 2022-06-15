#include <assert.h>

#include "bitcount.h"

int main() {
    assert(bitcount(0) == 0);
    assert(bitcount(15) == 4);
    assert(bitcount(1634878502) == 12);
    assert(bitcount(0x80000000U) == 1);
    assert(bitcount(0x55555555U) == 16);
    assert(bitcount(0xffffffffU) == 32);
    return 0;
}
