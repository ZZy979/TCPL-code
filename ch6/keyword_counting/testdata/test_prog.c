#include <stdio.h>
#include <stdlib.h>

#if !defined(int64_t)
#define int64_t long long
#endif

#ifndef uint64_t
#define uint64_t unsigned long long
#endif

int main(int argc, char *argv[]) {
    int64_t sum = 0;            /* sum of argv as integers */
    uint64_t unsigned_sum = 0;  /* sum of argv as unsigned integers */

    while (--argc > 0) {
        int64_t x = atoll(*++argv);
        sum += x;
        unsigned_sum += (uint64_t) x;
    }
    printf("sum = %lld\n", sum);
    printf("unsigned sum = %llu\n", unsigned_sum);
    return 0;
}
