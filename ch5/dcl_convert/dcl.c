#include <stdio.h>
#include <string.h>

#include "lexer.h"
#include "parser.h"

char datatype[MAXTOKEN];    /* 数据类型（char、int等） */
char out[1000];             /* 输出字符串 */

/* dcl：将声明转换为文字描述 */
int main() {
    while (gettoken() != EOF) {     /* 该行的第一个记号是数据类型 */
        strcpy(datatype, token);
        out[0] = '\0';
        dcl();      /* 分析该行的其余部分 */
        if (tokentype != '\n')
            printf("syntax error\n");
        printf("%s: %s %s\n", name, out, datatype);
    }
    return 0;
}
