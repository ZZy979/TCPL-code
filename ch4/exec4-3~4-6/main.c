#include <stdio.h>
#include <stdlib.h>  /* 为了使用atof()函数 */
#include <math.h>

#include "calc.h"

#define MAXOP 100    /* 运算符或操作数的最大长度 */

/* 逆波兰计算器 */
int main() {
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case IDENTIFIER:
                deal_with_identifier(s);
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
            case '%':
                op2 = pop();
                if (op2 != 0.0)
                    push(fmod(pop(), op2));
                else
                    printf("error: zero divisor\n");
                break;
            case '=':
                var[vp] = pop();
                pop();  /* 变量的旧值 */
                push(var[vp]);
                break;
            case '_':
                push(last);
                break;
            case '?':
                show_top();
                break;
            case '#':
                duplicate_top();
                break;
            case '~':
                swap_top();
                break;
            case '!':
                clear_stack();
                break;
            case '\n':
                printf("\t%.8g\n", last = pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
    return 0;
}
