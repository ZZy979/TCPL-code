#include "strcmp.h"

/* strcmp：s<t时返回<0，s==t时返回0，s>t时返回>0；数组下标版本 */
int strcmp(char *s, char *t) {
    int i;

    for (i = 0; s[i] == t[i]; ++i)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}