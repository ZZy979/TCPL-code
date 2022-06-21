#include <assert.h>

#include "alloc.h"

int main() {
    char *p1 = alloc(2000);
    char *p2 = alloc(5000);
    char *p3 = alloc(4000);

    assert(p1 != 0);
    assert(p2 != 0);
    assert(p3 == 0);

    p3 = alloc(3000);
    assert(p3 != 0);

    afree(p3);
    afree(p2);
    afree(p1);

    p1 = alloc(10000);
    assert(p1 != 0);
    afree(p1);
    return 0;
}
