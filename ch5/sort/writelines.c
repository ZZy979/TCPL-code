#include "writelines.h"

#include <stdio.h>

/* writelines：写输出行 */
void writelines(char *lineptr[], int nlines) {
    int i;

    for (i = 0; i < nlines; ++i)
        printf("%s\n", lineptr[i]);
}
