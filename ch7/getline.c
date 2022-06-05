#include "getline.h"

#include <stdio.h>
#include <string.h>

/* getline：将一行读入到line中并返回其长度 */
int getline(char *line, int max) {
    if (fgets(line, max, stdin) == NULL)
        return 0;
    else
        return strlen(line);
}
