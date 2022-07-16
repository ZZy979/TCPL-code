#pragma once

#include "list.h"

/* 二叉树节点 */
struct tree_node {
    char *prefix;   /* 单词前缀 */
    struct list_node *word_list;    /* 具有相同前缀的单词链表 */
    struct tree_node *left;
    struct tree_node *right;
};

struct tree_node *alloc_tree_node(void);
struct tree_node *add_word(struct tree_node *root, const char *word, int prefix_length);
void print_tree(struct tree_node *root);
