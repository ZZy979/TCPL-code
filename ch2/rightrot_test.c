#include <assert.h>

#include "rightrot.h"

int main() {
    assert(rightrot(2252356397U, 0) == 2252356397U);
    assert(rightrot(2252356397U, 1) == 3273661846U);
    assert(rightrot(2252356397U, 5) == 1815216601);
    assert(rightrot(2252356397U, 20) == 62052452);
    assert(rightrot(2252356397U, 31) == 209745499);
    return 0;
}
