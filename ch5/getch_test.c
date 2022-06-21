#include <assert.h>
#include <stdio.h>

#include "getch.h"

int main() {
    /* 输入文件：testdata/123.txt */
    assert(getch() == '1');
    ungetch('a');
    ungetch('b');
    assert(getch() == 'b');
    assert(getch() == 'a');
    assert(getch() == '2');
    assert(getch() == '3');
    assert(getch() == EOF);
    return 0;
}
