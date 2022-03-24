#include "getbits.h"

/* getbits：返回x中从第p位开始的n位 */
unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
