#include "strncat.h"

/* strncat: 将字符串t中最多前n个字符连接到字符串s的尾部，并以'\0'结束 */
void strncat(char *s, char *t, size_t n) {
    while (*s)
        ++s;
    while (n-- && (*s++ = *t++))
        ;
    *s = '\0';
}
