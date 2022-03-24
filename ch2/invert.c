#include "invert.h"

/* invert：返回将x中从第p位开始的n位求反后的结果 */
unsigned invert(unsigned x, int p, int n) {
    return x ^ (~(~0 << n) << (p + 1 - n));
}
