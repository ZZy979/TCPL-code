#include "bitcount.h"

/* bitcount：统计x中值为1的二进制位的个数 */
int bitcount(unsigned x) {
    int b;

    for (b = 0; x != 0; ++b)
        x &= x - 1;
    return b;
}
