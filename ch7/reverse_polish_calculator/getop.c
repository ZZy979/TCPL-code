#include <stdio.h>
#include <ctype.h>

#include "calc.h"

/* getop：获取下一个运算符或操作数 */
int getop(double *op) {
    int c;

    while ((c = getchar()) == ' ' || c == '\t')
        ;
    if (!isdigit(c) && c != '.')
        return c;       /* 不是数字 */
    ungetc(c, stdin);
    scanf("%lf", op);
    return NUMBER;
}
