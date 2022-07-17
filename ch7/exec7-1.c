#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 根据被调用的名字将输入转换为小写或大写形式 */
int main(int argc, char *argv[]) {
    char *sep, *name;
    enum {nothing, lower, upper} op = nothing;
    int c;

    sep = strrchr(argv[0], '/');
    name = sep ? sep + 1 : argv[0];
    if (strcmp(name, "tolower.out") == 0 || strcmp(name, "tolower") == 0)
        op = lower;
    else if (strcmp(name, "toupper.out") == 0 || strcmp(name, "toupper") == 0)
        op = upper;
    while ((c = getchar()) != EOF)
        if (op == lower)
            putchar(tolower(c));
        else if (op == upper)
            putchar(toupper(c));
        else
            putchar(c);
    return 0;
}
