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

/* show_top：打印栈顶元素 */
void show_top(void) {
    if (sp > 0)
        printf("\t%.8g\n", val[sp - 1]);
    else
        printf("error: stack empty\n");
}

/* duplicate_top：复制栈顶元素 */
void duplicate_top(void) {
    if (sp > 0)
        push(val[sp - 1]);
    else
        printf("error: stack empty\n");
}

/* swap_top：交换栈顶两个元素 */
void swap_top(void) {
    if (sp > 1) {
        double temp = val[sp - 1];
        val[sp - 1] = val[sp - 2];
        val[sp - 2] = temp;
    }
    else
        printf("error: less than two elements\n");
}

/* clear_stack：清空栈 */
void clear_stack(void) {
    sp = 0;
}
