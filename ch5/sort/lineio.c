#include "lineio.h"

#include <stdio.h>
#include <string.h>

#include "../../ch4/getline.h"
#include "../alloc.h"

#define MAXLEN 1000     /* 每个输入行的最大长度 */

/* readlines：读取输入行 */
int readlines(char *lineptr[], int maxlines) {
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else {
            line[len - 1] = '\0';   /* 删除换行符 */
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

/* writelines：写输出行 */
void writelines(char *lineptr[], int nlines) {
    int i;

    for (i = 0; i < nlines; ++i)
        printf("%s\n", lineptr[i]);
}
