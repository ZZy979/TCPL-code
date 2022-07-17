#include <stdio.h>
#include <string.h>

#include "getword.h"
#include "../hash_table.h"

#define MAXWORD 100

int main() {
    char word[MAXWORD], definition[MAXWORD];
    int len;
    struct nlist *p;

    while (getword(word, MAXWORD, 0) != EOF)
        if (strcmp(word, "#define") == 0) {
            getword(word, MAXWORD, 1);
            len = get_definition(definition, MAXWORD);
            definition[len - 1] = '\0';
            install(word, definition);
        }
        else if (strcmp(word, "#undef") == 0) {
            getword(word, MAXWORD, 1);
            undef(word);
        }
        else if (word[0] == '\n')
            putchar('\n');
        else if ((p = lookup(word)) != NULL)
            printf("%s", p->defn);
        else
            printf("%s", word);
    return 0;
}
