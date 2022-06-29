#include <assert.h>
#include <stdio.h>

#include "getint.h"
#include "../ch4/getch.h"

int main() {
    /* 输入文件：testdata/getint_input.txt */
    int nums[] = {123, 456, 789, 987, 0, 0, 654, -321};
    int i, x;

    for (i = 0; i < 8; ++i) {
        assert(getint(&x) > 0);
        assert(x == nums[i]);
    }

    assert(getint(&x) == 0);
    assert(getch() == 'a');

    assert(getint(&x) == EOF);
    assert(x == 42);
    return 0;
}
