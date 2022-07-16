#pragma once

/* 链表节点 */
struct list_node {
    char *word;
    struct list_node *next;
};

struct list_node *alloc_list_node(void);
void insert_list_node(struct list_node *head, const char *word);
void print_list(struct list_node *head);
