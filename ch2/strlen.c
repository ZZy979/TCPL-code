#include "strlen.h"

/* strlen: 返回字符串s的长度 */
int strlen(char s[]) {
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}
