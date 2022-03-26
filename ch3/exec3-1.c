#include <stdio.h>
#include <time.h>

#include "binsearch.h"
#include "binsearch2.h"

#define MAX_LENGTH 10000

int main() {
    int v[MAX_LENGTH], i, j, index;

    for (i = 0; i < MAX_LENGTH; ++i)
        v[i] = i;

    clock_t start = clock(), end;
    for (i = 0; i < 5000; ++i)
        for (j = 0; j < MAX_LENGTH; ++j)
            index = binsearch(j, v, MAX_LENGTH);
    end = clock();
    printf("binsearch: %.0f ms\n", (float) (end - start) / CLOCKS_PER_SEC * 1000);

    start = clock();
    for (i = 0; i < 5000; ++i)
        for (j = 0; j < MAX_LENGTH; ++j)
            index = binsearch2(j, v, MAX_LENGTH);
    end = clock();
    printf("binsearch2: %.0f ms\n", (float) (end - start) / CLOCKS_PER_SEC * 1000);
    return 0;
}
