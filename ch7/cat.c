#include <stdio.h>

#include "filecopy.h"

/* cat：拼接文件，版本1 */
int main(int argc, char *argv[]) {
    FILE *fp;

    if (argc == 1)  /* 没有参数，复制标准输入 */
        filecopy(stdin, stdout);
    else
        while (--argc > 0)
            if ((fp = fopen(*++argv, "r")) == NULL) {
                printf("cat: can't open %s\n", *argv);
                return 1;
            }
            else {
                filecopy(fp, stdout);
                fclose(fp);
            }
    return 0;
}
