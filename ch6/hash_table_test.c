#include <assert.h>
#include <stddef.h>
#include <string.h>

#include "hash_table.h"

int main() {
    assert(lookup("IN") == NULL);

    install("IN", "1");
    install("OUT", "0");
    assert(strcmp(lookup("IN")->defn, "1") == 0);
    assert(strcmp(lookup("OUT")->defn, "0") == 0);

    install("IN", "2");
    assert(strcmp(lookup("IN")->defn, "2") == 0);

    undef("IN");
    assert(lookup("IN") == NULL);
    return 0;
}
