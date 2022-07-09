#include <stdio.h>

#define TABSIZE 4

/* detab：将输入中的制表符替换成适当数目的空格 */
int main() {
    int c;
    int n = 0;  /* 当前字符列数 */

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            do {
                putchar(' ');
                ++n;
            } while (n % TABSIZE != 0);
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
