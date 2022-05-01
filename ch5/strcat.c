#include "strcat.h"

/* strcat: 将字符串t连接到字符串s的尾部；指针版本 */
void strcat(char *s, char *t) {
    while (*s)
        ++s;
    while (*s++ = *t++)
        ;
}
