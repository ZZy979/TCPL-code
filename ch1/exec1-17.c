#include <stdio.h>

#define MAXLINE 1000    /* 允许输入行的最大长度 */

int getline(char line[], int maxline);

/* 打印长度大于80个字符的所有输入行 */
int main() {
    int len;    /* 当前行长度 */
    char line[MAXLINE];     /* 当前的输入行 */

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > 80)
            printf("%s", line);
    return 0;
}

/* getline函数：将一行读入到line中并返回其长度 */
int getline(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
