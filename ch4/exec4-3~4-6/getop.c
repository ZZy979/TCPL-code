#include <stdio.h>
#include <ctype.h>

#include "calc.h"

/*
getop：获取下一个运算符或操作数
如果是运算符则返回对应的字符；
如果是标识符则保存到字符串s中，并返回IDENTIFIER；
如果是操作数则保存到字符串s中，并返回NUMBER
*/
int getop(char s[]) {
    int i = 0, c;

    /* 跳过空白符 */
    while ((s[0] = c = getch()) == ' ' || c == '\t')
        ;
    s[1] = '\0';

    /* 运算符 */
    if (!isalnum(c) && c != '.' && c != '-')
        return c;

    /* 标识符 */
    if (isalpha(c)) {
        while (isalpha(s[++i] = c = getch()))
            ;
        s[i] = '\0';
        if (c != EOF)
            ungetch(c);
        return IDENTIFIER;
    }

    if (c == '-') {
        c = getch();
        if (!isdigit(c) && c != '.') {
            ungetch(c);
            return '-'; /* 单独的减号 */
        }
        s[++i] = c;     /* 负号后的数字或小数点 */
    }

    /* 数字 */
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
