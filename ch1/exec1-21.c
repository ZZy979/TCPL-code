#include <stdio.h>
#include <math.h>

#define TABSIZE 4

void print_space(int start, int width);

/* entab：将空格串替换为最少数量的制表符和空格 */
int main() {
    int c;
    int n;          /* 当前字符列数 */
    int nspace;     /* 当前连续的空格数 */

    n = nspace = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nspace;
        else {
            print_space(n, nspace);
            n += nspace;
            nspace = 0;
            putchar(c);
            if (c == '\n')
                n = 0;
            else if (c == '\t')
                n = n / TABSIZE * TABSIZE + TABSIZE;
            else
                ++n;
        }
    }
    return 0;
}

/**
 * 从第start列的位置打印制表符和空格，使其宽度等于width个字符
 * 最后一个制表符终止位last_tab_stop = 不超过start + width的TABSIZE的最大倍数
 *   = (start + width) / TABSIZE * TABSIZE
 *   = start + width - (start + width) % TABSIZE
 * 如果last_tab_stop <= start则直接打印width个空格；
 * 否则打印ntab个制表符和nspace个空格，其中
 *   ntab = (last_tab_stop - start) / TABSIZE上取整（浮点数除法）
 *   nspace = start + width - last_tab_stop = (start + width) % TABSIZE
 */
void print_space(int start, int width) {
    int last_tab_stop = (start + width) / TABSIZE * TABSIZE;
    int i, ntab, nspace;

    if (last_tab_stop <= start)
        for (i = 0; i < width; ++i)
            putchar(' ');
    else {
        ntab = (int) ceil((double) (last_tab_stop - start) / TABSIZE);
        nspace = start + width - last_tab_stop;
        for (i = 0; i < ntab; ++i)
            putchar('\t');
        for (i = 0; i < nspace; ++i)
            putchar(' ');
    }
}
