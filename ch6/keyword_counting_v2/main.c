#include <stdio.h>
#include <ctype.h>

#include "../keyword_counting/key.h"
#include "../keyword_counting/getword.h"
#include "binsearch.h"

#define MAXWORD 100

/* 统计C语言关键字出现次数（指针版本） */
int main() {
    char word[MAXWORD];
    struct key *p;

    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            if ((p = binsearch(word, keytab, NKEYS)) != NULL)
                p->count++;
    for (p = keytab; p < keytab + NKEYS; p++)
        if (p->count > 0)
            printf("%4d %s\n", p->count, p->word);
    return 0;
}
