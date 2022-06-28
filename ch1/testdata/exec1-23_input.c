#include <stdio.h>

/* 测试程序 */
int main(/* void */) {
    int c = getchar();

    /* 字符常量 */
    if (c == ' ' || c == '\n' || c == '\t' || c == '\'' || c == '\"' || c == '\\')
        putchar(c);

    printf("\n\t\'\"\\");   /* 字符串常量 */
    printf("/* comment in string */\n");    /* 字符串中的“注释” */

    /**
     * 多行注释
     * 多行注释
     */

    /*/**/
    return 0;
}
