#include <stdio.h>

#define IN 1    /* 在单词内 */
#define OUT 0   /* 在单词外 */
#define MAX_LENGTH 15   /* 单词最大长度 */

/* 打印单词长度直方图 */
int main() {
    int c, i, j, nc, state;
    int nlength[MAX_LENGTH + 2];    /* 最后一个元素表示长度大于MAX_LENGTH */
    
    nc = 0;
    state = OUT;
    for (i = 0; i < MAX_LENGTH + 2; ++i)
        nlength[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                /* 单词结束 */
                state = OUT;
                if (nc > MAX_LENGTH + 1)
                    nc = MAX_LENGTH + 1;
                ++nlength[nc];
                nc = 0;
            }
        }
        else {
            /* 单词开始或在单词内 */
            state = IN;
            ++nc;
        }
    }

    for (i = 1; i < MAX_LENGTH + 2; ++i) {
        if (i == MAX_LENGTH + 1)
            printf(">%2d: %5d ", MAX_LENGTH, nlength[i]);
        else
            printf(" %2d: %5d ", i, nlength[i]);
        for (j = 0; j < nlength[i]; ++j)
            putchar('*');
        putchar('\n');
    }
}
