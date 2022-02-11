#include <stdio.h>

/* 将输入复制到输出，并压缩连续的空格 */
int main() {
    int c1, c2 = 0;
    while ((c1 = getchar()) != EOF)
        if (c1 != ' ' || c2 != ' ') {
            putchar(c1);
            c2 = c1;
        }
}
