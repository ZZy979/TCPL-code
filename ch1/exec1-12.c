#include <stdio.h>

#define IN 1    /* 在单词内 */
#define OUT 0   /* 在单词外 */

/* 以每行一个单词的形式打印输入 */
int main() {
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN)
                putchar('\n');
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            putchar(c);
        }
        else
            putchar(c);
    }
}
