#include "any.h"

/* any: 返回字符串s2中的任一字符在字符串s1中第一次出现的位置 */
int any(char s1[], char s2[]) {
    int appear[128] = {0};
    int i;

    for (i = 0; s2[i] != '\0'; ++i)
        appear[s2[i]] = 1;

    for (i = 0; s1[i] != '\0'; ++i)
        if (appear[s1[i]] == 1)
            return i;
    return -1;
}
