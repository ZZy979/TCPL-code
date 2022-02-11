#include <stdio.h>

/* 统计输入的字符数（版本2） */
int main() {
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
