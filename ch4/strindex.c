#include "strindex.h"

/* strindex：返回t在s中的索引，如果不存在则返回-1 */
int strindex(char s[], char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; ++i) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; ++j, ++k)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}
