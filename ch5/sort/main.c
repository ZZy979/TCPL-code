#include <stdio.h>

#include "lineio.h"
#include "qsort.h"

#define MAXLINES 5000       /* 进行排序的最大行数 */

char *lineptr[MAXLINES];    /* 指向文本行的指针数组 */

/* 对输入的文本行进行排序 */
int main() {
    int nlines;     /* 读取的输入行数目 */

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort(lineptr, 0, nlines - 1);
        writelines(lineptr, nlines);
        return 0;
    }
    else {
        printf("error: input too big to sort\n");
        return 1;
    }
}
