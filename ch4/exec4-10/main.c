#include <stdio.h>
#include <stdlib.h>

#include "calc.h"
#include "../getline.h"

#define MAXOP 100       /* 运算符或操作数的最大长度 */
#define MAXLINE 1000    /* 最大输入行长度 */

/* 逆波兰计算器 */
int main() {
    int type;
    double op2;
    char s[MAXOP];
    char line[MAXLINE];
    int len, index;

    while ((len = getline(line, MAXLINE)) > 0) {
        index = 0;
        while ((type = getop(line, len, &index, s)) != EOF) {
            switch (type) {
                case NUMBER:
                    push(atof(s));
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
                    printf("error: unknown command %s\n", s);
                    break;
            }
        }
    }
    return 0;
}
