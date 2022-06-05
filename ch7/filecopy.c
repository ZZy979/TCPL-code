#include "filecopy.h"

/* filecopy：将文件ifp复制到文件ofp */
void filecopy(FILE *ifp, FILE *ofp) {
    int c;

    while ((c = getc(ifp)) != EOF)
        putc(c, ofp);
}
