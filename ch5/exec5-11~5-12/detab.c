#include "detab.h"

#include <stdio.h>

/* detab：使用tab_stops指定的制表符终止位将输入中的制表符替换成适当数目的空格 */
void detab(int tab_stops[], int maxlen) {
    int c;
    int n = 0;  /* 当前字符列数 */

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            /* 题目并未说明超过指定的最大制表符终止位时如何处理，如果不做其他处理则会打印空格直到maxlen */
            do {
                putchar(' ');
                ++n;
            } while (n < maxlen && !tab_stops[n]);
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
}
