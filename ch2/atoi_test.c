#include <assert.h>

#include "atoi.h"

int main() {
    assert(atoi("123456") == 123456);
    assert(atoi("0") == 0);
    assert(atoi("-654321") == 0);
    assert(atoi("123abc") == 123);
    assert(atoi("abc") == 0);
    assert(atoi("") == 0);
    return 0;
}
