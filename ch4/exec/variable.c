#include <stdio.h>

#include "calc.h"

double var[26] = { 0.0 };   /* 变量 */
int vp = 0;                 /* 当前变量的下标 */
double last = 0.0;          /* 最近打印的值 */

/* deal_with_var：处理变量，将变量名s对应的下标保存到vp，并将其值压入栈 */
void deal_with_var(char s[]) {
    char name = s[0];

    if (s[1] != '\0' || name < 'a' || name > 'z') {
        printf("error: invalid identifier %s\n", s);
        return;
    }
    vp = name - 'a';
    push(var[vp]);
}
