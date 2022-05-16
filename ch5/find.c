#include <stdio.h>
#include <string.h>

#include "../ch4/getline.h"

#define MAXLINE 1000    /* 最大输入行长度 */

/* find：打印所有与第一个参数指定的模式匹配的行 */
int main(int argc, char *argv[]) {
    char line[MAXLINE];
    int found = 0;

    if (argc != 2)
        printf("Usage: find pattern\n");
    else
        while (getline(line, MAXLINE) > 0)
            if (strstr(line, argv[1]) != NULL) {
                printf("%s", line);
                ++found;
            }
    return found;
}
