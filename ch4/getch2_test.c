#include <assert.h>
#include <stdio.h>

#include "getch2.h"

int main() {
    /* 输入文件：testdata/123.txt */
    assert(getch() == '1');
    ungetch('a');
    assert(getch() == 'a');
    assert(getch() == '2');
    ungetch('b');  /* ungetch: too many characters */
    ungetch('c');
    assert(getch() == 'b');
    assert(getch() == '3');
    assert(getch() == EOF);
    return 0;
}
