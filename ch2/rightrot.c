#include "rightrot.h"

#include <limits.h>

/* rightrot：返回将x循环右移n位后的结果 */
unsigned rightrot(unsigned x, int n) {
    return (x >> n) | ((x & ~(~0 << n)) << (sizeof(x) * CHAR_BIT - n));
}
