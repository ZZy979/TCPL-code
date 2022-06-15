#include <assert.h>

#include "rand.h"

int main() {
    int i;

    for (i = 0; i < 1000; ++i) {
        int x = rand();
        assert(x > 0 && x <= 32767);
    }
    return 0;
}
