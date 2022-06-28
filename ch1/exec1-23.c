#include <stdio.h>

/* 删除C语言程序中所有注释 */
int main() {
    int c, prev;

    while ((c = getchar()) != EOF) {
        if (c == '\'') {        /* 字符常量 */
            putchar(c);
            putchar(c = getchar());
            if (c == '\\')
                putchar(getchar());
            putchar(getchar());
        }
        else if (c == '\"') {   /* 字符串常量 */
            putchar(c);
            while ((c = getchar()) != '\"') {
                putchar(c);
                if (c == '\\')
                    putchar(getchar());
            }
            putchar(c);
        }
        else if (c == '/') {
            if ((c = getchar()) == '*') {   /* 注释 */
                prev = getchar();
                while ((c = getchar()) != '/' || prev != '*')
                    prev = c;
            }
            else
                putchar(c);
        }
        else
            putchar(c);
    }
    return 0;
}
