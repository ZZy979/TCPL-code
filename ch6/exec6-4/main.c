#include <stdio.h>
#include <ctype.h>

#include "../word_freq_count/tnode.h"
#include "../getword.h"

#define MAXWORD 100

struct tnode *add_fred_tree(struct tnode *freq_tree, struct tnode *node);
void inorder_word_tree(struct tnode *word_tree, struct tnode **freq_tree);

/* 根据单词的出现频率降序打印输入中的单词 */
int main() {
    struct tnode *word_tree = NULL, *freq_tree = NULL;
    char word[MAXWORD];

    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            word_tree = addtree(word_tree, word);
    inorder_word_tree(word_tree, &freq_tree);
    treeprint(freq_tree);
    return 0;
}

/* add_fred_tree：将node按频率降序插入freq_tree */
struct tnode *add_fred_tree(struct tnode *freq_tree, struct tnode *node) {
    if (freq_tree == NULL) {
        freq_tree = talloc();
        *freq_tree = *node;
        freq_tree->left = freq_tree->right = NULL;
    }
    else if (node->count > freq_tree->count)
        freq_tree->left = add_fred_tree(freq_tree->left, node);
    else
        freq_tree->right = add_fred_tree(freq_tree->right, node);
    return freq_tree;
}

/* inorder：中序遍历word_tree，并将节点插入freq_tree */
void inorder_word_tree(struct tnode *word_tree, struct tnode **freq_tree) {
    if (word_tree != NULL) {
        inorder_word_tree(word_tree->left, freq_tree);
        *freq_tree = add_fred_tree(*freq_tree, word_tree);
        inorder_word_tree(word_tree->right, freq_tree);
    }
}
