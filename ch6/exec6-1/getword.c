#include "../getword.h"

#include <stdio.h>
#include <ctype.h>

#include "../../ch4/getch.h"

/* getword：从输入中读取下一个单词或字符，跳过字符串常量、注释及预处理器控制指令，下划线视为单词的一部分 */
int getword(char *word, int lim) {
    int c, next = '\0';
    char *w = word;

    while (isspace(c = getch()))
        ;
    if (c != EOF)
        *w++ = c;
    if (!(isalpha(c) || c == '_' || (c == '/' && (next = getch()) == '*') || c == '#' || c == '\"')) {
        *w = '\0';
        if (next)
            ungetch(next);
        return c;
    }
    switch (c) {
        case '\"':   /* 字符串常量 */
            while ((c = getch()) != '\"')
                if (c == '\\')
                    getch();
            return '\"';
        case '/':   /* 注释 */
            c = getch();
            while ((next = getch()) != '/' || c != '*')
                c = next;
            return '/';
        case '#':   /* 预处理器控制指令 */
            while (isalpha(c = getch()))
                ;
            ungetch(c);
            return '#';
    }
    for (; --lim > 0; w++)
        if (!isalnum(*w = getch()) && *w != '_') {
            ungetch(*w);
            break;
        }
    *w = '\0';
    return word[0];
}
