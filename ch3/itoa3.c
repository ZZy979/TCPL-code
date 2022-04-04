#include "itoa3.h"

#include "reverse.h"

/* itoa：将数字n转换为字符串并保存到s中，最小宽度为width */
void itoa(int n, char s[], int width) {
    int i, sign;

    if ((sign = n) < 0) /* 记录符号 */
        n = -n;         /* 使n成为正数 */
    i = 0;
    do {  /* 逆序生成数字 */
        s[i++] = n % 10 + '0';  /* 取下一个数字 */
    } while ((n /= 10) > 0);    /* 删除该数字 */
    if (sign < 0)
        s[i++] = '-';

    while (i < width)
        s[i++] = ' ';

    s[i] = '\0';
    reverse(s);
}
