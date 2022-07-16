#include "tree.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* alloc_tree_node：创建一个二叉树节点 */
struct tree_node *alloc_tree_node(void) {
    return (struct tree_node *) malloc(sizeof(struct tree_node *));
}

/* add_word：将word添加到二叉树中，并插入到指定前缀长度的单词链表中，返回新的根节点指针 */
struct tree_node *add_word(struct tree_node *root, const char *word, int prefix_length) {
    int cond;

    if (root == NULL) {
        root = alloc_tree_node();
        root->prefix = strndup(word, prefix_length);
        root->word_list = alloc_list_node();
        insert_list_node(root->word_list, word);
        root->left = root->right = NULL;
    }
    else if ((cond = strncmp(word, root->prefix, prefix_length)) == 0)
        insert_list_node(root->word_list, word);
    else if (cond < 0)
        root->left = add_word(root->left, word, prefix_length);
    else
        root->right = add_word(root->right, word, prefix_length);
    return root;
}

/* print_tree：中序打印二叉树 */
void print_tree(struct tree_node *root) {
    if (root != NULL) {
        print_tree(root->left);
        printf("%s: ", root->prefix);
        print_list(root->word_list);
        putchar('\n');
        print_tree(root->right);
    }
}
