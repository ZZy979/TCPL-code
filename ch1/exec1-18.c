#include <stdio.h>

#include "getline.h"

#define MAXLINE 1000    /* 允许输入行的最大长度 */

/* 删除每个输入行末尾的空格及制表符，并删除完全是空格的行 */
int main() {
    int n;    /* 当前行长度 */
    char line[MAXLINE];     /* 当前的输入行 */

    while ((n = getline(line, MAXLINE)) > 0) {
        for (n -= 2; n >= 0 && (line[n] == ' ' || line[n] == '\t'); --n)
            ;
        line[++n] = '\n';
        line[++n] = '\0';
        if (n > 1)
            printf("%s", line);
    }
    return 0;
}
