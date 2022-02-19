#include <stdio.h>

#define MAXLINE 20    /* 每次允许输入的最大字符数 */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* 打印最长的输入行长度及其前MAXLINE个字符 */
int main() {
    int n;      /* 每次输入的字符数 */
    int len;    /* 当前行长度 */
    int max;    /* 目前发现的最长行的长度 */
    char temp[MAXLINE];     /* 当前行的前MAXLINE个字符 */
    char line[MAXLINE];     /* 当前的输入行 */
    char longest[MAXLINE];  /* 用于保存最长的行 */

    len = max = 0;
    temp[0] = '\0';
    while ((n = getline(line, MAXLINE)) > 0) {
        len += n;
        if (temp[0] == '\0')
            copy(temp, line);
        if (line[n - 1] == '\n') {
            if (len > max) {
                max = len;
                copy(longest, temp);
            }
            len = 0;
            temp[0] = '\0';
        }
    }
    if (max > 0) {
        printf("%d\n", max);
        printf("%s\n", longest);
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

/* copy函数：将from复制到to；这里假定to足够大 */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
