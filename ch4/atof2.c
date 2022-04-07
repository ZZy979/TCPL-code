#include "atof.h"

#include <ctype.h>
#include <math.h>

/* atof：将字符串s转换为双精度浮点数，支持科学表示法 */
double atof(char s[]) {
    double val, power;
    int i, val_sign, exponent_sign, exponent;

    for (i = 0; isspace(s[i]); ++i)  /* 跳过空白符 */
        ;
    /* 整数部分 */
    val_sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        ++i;
    for (val = 0.0; isdigit(s[i]); ++i)
        val = 10.0 * val + (s[i] - '0');
    /* 小数部分 */
    if (s[i] == '.')
        ++i;
    for (power = 1.0; isdigit(s[i]); ++i) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    /* 指数部分 */
    if (s[i] == 'e' || s[i] == 'E')
        ++i;
    exponent_sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        ++i;
    for (exponent = 0; isdigit(s[i]); ++i)
        exponent = 10 * exponent + (s[i] - '0');
    return val_sign * val / power * pow(10, exponent_sign * exponent);
}
