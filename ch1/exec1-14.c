#include <stdio.h>

/* 打印字符频度直方图 */
int main() {
    int c, i, j;
    int nchar[128];
    
    for (i = 0; i < 128; ++i)
        nchar[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= 0 && c < 128)
            ++nchar[c];

    for (i = ' '; i < '~'; ++i) {
        printf("'%c': %5d ", i, nchar[i]);
        for (j = 0; j < nchar[i]; ++j)
            putchar('*');
        putchar('\n');
    }
}
