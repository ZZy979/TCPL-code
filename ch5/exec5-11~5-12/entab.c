#include "entab.h"

#include <stdio.h>

/**
 * 从第start列的位置打印制表符和空格，使其宽度等于width个字符
 * 最后一个制表符终止位last_tab_stop = (start, start + width]区间内最大制表符终止位
 * 如果(start, start + width]区间内没有制表符终止位则直接打印width个空格；
 * 否则打印ntab个制表符和nspace个空格，其中
 *   ntab = (start, start + width]区间内制表符终止位的个数
 *   nspace = start + width - last_tab_stop
 */
void print_space(int start, int width, int tab_stops[], int maxlen) {
    int i, ntab = 0, nspace = 0, last_tab_stop = -1;

    for (i = start + 1; i <= start + width && i < maxlen; ++i)
        if (tab_stops[i]) {
            ++ntab;
            last_tab_stop = i;
        }
    if (last_tab_stop < 0)
        for (i = 0; i < width; ++i)
            putchar(' ');
    else {
        nspace = start + width - last_tab_stop;
        for (i = 0; i < ntab; ++i)
            putchar('\t');
        for (i = 0; i < nspace; ++i)
            putchar(' ');
    }
}

/* entab：使用tab_stops指定的制表符终止位将输入中的空格串替换为最少数量的制表符和空格 */
void entab(int tab_stops[], int maxlen) {
    int c;
    int n;          /* 当前字符列数 */
    int nspace;     /* 当前连续的空格数 */

    n = nspace = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nspace;
        else {
            print_space(n, nspace, tab_stops, maxlen);
            n += nspace;
            nspace = 0;
            putchar(c);
            if (c == '\n') 
                n = 0;
            else if (c == '\t')     /* 到下一个制表符终止位 */
                do {
                    ++n;
                } while (n < maxlen && !tab_stops[n]);
            else
                ++n;
        }
    }
}
