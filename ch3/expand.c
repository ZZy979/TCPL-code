#include "expand.h"

#include <ctype.h>

/* expand：将字符串s1中类似于a-z的速记符号在字符串s2中扩展为等价的完整列表 */
void expand(char s1[], char s2[]) {
    int i = 0, j = 0;
    char c;

    while (s1[i] != '\0') {
        if (s1[i] == '-') {
            if (i == 0 || s1[i + 1] == '\0')  /* 前导或尾随的'-' */
                s2[j++] = s1[i++];
            else if (islower(s1[i - 1]) && islower(s1[i + 1])
                || isupper(s1[i - 1]) && isupper(s1[i + 1])
                || isdigit(s1[i - 1]) && isdigit(s1[i + 1])) {
                for (c = s1[i - 1]; c <= s1[i + 1]; ++c)
                    s2[j++] = c;
                i += 2;
            }
            else {
                /* 类型不匹配，例如a-Z、0-a */
                s2[j++] = s1[i - 1];
                s2[j++] = s1[i++];
            }
        }
        else if (s1[i + 1] == '-' && s1[i + 2] != '\0')  /* 该字符是第一个操作数 */
            ++i;
        else  /* 普通字符 */
            s2[j++] = s1[i++];
    }
    s2[j] = '\0';
}
