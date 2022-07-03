#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "../ch4/reverse_polish_calculator/calc.h"

/* 计算命令行参数中的逆波兰表达式的值 */
int main(int argc, char *argv[]) {
    int i;
    double op2;

    if (argc == 1) {
        printf("error: no operands\n");
        return 1;
    }
    for (i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "+") == 0)
            push(pop() + pop());
        else if (strcmp(argv[i], "-") == 0) {
            op2 = pop();
            push(pop() - op2);
        }
        else if (strcmp(argv[i], "*") == 0)
            push(pop() * pop());
        else if (strcmp(argv[i], "/") == 0) {
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else {
                printf("error: zero divisor\n");
                return 1;
            }
        }
        else if (isdigit(argv[i][0]) || argv[i][0] == '.' || argv[i][0] == '-')
            push(atof(argv[i]));
        else {
            printf("error: unknown command %s\n", argv[i]);
            return 1;
        }
    }
    printf("%.8g\n", pop());
    return 0;
}
