#include <assert.h>

#include "minprintf.h"

int main() {
    int ival = 42;
    unsigned uval = 0xdeadbeefU;
    char cval = '@';
    double dval = -1.234567e89;
    char sval[] = "My name is Bob";
    void *pval = (void *) 0x9f36fae0;

    minprintf("%%d: %d\n", ival);
    minprintf("%%i: %i\n", ival);
    minprintf("%%u: %u\n", uval);
    minprintf("%%o: %o\n", uval);
    minprintf("%%x: %x\n", uval);
    minprintf("%%X: %X\n", uval);
    minprintf("%%c: %c\n", cval);
    minprintf("%%f: %f\n", dval);
    minprintf("%%e: %e\n", dval);
    minprintf("%%E: %E\n", dval);
    minprintf("%%g: %g\n", dval);
    minprintf("%%G: %G\n", dval);
    minprintf("%%s: %s\n", sval);
    minprintf("%%p: %p\n", pval);
    minprintf("%%%%: %%\n");
    minprintf("unchanged: %6d %lf\n", ival, dval);
    return 0;
}
