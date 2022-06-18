#include "getline.h"

#include <stdio.h>

/* getline：将一行读入到line中并返回其长度 */
int getline(char line[], int lim) {
    int c = EOF, i;

    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        line[i++] = c;
    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}
