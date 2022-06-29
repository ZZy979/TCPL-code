#include <stdio.h>
#include <math.h>
#include <string.h>

#include "calc.h"

/* deal_with_identifier：处理标识符s，调用对应的函数 */
void deal_with_identifier(char s[]) {
    double op2;

    if (strcmp(s, "sin") == 0)
        push(sin(pop()));
    else if (strcmp(s, "cos") == 0)
        push(cos(pop()));
    else if (strcmp(s, "tan") == 0)
        push(tan(pop()));
    else if (strcmp(s, "exp") == 0)
        push(exp(pop()));
    else if (strcmp(s, "log") == 0)
        push(log(pop()));
    else if (strcmp(s, "sqrt") == 0)
        push(sqrt(pop()));
    else if (strcmp(s, "fabs") == 0)
        push(fabs(pop()));
    else if (strcmp(s, "pow") == 0) {
        op2 = pop();
        push(pow(pop(), op2));
    }
    else
        deal_with_var(s);
}
