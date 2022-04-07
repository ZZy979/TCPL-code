#include <stdio.h>

#include "atof.h"
#include "getline.h"

#define MAXLINE 100

/* 简单计算器 */
int main() {
    double sum = 0.0;
    char line[MAXLINE];

    while (getline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}
