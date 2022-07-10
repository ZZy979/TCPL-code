#include <stdio.h>
#include <string.h>
#include <strings.h>    /* strcasecmp */

#include "../sort/readlines.h"
#include "writelines.h"
#include "../sort_v2/qsort.h"
#include "../sort_v2/numcmp.h"

#define MAXLINES 5000       /* 进行排序的最大行数 */

char *lineptr[MAXLINES];    /* 指向文本行的指针数组 */

/* 对输入的文本行进行排序 */
int main(int argc, char *argv[]) {
    int nlines;             /* 读取的输入行数目 */
    int numeric = 0;        /* 进行数值排序 */
    int reverse = 0;        /* 按逆序排序 */
    int ignore_case = 0;    /* 忽略大小写 */
    char c;
    int (*comp)(const char *, const char *);

    while (--argc > 0 && (*++argv)[0] == '-')
        while (c = *++argv[0])
            switch (c) {
                case 'n':
                    numeric = 1;
                    break;
                case 'r':
                    reverse = 1;
                    break;
                case 'f':
                    ignore_case = 1;
                    break;
                default:
                    printf("sort: illegal option %c\n", c);
                    return 1;
            }
    comp = numeric ? numcmp : (ignore_case ? strcasecmp : strcmp);
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort((void **) lineptr, 0, nlines - 1, (int (*)(void *, void *)) comp);
        writelines(lineptr, nlines, reverse);
        return 0;
    }
    else {
        printf("error: input too big to sort\n");
        return 1;
    }
}
