#include "lineio.h"

#include <stdio.h>
#include <string.h>

#include "../../ch4/getline.h"

/* readlines：读取输入行 */
int readlines(char lines[][MAXLEN], int maxlines) {
    int len, nlines;

    nlines = 0;
    while ((len = getline(lines[nlines], MAXLEN)) > 0)
        if (nlines >= maxlines)
            return -1;
        else
            lines[nlines++][len - 1] = '\0';    /* 删除换行符 */
    return nlines;
}

/* writelines：写输出行 */
void writelines(char *lineptr[], int nlines) {
    int i;

    for (i = 0; i < nlines; ++i)
        printf("%s\n", lineptr[i]);
}
