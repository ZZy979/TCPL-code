#include "lower.h"

/* lower: 把字符c转换为小写形式；只对ASCII字符集有效 */
int lower(int c) {
    return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}
