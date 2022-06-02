#include <stdio.h>
#include <ctype.h>

/* lower：将输入转换为小写形式 */
int main() {
    int c;

    while ((c = getchar()) != EOF)
        putchar(tolower(c));
    return 0;
}
