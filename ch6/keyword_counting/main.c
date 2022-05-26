#include <stdio.h>
#include <ctype.h>

#include "key.h"
#include "../getword.h"
#include "binsearch.h"

#define MAXWORD 100

/* 统计C语言关键字出现次数 */
int main() {
    int n;
    char word[MAXWORD];

    while (getword(word, MAXWORD) != EOF)
        if (isalpha(word[0]))
            if ((n = binsearch(word, keytab, NKEYS)) >= 0)
                keytab[n].count++;
    for (n = 0; n < NKEYS; ++n)
        if (keytab[n].count > 0)
            printf("%4d %s\n", keytab[n].count, keytab[n].word);
    return 0;
}
