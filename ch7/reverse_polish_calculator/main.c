#include <stdio.h>
#include <stdlib.h>  /* 为了使用atof()函数 */

#include "calc.h"

#define MAXOP 100    /* 运算符或操作数的最大长度 */

/* 逆波兰计算器 */
int main() {
    int type;
    double op, op2;

    while ((type = getop(&op)) != EOF) {
        switch (type) {
            case NUMBER:
                push(op);
                break;
            case '+':
                push(pop() + pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '*':
                push(pop() * pop());
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error: zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %c\n", type);
                break;
        }
    }
    return 0;
}
