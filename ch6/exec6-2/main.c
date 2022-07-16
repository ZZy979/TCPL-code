#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "tree.h"
#include "../getword.h"

#define MAXWORD 100

/* 按指定的前缀长度分组打印输入的单词 */
int main(int argc, char *argv[]) {
    struct tree_node *root = NULL;
    char word[MAXWORD];
    int prefix_length = 6;

    if (argc > 1 && argv[1][0] == '-') {
        prefix_length = atoi(argv[1] + 1);
        if (prefix_length <= 0) {
            printf("n must be > 0\n");
            return 1;
        }
    }
    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            root = add_word(root, word, prefix_length);
    print_tree(root);
    return 0;
}
