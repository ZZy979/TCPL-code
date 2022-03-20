#include "squeeze2.h"

#include "squeeze.h"

/* squeeze2: 将字符串s1中任何与字符串s2中字符匹配的字符都删除 */
void squeeze2(char s1[], char s2[]) {
    int i;

    for (i = 0; s2[i] != '\0'; ++i)
        squeeze(s1, s2[i]);
}
