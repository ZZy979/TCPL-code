#include <stdio.h>

#include "getline.h"

#define MAXLINE 1000    /* 允许输入行的最大长度 */

/* 打印长度大于80个字符的所有输入行 */
int main() {
    int len;    /* 当前行长度 */
    char line[MAXLINE];     /* 当前的输入行 */

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > 80)
            printf("%s", line);
    return 0;
}
