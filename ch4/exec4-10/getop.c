#include <stdio.h>
#include <ctype.h>

#include "calc.h"

/* getop：从输入行line获取下一个运算符或操作数 */
int getop(char line[], int len, int *index, char s[]) {
    int i, c;

    if (*index >= len)
        return EOF;
    while (*index < len && ((s[0] = c = line[(*index)++]) == ' ' || c == '\t'))
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;       /* 不是数字 */
    i = 0;
    if (isdigit(c))     /* 收集整数部分 */
        while (*index < len && isdigit(s[++i] = c = line[(*index)++]))
            ;
    if (c == '.')       /* 收集小数部分 */
        while (*index < len && isdigit(s[++i] = c = line[(*index)++]))
            ;
    s[i] = '\0';
    if (c != EOF)
        --*index;
    return NUMBER;
}
