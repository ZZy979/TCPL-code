#include <assert.h>
#include <stdio.h>

#include "getfloat.h"
#include "getch.h"

int main() {
    /* 输入文件：testdata/getfloat_input.txt */
    float nums[] = {3.14159f, -6.28f, 2.333f, 0.4444f, 0.0f, 0.0f, 0.125f, -0.375f};
    int i;
    float x;

    for (i = 0; i < 8; ++i) {
        assert(getfloat(&x) > 0);
        assert(x == nums[i]);
    }

    assert(getfloat(&x) == 0);
    assert(getch() == 'a');

    assert(getfloat(&x) == EOF);
    assert(x == 42.0f);
    return 0;
}
