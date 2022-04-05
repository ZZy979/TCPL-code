#include "strrindex.h"

#include <string.h>

/* strrindex：返回字符串t在s中最右边出现的位置，如果不存在则返回-1 */
int strrindex(char s[], char t[]) {
    int i, j, k;
    int m = strlen(s), n = strlen(t);

    for (i = m - 1; i > 0; --i) {
        for (j = i, k = n - 1; k >= 0 && s[j] == t[k]; --j, --k)
            ;
        if (k < 0)
            return i - n + 1;
    }
    return -1;
}
