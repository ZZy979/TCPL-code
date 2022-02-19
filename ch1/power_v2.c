#include <stdio.h>

int power(int m, int n);

/* 测试power函数 */
int main() {
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

/* power函数：求m的n次幂，其中n>=0；版本2 */
int power(int m, int n) {
    int p;
    for (p = 1; n > 0; --n)
        p = p * m;
    return p;
}
