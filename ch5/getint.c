#include "getint.h"

#include <stdio.h>
#include <ctype.h>

#include "../ch4/getch.h"

/* getint：将输入中的下一个整数赋值给*pn */
int getint(int *pn) {
    int c, sign;

    while (isspace(c = getch()))    /* 跳过空白符 */
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);     /* 不是数字 */
        return 0;
    }
    sign = c == '-' ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
