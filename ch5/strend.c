#include "strend.h"

#include <string.h>

/* strend：如果t出现在s的尾部则返回1，否则返回0 */
int strend(char *s, char *t) {
    int m = strlen(s), n = strlen(t);
    return m >= n && strcmp(s + m - n, t) == 0;
}
