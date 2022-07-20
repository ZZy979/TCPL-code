#include <stdio.h>
#include <string.h>

#define MAXLINE 100

int main(int argc, char *argv[]) {
    FILE *fp1, *fp2;
    char line1[MAXLINE], line2[MAXLINE];
    char *p1, *p2;

    if (argc < 3) {
        printf("usage: diff file1 file2\n");
        return 0;
    }
    if ((fp1 = fopen(argv[1], "r")) == NULL || (fp2 = fopen(argv[2], "r")) == NULL) {
        printf("diff: can't open %s\n", fp1 == NULL ? argv[1] : argv[2]);
        return 1;
    }

    do {
        p1 = fgets(line1, MAXLINE, fp1);
        p2 = fgets(line2, MAXLINE, fp2);
    } while (p1 && p2 && strcmp(line1, line2) == 0);
    if (p1 || p2) {
        if (p1)
            printf("< %s", line1);
        if (p1 && p2)
            printf("---\n");
        if (p2)
            printf("> %s", line2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
