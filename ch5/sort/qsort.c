#include "qsort.h"

#include <string.h>

void swap(char *v[], int i, int j);

/* qsort：以递增顺序对v[left]...v[right]进行排序 */
void qsort(char *v[], int left, int right) {
    int i, last;

    if (left >= right)  /* 如果数组包含少于2个元素则不执行任何操作 */
        return;
    swap(v, left, (left + right) / 2);  /* 将划分元素移动到v[left] */
    last = left;
    for (i = left + 1; i <= right; ++i) /* 划分子集 */
        if (strcmp(v[i], v[left]) < 0)
            swap(v, ++last, i);
    swap(v, left, last);                /* 恢复划分元素 */
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

/* swap：交换v[i]和v[j] */
void swap(char *v[], int i, int j) {
    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
