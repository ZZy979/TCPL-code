#include "strcmp.h"

/* strcmp：s<t时返回<0，s==t时返回0，s>t时返回>0；指针版本 */
int strcmp(char *s, char *t) {
    for (; *s == *t; ++s, ++t)
        if (*s == '\0')
            return 0;
    return *s - *t;
}
