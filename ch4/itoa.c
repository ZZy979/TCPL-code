#include "itoa.h"

int itoa_rec(int n, char s[], int i) {
    if (n < 0) {
        s[i++] = '-';
        n = -n;
    }
    if (n / 10)
        i = itoa_rec(n / 10, s, i);
    s[i++] = n % 10 + '0';
    return i;
}

/* itoa：将数字n转换为字符串并保存到s中；递归版本 */
void itoa(int n, char s[]) {
    int i = itoa_rec(n, s, 0);
    s[i] = '\0';
}
