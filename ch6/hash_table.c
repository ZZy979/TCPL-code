#include "hash_table.h"

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#include "strdup.h"

static struct nlist *hashtab[HASHSIZE];     /* 指针表 */

/* hash：为字符串s生成哈希值 */
unsigned hash(char *s) {
    unsigned hashval;

    for (hashval = 0; *s != '\0'; s++)
        hashval = *s + 31 * hashval;
    return hashval % HASHSIZE;
}

/* lookup：在hashtab中查找s */
struct nlist *lookup(char *s) {
    struct nlist *np;

    for (np = hashtab[hash(s)]; np != NULL; np = np->next)
        if (strcmp(s, np->name) == 0)
            return np;
    return NULL;
}

/* install：将(name, defn)加入到hashtab中 */
struct nlist *install(char *name, char *defn) {
    struct nlist *np;
    unsigned hashval;

    if ((np = lookup(name)) == NULL) {  /* 未找到 */
        np = (struct nlist *) malloc(sizeof(*np));
        if (np == NULL || (np->name = strdup_(name)) == NULL)
            return NULL;
        hashval = hash(name);
        np->next = hashtab[hashval];
        hashtab[hashval] = np;
    }
    else    /* 已存在 */
        free((void *) np->defn);    /* 释放前一个defn */
    if ((np->defn = strdup_(defn)) == NULL)
        return NULL;
    return np;
}

/* undef：从hashtab中删除name及其定义 */
void undef(char *name) {
    unsigned hashval = hash(name);
    struct nlist *p = hashtab[hashval], *temp;

    if (p == NULL)
        return;
    else if (strcmp(name, p->name) == 0) {
        hashtab[hashval] = p->next;
        free(p);
    }
    else
        for (; p->next; p = p->next)
            if (strcmp(name, p->next->name) == 0) {
                temp = p->next;
                p->next = temp->next;
                free(temp);
            }
}
