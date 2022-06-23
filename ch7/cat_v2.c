#include <stdio.h>
#include <stdlib.h>

#include "filecopy.h"

/* cat：拼接文件，版本2 */
int main(int argc, char *argv[]) {
    FILE *fp;
    char *prog = argv[0];   /* 程序名，用于错误信息 */

    if (argc == 1)  /* 没有参数，复制标准输入 */
        filecopy(stdin, stdout);
    else
        while (--argc > 0)
            if ((fp = fopen(*++argv, "r")) == NULL) {
                fprintf(stderr, "%s: can't open %s\n", prog, *argv);
                exit(1);
            }
            else {
                filecopy(fp, stdout);
                fclose(fp);
            }
    if (ferror(stdout)) {
        fprintf(stderr, "%s: error writing stdout\n", prog);
        exit(2);
    }
    exit(0);
}
