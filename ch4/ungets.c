#include "ungets.h"

#include <string.h>

void ungetch(int c);

/* ungets：把字符串s压回到输入中 */
void ungets(char s[]) {
    int i;

    for (i = strlen(s) - 1; i >= 0; --i)
        ungetch(s[i]);
}
