#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "tree.h"
#include "../getword.h"

#define MAXWORD 100

/* 交叉引用程序：打印输入中所有单词及其出现过的行号列表 */
int main(int argc, char *argv[]) {
    struct tree_node *root = NULL;
    char word[MAXWORD];
    int lineno = 1;

    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            root = add_word(root, word, lineno);
        else if (word[0] == '\n')
            ++lineno;
    print_tree(root);
    return 0;
}
