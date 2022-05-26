#include "strdup.h"

#include <stdlib.h>
#include <string.h>

/* strdup：复制s到某个位置（下划线避免与<string.h>中的strdup冲突） */
char *strdup_(char *s) {
    char *p;

    p = (char *) malloc(strlen(s) + 1);     /* +1是为了'\0' */
    if (p != NULL)
        strcpy(p, s);
    return p;
}
