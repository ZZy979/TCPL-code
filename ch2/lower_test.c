#include <assert.h>

#include "lower.h"

int main() {
    assert(lower('A') == 'a');
    assert(lower('a') == 'a');
    assert(lower('1') == '1');
    assert(lower('!') == '!');
    assert(lower('\n') == '\n');
    return 0;
}
