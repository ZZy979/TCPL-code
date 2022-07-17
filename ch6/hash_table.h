#pragma once

#define HASHSIZE 101

/* 链表项 */
struct nlist {
    struct nlist *next;     /* 链表中的下一项 */
    char *name;             /* 定义的名字 */
    char *defn;             /* 替换文本 */
};

unsigned hash(char *s);
struct nlist *lookup(char *s);
struct nlist *install(char *name, char *defn);
void undef(char *name);
