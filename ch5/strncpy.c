#include "strncpy.h"

/* strncpy：将字符串t中最多前n个字符拷贝到字符串s中 */
void strncpy(char *s, char *t, size_t n) {
    while (n-- && (*s++ = *t++))
        ;
}
