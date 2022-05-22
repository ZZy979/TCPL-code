#include "parser.h"

#include <stdio.h>
#include <string.h>

#include "lexer.h"

char name[MAXTOKEN];    /* 标识符名 */

/* dcl：分析一个声明符 */
void dcl(void) {
    int ns;

    for (ns = 0; gettoken() == '*';)    /* 统计*的个数 */
        ++ns;
    dirdcl();
    while (ns-- > 0)
        strcat(out, " pointer to");
}

/* dirdcl：分析一个直接声明符 */
void dirdcl(void) {
    int type;

    if (tokentype == '(') {     /* (dcl) */
        dcl();
        if (tokentype != ')')
            printf("error: missing )\n");
    }
    else if (tokentype == NAME) /* 变量名 */
        strcpy(name, token);
    else
        printf("error: expected name or (dcl)\n");
    while ((type = gettoken()) == PARENS || type == BRACKETS)
        if (type == PARENS)
            strcat(out, " function returning");
        else {
            strcat(out, " array");
            strcat(out, token);
            strcat(out, " of");
        }
}
