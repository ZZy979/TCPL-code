#include <stdio.h>

#include "lineio.h"
#include "../sort/qsort.h"

#define MAXLINES 5000       /* 进行排序的最大行数 */

char *lineptr[MAXLINES];        /* 指向文本行的指针数组 */
char lines[MAXLINES][MAXLEN];   /* 存储文本行 */

/* 对输入的文本行进行排序 */
int main() {
    int nlines;     /* 读取的输入行数目 */
    int i;

    if ((nlines = readlines(lines, MAXLINES)) >= 0) {
        for (i = 0; i < nlines; ++i)
            lineptr[i] = lines[i];
        qsort(lineptr, 0, nlines - 1);
        writelines(lineptr, nlines);
        return 0;
    }
    else {
        printf("error: input too big to sort\n");
        return 1;
    }
}
