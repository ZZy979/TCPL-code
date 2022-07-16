#pragma once

#include "list.h"

/* 二叉树节点 */
struct tree_node {
    char *word;   /* 单词 */
    struct list_node *lineno_list;    /* 该单词出现过的行号列表 */
    struct tree_node *left;
    struct tree_node *right;
};

struct tree_node *alloc_tree_node(void);
struct tree_node *add_word(struct tree_node *root, const char *word, int lineno);
void print_tree(struct tree_node *root);
