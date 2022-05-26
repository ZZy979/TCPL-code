#pragma once

/* 树的节点 */
struct tnode {
    char *word;             /* 指向单词的指针 */
    int count;              /* 出现次数 */
    struct tnode *left;     /* 左子节点 */
    struct tnode *right;    /* 右子节点 */
};

struct tnode *addtree(struct tnode *p, char *w);
void treeprint(struct tnode *p);
struct tnode *talloc(void);
