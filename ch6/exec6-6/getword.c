#include "getword.h"

#include <stdio.h>
#include <ctype.h>

#include "../../ch4/getch.h"

/* getword：从输入中读取下一个单词或字符，跳过字符串常量、注释及预处理器控制指令，下划线视为单词的一部分 */
int getword(char *word, int lim, int skip_space) {
    int c, next = '\0';
    char *w = word;

    c = getch();
    if (skip_space)
        while (isspace(c))
            c = getch();
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

/* get_definition：将#define替换文本读入到definition并返回其长度 */
int get_definition(char definition[], int lim) {
    int c, i = 0;

    while (isspace(c = getch()))
        ;
    ungetch(c);
    while (--lim > 0 && (c = getch()) != EOF && c != '\n')
        definition[i++] = c;
    if (c == '\n')
        definition[i++] = c;
    definition[i] = '\0';
    return i;
}
