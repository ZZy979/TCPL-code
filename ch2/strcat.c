#include "strcat.h"

/* strcat: 将字符串t连接到字符串s的尾部；s必须有足够大的空间 */
void strcat(char s[], char t[]) {
    int i = 0, j = 0;

    while (s[i] != '\0')  /* 找到s的尾部 */
        i++;
    while ((s[i++] = t[j++]) != '\0')  /* 拷贝t */
        ;
}
