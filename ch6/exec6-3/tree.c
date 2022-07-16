#include "tree.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* alloc_tree_node：创建一个二叉树节点 */
struct tree_node *alloc_tree_node(void) {
    return (struct tree_node *) malloc(sizeof(struct tree_node *));
}

/* add_word：将word添加到二叉树中，并将行号插入到对应链表中，返回新的根节点指针 */
struct tree_node *add_word(struct tree_node *root, const char *word, int lineno) {
    int cond;

    if (root == NULL) {
        root = alloc_tree_node();
        root->word = strdup(word);
        root->lineno_list = alloc_list_node();
        insert_list_node(root->lineno_list, lineno);
        root->left = root->right = NULL;
    }
    else if ((cond = strcmp(word, root->word)) == 0)
        insert_list_node(root->lineno_list, lineno);
    else if (cond < 0)
        root->left = add_word(root->left, word, lineno);
    else
        root->right = add_word(root->right, word, lineno);
    return root;
}

/* print_tree：中序打印二叉树 */
void print_tree(struct tree_node *root) {
    if (root != NULL) {
        print_tree(root->left);
        printf("%s: ", root->word);
        print_list(root->lineno_list);
        putchar('\n');
        print_tree(root->right);
    }
}
