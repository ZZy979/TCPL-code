#include <stdio.h>

#define MAXLINE 1000    /* 允许输入行的最大长度 */

int getline(char line[], int maxline);
void reverse(char s[], int len);

/* 颠倒输入行中的字符顺序 */
int main() {
    int len;    /* 当前行长度 */
    char line[MAXLINE];     /* 当前的输入行 */

    while ((len = getline(line, MAXLINE)) > 0) {
        reverse(line, len - 1);
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

/* reverse函数：翻转字符串s */
void reverse(char s[], int len) {
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; ++i, --j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
