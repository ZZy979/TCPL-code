#include <stdlib.h>

#include "set_tab_stops.h"
#include "entab.h"

#define MAXLEN 100      /* 每个输入行的最大长度 */
#define TABSIZE 4       /* 默认制表符宽度 */

/* entab：将输入中的空格串替换为最少数量的制表符和空格，可用命令行参数指定一组制表符停止位 */
int main(int argc, char *argv[]) {
    int tab_stops[MAXLEN] = {0};

    set_customized_tab_stops(argc, argv, tab_stops, MAXLEN, TABSIZE);
    entab(tab_stops, MAXLEN);
    return 0;
}
