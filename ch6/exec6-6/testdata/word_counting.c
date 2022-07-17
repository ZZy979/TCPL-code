#include <stdio.h>

#define IN 1
#define OUT 0

/* 统计输入的行数、单词数与字符数 */
int main() {
    int c, nl, nw, nc, state;

    printf("IN = %d, OUT = %d", IN, OUT);
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;    /* OUT of word */
        else if (state == OUT) {
            state = IN;     /* IN word */
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

    #undef IN
    #undef OUT
    int IN = 1, OUT = 0;
    printf("IN = %d, OUT = %d\n", IN, OUT);
}
