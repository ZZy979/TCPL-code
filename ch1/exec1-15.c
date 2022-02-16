#include <stdio.h>

float fahr_to_celsius(float fahr);

/* 打印华氏温度与摄氏温度对照表（使用函数） */
int main() {
    float fahr;
    int lower, upper, step;

    lower = 0;      /* 温度表的下限 */
    upper = 300;    /* 温度表的上限 */
    step = 20;      /* 步长 */

    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, fahr_to_celsius(fahr));
        fahr = fahr + step;
    }
}

/* 将华氏温度转换为摄氏温度 */
float fahr_to_celsius(float fahr) {
    return 5.0 / 9.0 * (fahr - 32.0);
}
