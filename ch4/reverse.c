#include "reverse.h"

#include <string.h>

void reverse_rec(char s[], int i, int j) {
    char temp;

    if (i >= j)
        return;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    reverse_rec(s, i + 1, j - 1);
}

/* reverse：原地反转字符串s；递归版本 */
void reverse(char s[]) {
    reverse_rec(s, 0, strlen(s) - 1);
}
