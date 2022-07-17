#include <stdio.h>
#include <ctype.h>

#include "../ch4/getline.h"

#define MAXLINE 100

int main() {
    char line[MAXLINE];
    int len, i;

    while ((len = getline(line, MAXLINE)) > 0)
        for (i = 0; i < len; ++i)
            if (isprint(line[i]))
                putchar(line[i]);
            else
                printf("\\x%02hhx", line[i]);
    return 0;
}
