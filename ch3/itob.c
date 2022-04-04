#include "itob.h"

#include <stdlib.h>

#include "reverse.h"

/* itob：将整数n转换为b进制数，并保存在字符串s中 */
void itob(int n, char s[], int b) {
    int i = 0, sign = n, d;

    if (b < 2 || b > 36)
        return;

    do {
        d = abs(n % b);
        s[i++] = d <= 9 ? d + '0' : d - 10 + 'A';
    } while (n /= b);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
