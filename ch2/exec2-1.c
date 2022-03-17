#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("打印头文件中的相应值：\n");
    printf("  signed char: %d~%d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: 0~%d\n", UCHAR_MAX);
    printf("  signed short: %d~%d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0~%d\n", USHRT_MAX);
    printf("  signed int: %d~%d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0~%u\n", UINT_MAX);
    printf("  signed long: %ld~%ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0~%lu\n", ULONG_MAX);

    printf("直接计算：\n");
    printf("  signed char: %d~%d\n", -(char) ((unsigned char) ~0 >> 1) - 1, (char) ((unsigned char) ~0 >> 1));
    printf("unsigned char: 0~%d\n", (unsigned char) ~0);
    printf("  signed short: %d~%d\n", -(short) (((unsigned short) ~0 >> 1) - 1), (short) ((unsigned short) ~0 >> 1));
    printf("unsigned short: 0~%d\n", (unsigned short) ~0);
    printf("  signed int: %d~%d\n", -(int) (((unsigned int) ~0 >> 1) - 1), (int) ((unsigned int) ~0 >> 1));
    printf("unsigned int: 0~%u\n", (unsigned int) ~0);
    printf("  signed long: %ld~%ld\n", -(long) (((unsigned long) ~0 >> 1) - 1), (long) ((unsigned long) ~0 >> 1));
    printf("unsigned long: 0~%lu\n", (unsigned long) ~0);
    return 0;
}
