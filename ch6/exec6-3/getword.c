#include "../getword.h"

#include <stdio.h>
#include <ctype.h>

#include "../../ch4/getch.h"

/* getword：从输入中读取下一个单词或字符 */
int getword(char *word, int lim) {
    int c;
    char *w = word;

    while (isspace(c = getch()) && c != '\n')
        ;
    if (c != EOF)
        *w++ = c;
    if (!isalpha(c)) {
        *w = '\0';
        return c;
    }
    for (; --lim > 0; w++)
        if (!isalnum(*w = getch())) {
            ungetch(*w);
            break;
        }
    *w = '\0';
    return word[0];
}
