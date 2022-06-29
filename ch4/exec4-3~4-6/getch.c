#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

/* getch：取一个字符（可能是压回的字符） */
int getch(void) {
    return bufp > 0 ? buf[--bufp] : getchar();
}

/* ungetch：把字符压回到输入中 */
void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}
