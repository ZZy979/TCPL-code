#include "list.h"

#include <stdio.h>
#include <stdlib.h>

/* alloc_list_node：创建一个链表节点 */
struct list_node *alloc_list_node(void) {
    return (struct list_node *) malloc(sizeof(struct list_node));
}

/* insert_list_node：将lineno插入有序链表 */
void insert_list_node(struct list_node *head, int lineno) {
    struct list_node *p, *tmp;

    for (p = head; p->next && p->next->lineno < lineno; p = p->next)
        ;
    tmp = alloc_list_node();
    tmp->lineno = lineno;
    tmp->next = p->next;
    p->next = tmp;
}

/* print_list：打印链表 */
void print_list(struct list_node *head) {
    struct list_node *p;

    for (p = head; p->next; p = p->next)
        printf("%d ", p->next->lineno);
}
