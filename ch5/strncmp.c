#include "strncmp.h"

/* strncmp：将字符串s中至多前n个字符与t比较，s<t时返回<0，s==t时返回0，s>t时返回>0 */
int strncmp(char *s, char *t, size_t n) {
    for (; n && *s == *t; --n, ++s, ++t)
        if (*s == '\0')
            return 0;
    return n == 0 ? 0 : *s - *t;
}
