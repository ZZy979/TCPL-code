#include "itoa.h"

#include <stdlib.h>

#include "reverse.h"

/* itoa：将数字n转换为字符串并保存到s中；能够处理最小负数 */
void itoa(int n, char s[]) {
    int i = 0, sign = n;

    do {  /* 逆序生成数字 */
        s[i++] = abs(n % 10) + '0'; /* 取下一个数字 */
    } while (n /= 10);              /* 删除该数字 */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
