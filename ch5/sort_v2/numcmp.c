#include "numcmp.h"

#include <stdlib.h>

/* numcmp：按数值大小比较s1和s2 */
int numcmp(const char* s1, const char* s2) {
    double v1, v2;

    v1 = atof(s1);
    v2 = atof(s2);
    if (v1 < v2)
        return -1;
    else if (v1 > v2)
        return 1;
    else
        return 0;
}
