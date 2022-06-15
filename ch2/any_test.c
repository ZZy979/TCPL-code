#include <assert.h>

#include "any.h"

int main() {
    assert(any("hello, world", "def") == 1);
    assert(any("hello, world", "lmno") == 2);
    assert(any("hello, world", "abc") == -1);
    assert(any("hello, world", "") == -1);
    assert(any("", "abc") == -1);
    assert(any("", "") == -1);
    return 0;
}
