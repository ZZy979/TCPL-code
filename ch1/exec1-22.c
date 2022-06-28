#include <stdio.h>
#include <ctype.h>

#include "getline.h"

#define MAXLINE 1000    /* 允许输入行的最大长度 */
#define WIDTH 40        /* 折行后每行的最大长度 */

void wrap_line(char line[], int len);

/* 对输入行进行折行，使得每行的长度不超过WIDTH */
int main() {
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
        wrap_line(line, len);
    return 0;
}

void wrap_line(char line[], int len) {
    int cur = 0, col = 0, i, next_word_begin, next_word_end;

    while (cur < len) {
        i = cur;
        while (i < len && isspace(line[i]))
            ++i;
        next_word_begin = i;
        while (i < len && !isspace(line[i]))
            ++i;
        next_word_end = i;

        if (col + next_word_end - cur <= WIDTH) {
            col += next_word_end - cur;
            while (cur < next_word_end)
                putchar(line[cur++]);
        }
        else {
            putchar('\n');      /* 折行 */
            next_word_end = (next_word_end - next_word_begin <= WIDTH) ? next_word_end : next_word_begin + WIDTH;
            col = next_word_end - next_word_begin;
            for (cur = next_word_begin; cur < next_word_end; ++cur)
                putchar(line[cur]);
        }
    }
}
