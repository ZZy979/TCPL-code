#include "trim.h"

#include <string.h>

/* trim：删除字符串尾部的空格、制表符与换行符 */
int trim(char s[]) {
    int n;

    for (n = strlen(s) - 1; n >= 0; --n)
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    s[n + 1] = '\0';
    return n;
}
