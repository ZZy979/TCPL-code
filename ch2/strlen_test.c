#include <assert.h>

#include "strlen.h"

int main() {
    assert(strlen("hello, world") == 12);
    assert(strlen("a\tb\nc\\d") == 7);
    assert(strlen("") == 0);
    return 0;
}
