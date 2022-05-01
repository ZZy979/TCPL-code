#include "strcpy.h"

/* strcpy：将字符串t拷贝到字符串s中；数组下标版本 */
void strcpy(char *s, char *t) {
    int i;

    i = 0;
    while ((s[i] = t[i]) != '\0')
        ++i;
}
