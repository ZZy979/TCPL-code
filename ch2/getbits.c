#include "getbits.h"

/* getbits：返回x中从第p位开始的n位(0<n≤p+1≤32, n<=31) */
unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
