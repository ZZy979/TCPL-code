#include <assert.h>
#include <stdio.h>

#include "htoi.h"

int main() {
    assert(htoi("270F") == 9999);
    assert(htoi("270f") == 9999);
    assert(htoi("0X270F") == 9999);
    assert(htoi("0x270f") == 9999);
    assert(htoi("deadbeef") == -559038737);
    assert(htoi("") == 0);
    assert(htoi("270fgh") == 9999);
    assert(htoi("@#$") == 0);
    return 0;
}
