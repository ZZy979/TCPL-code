#include <stdio.h>

/* 将输入复制到输出，并替换制表符、回退符和反斜杠 */
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}
