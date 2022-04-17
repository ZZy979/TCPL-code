#include <stdio.h>

int buf = EOF;

/* getch：取一个字符（可能是压回的字符） */
int getch(void) {
    if (buf != EOF) {
        int temp = buf;
        buf = EOF;
        return temp;
    }
    else
        return getchar();
}

/* ungetch：把字符压回到输入中 */
void ungetch(int c) {
    if (buf != EOF)
        printf("ungetch: too many characters\n");
    else
        buf = c;
}
