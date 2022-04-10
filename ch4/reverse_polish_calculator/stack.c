#include <stdio.h>

#include "calc.h"

#define MAXVAL 100  /* 栈的最大深度 */

int sp = 0;         /* 栈的下一个空闲位置 */
double val[MAXVAL]; /* 值栈 */

/* push：把f压入到值栈中 */
void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g", f);
}

/* pop：弹出并返回栈顶的值 */
double pop(void) {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}
