#include <stdio.h>

/* 打印摄氏温度与华氏温度对照表 */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* 温度表的下限 */
    upper = 300;    /* 温度表的上限 */
    step = 20;      /* 步长 */

    celsius = lower;
    while (celsius <= upper) {
        fahr = 9.0 / 5.0 * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
