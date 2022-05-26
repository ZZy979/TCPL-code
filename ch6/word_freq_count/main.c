#include <stdio.h>
#include <ctype.h>

#include "tnode.h"
#include "../getword.h"

#define MAXWORD 100

/* 统计单词出现次数 */
int main() {
    struct tnode *root;
    char word[MAXWORD];

    root = NULL;
    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            root = addtree(root, word);
    treeprint(root);
    return 0;
}
