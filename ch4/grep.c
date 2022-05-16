#include <stdio.h>

#include "getline.h"
#include "strindex.h"

#define MAXLINE 1000    /* 最大输入行长度 */

char pattern[] = "ould";    /* 待查找的模式 */

/* 找出所有与模式匹配的行 */
int main() {
    char line[MAXLINE];
    int found = 0;

    while (getline(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            ++found;
        }
    return found;
}
