#include <stdio.h>

#include "printd.h"

int main() {
    printd(123456); putchar('\n');
    printd(-654321); putchar('\n');
    printd(0); putchar('\n');
    printd(2147483647); putchar('\n');
    return 0;
}
