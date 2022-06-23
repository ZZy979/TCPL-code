#include <assert.h>

#include "minprintf.h"

int main() {
    minprintf("a = %d\n", 42);
    minprintf("pi = %f\n", 3.1415926);
    minprintf("My name is %s.\n", "Bob");
    minprintf("unchanged: %c %6d %u %lf %p %%\n", 'x', 123, -1, 1e50, &minprintf);
    return 0;
}
