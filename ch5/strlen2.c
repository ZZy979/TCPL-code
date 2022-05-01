#include "strlen.h"

/* strlen: 返回字符串s的长度 */
int strlen(char *s) {
    char *p = s;

    while (*p != '\0')
        ++p;
    return p - s;
}
