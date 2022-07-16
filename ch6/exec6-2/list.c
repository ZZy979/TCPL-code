#include "list.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* alloc_list_node：创建一个链表节点 */
struct list_node *alloc_list_node(void) {
    return (struct list_node *) malloc(sizeof(struct list_node));
}

/* insert_list_node：将word插入有序链表，忽略重复的单词 */
void insert_list_node(struct list_node *head, const char *word) {
    struct list_node *p, *tmp;
    int cond = -1;

    for (p = head; p->next && (cond = strcmp(p->next->word, word)) < 0; p = p->next)
        ;
    if (cond == 0)
        return;
    tmp = alloc_list_node();
    tmp->word = strdup(word);
    tmp->next = p->next;
    p->next = tmp;
}

/* print_list：打印链表 */
void print_list(struct list_node *head) {
    struct list_node *p;

    for (p = head; p->next; p = p->next)
        printf("%s ", p->next->word);
}
