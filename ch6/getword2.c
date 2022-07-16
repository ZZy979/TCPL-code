#include "getword.h"

#include <stdio.h>
#include <ctype.h>

#include "../ch4/getch.h"

/* getword：从输入中读取下一个单词或字符，跳过字符串常量、注释及预处理器控制指令，下划线视为单词的一部分 */
int getword(char *word, int lim) {
    int c, next = '\0';
    char *w = word;

    while (isspace(c = getch()))
        ;
    if (c != EOF)
        *w++ = c;
    if (!(isalpha(c) || c == '_' || c == '\"' || (c == '/' && (next = getch()) == '*') || c == '#')) {
        *w = '\0';
        if (next)
            ungetch(next);
        return c;
    }
    switch (c) {
        case '\"':   /* 字符串常量 */
            while ((*w++ = c = getch()) != '\"')
                if (c == '\\')
                    *w++ = getch();
            break;
        case '/':   /* 注释 */
            *w++ = next;
            *w++ = c = getch();
            while ((*w++ = next = getch()) != '/' || c != '*')
                c = next;
            break;
        case '#':   /* 预处理器控制指令 */
            while (isalpha(*w++ = c = getch()))
                ;
            ungetch(c);
            --w;
            break;
        default:
            for (; --lim > 0; w++)
                if (!isalnum(*w = getch()) && *w != '_') {
                    ungetch(*w);
                    break;
                }
            break;
    }
    *w = '\0';
    return word[0];
}
