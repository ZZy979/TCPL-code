#include <stdio.h>
#include <ctype.h>

#include "calc.h"

/* getop：获取下一个运算符或操作数 */
int getop(char s[]) {
    int i = 0, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.' && c != '-')
        return c;       /* 不是数字 */
    if (c == '-') {
        c = getch();
        if (!isdigit(c) && c != '.') {
            ungetch(c);
            return '-'; /* 单独的减号 */
        }
        s[++i] = c;     /* 负号后的数字或小数点 */
    }
    if (isdigit(c))     /* 收集整数部分 */
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')       /* 收集小数部分 */
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}
