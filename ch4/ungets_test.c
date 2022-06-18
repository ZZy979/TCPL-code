#include <assert.h>
#include <stdio.h>

#include "ungets.h"
#include "getch2.h"

int main() {
    /* 输入文件：testdata/123.txt */
    ungets("abc");
    assert(getch() == 'a');
    assert(getch() == 'b');
    assert(getch() == 'c');
    assert(getch() == '1');
    assert(getch() == '2');
    assert(getch() == '3');
    assert(getch() == EOF);
    return 0;
}
