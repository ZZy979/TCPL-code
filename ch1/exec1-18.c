#include <stdio.h>

#define MAXLINE 1000    /* 允许输入行的最大长度 */

int getline(char line[], int maxline);

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
