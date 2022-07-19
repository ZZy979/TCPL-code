#include <assert.h>
#include <string.h>
#include <math.h>

#include "minscanf.h"

int main() {
    /* 输入文件：testdata/minscanf_input.txt */
    int a, b, c;
    unsigned u;
    float x, y, z;
    char p, q;
    char s[20], t[20];

    assert(minscanf("a = %d, b = %i. c = %u", &a, &b, &u) == 2);
    assert(a == -273 && b == 0x270f);
    assert(minscanf(" c = %u", &u) == 1);
    assert(u == 4294967295u);

    assert(minscanf("%d = %o = %x", &a, &b, &c) == 3);
    assert(a == 430963776 && b == 430963776 && c == 430963776);

    /* 注意在格式字符串开头加空格以读掉上一行的换行符 */
    assert(minscanf(" pi = %f, N_A = %e, e = %g", &x, &y, &z) == 3);
    assert(fabs(1 - x / 3.1415926) < 1e-6 && fabs(1 - y / 6.02e23) < 1e-6 && fabs(1 - z / 1.60e-19) < 1e-6);

    assert(minscanf("%c%c", &p, &q) == 2);
    assert(p == '\n' && q == '@');

    assert(minscanf("%s%s", s, t) == 2);
    assert(strcmp(s, "hello,") == 0 && strcmp(t, "world!") == 0);

    assert(minscanf("%d%%", &a) == 1);
    assert(a == 15);

    assert(minscanf("%d %s %d", &a, s, &b) == 3);
    assert(a == 25 && strcmp(s, "Dec") == 0 && b == 1988);

    assert(minscanf("%d-%d-%d", &a, &b, &c) == 3);
    assert(a == 2022 && b == 7 && c == 19);
    return 0;
}
