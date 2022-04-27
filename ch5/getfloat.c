#include "getfloat.h"

#include <stdio.h>
#include <ctype.h>

#include "getch.h"

/* getfloat：将输入中的下一个浮点数赋值给*pf */
int getfloat(float* pf) {
    int c, sign;
    float power;

    while (isspace(c = getch()))    /* 跳过空白符 */
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.') {
        ungetch(c);     /* 不是数字 */
        return 0;
    }
    /* 整数部分 */
    sign = c == '-' ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pf = 0.0f; isdigit(c); c = getch())
        *pf = 10.0f * *pf + (c - '0');
    /* 小数部分 */
    if (c == '.')
        c = getch();
    for (power = 1.0; isdigit(c); c = getch()) {
        *pf = 10.0f * *pf + (c - '0');
        power *= 10.0f;
    }
    *pf = sign * *pf / power;
    if (c != EOF)
        ungetch(c);
    return c;
}
