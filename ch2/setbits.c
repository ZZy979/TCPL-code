#include "setbits.h"

/* setbits：返回将x中从第p位开始的n位设置为y中最右边n位后的结果 */
unsigned setbits(unsigned x, int p, int n, unsigned y) {
    return (x & ~(~(~0 << n) << (p + 1 - n))) | ((y & ~(~0 << n)) << (p + 1 - n));
}
