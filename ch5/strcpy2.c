#include "strcpy.h"

/* strcpy：将字符串t拷贝到字符串s中；指针版本1 */
void strcpy(char *s, char *t) {
    while ((*s = *t) != '\0') {
        ++s;
        ++t;
    }
}
