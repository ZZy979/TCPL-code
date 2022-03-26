#include "binsearch2.h"

/* binsearch2：在长度为n的升序数组v中查找x；循环内只执行一次测试 */
int binsearch2(int x, int v[], int n) {
    int low = 0, high = n - 1, mid = (low + high) / 2;

    while (low <= high && x != v[mid]) {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    return x == v[mid] ? mid : - 1;
}
