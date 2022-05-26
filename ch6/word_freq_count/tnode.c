#include "tnode.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "strdup.h"

/* addtree：在p或p的下方增加一个节点w */
struct tnode *addtree(struct tnode *p, char *w) {
    int cond;

    if (p == NULL) {    /* 新单词 */
        p = talloc();   /* 创建一个新节点 */
        p->word = strdup_(w);
        p->count = 1;
        p->left = p->right = NULL;
    }
    else if ((cond = strcmp(w, p->word)) == 0)
        p->count++;     /* 重复的单词 */
    else if (cond < 0)  /* 小于该节点的单词进入左子树 */
        p->left = addtree(p->left, w);
    else
        p->right = addtree(p->right, w);
    return p;
}

/* treeprint：中序打印树p */
void treeprint(struct tnode *p) {
    if (p != NULL) {
        treeprint(p->left);
        printf("%4d %s\n", p->count, p->word);
        treeprint(p->right);
    }
}

/* talloc：创建一个tnode */
struct tnode *talloc(void) {
    return (struct tnode *) malloc(sizeof(struct tnode));
}
