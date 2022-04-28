#include "strlen.h"

/* strlen: 返回字符串s的长度 */
int strlen(char *s) {
    int n;

    for (n = 0; *s != '\0'; ++s)
        ++n;
    return n;
}
