#include <stdio.h>

#define TABSIZE 4

/* detab：将输入中的制表符替换成适当数目的空格 */
int main() {
    int c, i;
    int n;  /* 当前字符列数 */

    n = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            for (i = 0; i < TABSIZE - n % TABSIZE; ++i)
                putchar(' ');
            n += i;
        }
        else if (c == '\n') {
            putchar(c);
            n = 0;
        }
        else {
            putchar(c);
            ++n;
        }
    }
    return 0;
}
