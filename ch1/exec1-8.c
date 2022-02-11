#include <stdio.h>

/* 统计输入中空格、制表符与换行符的个数 */
int main() {
    int c, ns, nt, nl;
    ns = nt = nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') ++ns;
        if (c == '\t') ++nt;
        if (c == '\n') ++nl;
    }
    printf("%d spaces, %d tabs, %d newlines\n", ns, nt, nl);
}
