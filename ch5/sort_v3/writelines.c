#include "writelines.h"

#include <stdio.h>

/* writelines：写输出行 */
void writelines(char *lineptr[], int nlines, int reverse) {
    int i;

    if (reverse)
        for (i = nlines - 1; i >= 0; --i)
            printf("%s\n", lineptr[i]);
    else
        for (i = 0; i < nlines; ++i)
            printf("%s\n", lineptr[i]);
}
