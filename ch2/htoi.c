#include "htoi.h"

#include <ctype.h>

/* htoi: 把十六进制数字符串（包含可选的前缀0x或0X）转换十进制整数 */
int htoi(char s[]) {
    int i = 0, d, n = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    for (; isxdigit(s[i]); ++i) {
        if (s[i] >= '0' && s[i] <= '9')
            d = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            d = s[i] - 'a' + 10;
        else
            d = s[i] - 'A' + 10;

        n = 16 * n + d;
    }
    return n;
}
