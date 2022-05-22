#include <stdio.h>
#include <string.h>

#include "../sort/lineio.h"
#include "qsort.h"
#include "numcmp.h"

#define MAXLINES 5000       /* 进行排序的最大行数 */

char *lineptr[MAXLINES];    /* 指向文本行的指针数组 */

/* 对输入的文本行进行排序 */
int main(int argc, char *argv[]) {
    int nlines;         /* 读取的输入行数目 */
    int numeric = 0;    /* 如果进行数值排序则为1 */

    if (argc > 1 && strcmp(argv[1], "-n") == 0)
        numeric = 1;
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort((void **) lineptr, 0, nlines - 1, (int (*)(void *, void *))(numeric ? numcmp : strcmp));
        writelines(lineptr, nlines);
        return 0;
    }
    else {
        printf("error: input too big to sort\n");
        return 1;
    }
}
