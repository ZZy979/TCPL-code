#include "binsearch.h"

#include <string.h>

/* binsearch：在tab[0]...tab[n-1]中查找单词 */
int binsearch(char *word, struct key tab[], int n) {
    int cond;
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if ((cond = strcmp(word, tab[mid].word)) < 0)
            high = mid - 1;
        else if (cond > 0)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}
