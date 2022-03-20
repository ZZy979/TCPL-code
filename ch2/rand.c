#include "rand.h"

unsigned long next = 1;

/* rand: 返回0~32767之间的伪随机数 */
int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}

/* srand: 为rand()函数设置种子数 */
void srand(unsigned int seed) {
    next = seed;
}
