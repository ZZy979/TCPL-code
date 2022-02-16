#include <stdio.h>

int power(int m, int n);

/* 测试power函数 */
int main() {
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

/* power函数：求m的n次幂，其中n>=0 */
int power(int m, int n) {
    int i, p;
    p = 1;
    for (i = 0; i < n; ++i)
        p = p * m;
    return p;
}
