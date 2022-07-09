#include <stdlib.h>

#include "set_tab_stops.h"
#include "detab.h"

#define MAXLEN 100      /* 每个输入行的最大长度 */
#define TABSIZE 4       /* 默认制表符宽度 */

/* detab：将输入中的制表符替换成适当数目的空格，可用命令行参数-m +n指定制表符停止位 */
int main(int argc, char *argv[]) {
    int tab_stops[MAXLEN] = {0};
    int start = 0, tab_size = TABSIZE;

    if (argc == 3 && argv[1][0] == '-' && argv[2][0] == '+') {
        start = atoi(argv[1] + 1);
        tab_size = atoi(argv[2] + 1);
    }
    set_fixed_tab_stops(tab_stops, MAXLEN, start, tab_size);
    detab(tab_stops, MAXLEN);
    return 0;
}
