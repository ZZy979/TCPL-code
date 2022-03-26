#include "binsearch.h"

/* binsearch：在长度为n的升序数组v中查找x */
int binsearch(int x, int v[], int n) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else  /* 找到了匹配的值 */
            return mid;
    }
    return -1;  /* 没有找到匹配的值 */
}
