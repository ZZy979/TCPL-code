#include <stdlib.h>

#include "set_tab_stops.h"
#include "detab.h"

#define MAXLEN 100      /* 每个输入行的最大长度 */
#define TABSIZE 4       /* 默认制表符宽度 */

/* detab：将输入中的制表符替换成适当数目的空格，可用命令行参数指定一组制表符停止位 */
int main(int argc, char *argv[]) {
    int tab_stops[MAXLEN] = {0};

    set_customized_tab_stops(argc, argv, tab_stops, MAXLEN, TABSIZE);
    detab(tab_stops, MAXLEN);
    return 0;
}
