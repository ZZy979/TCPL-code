#include "set_tab_stops.h"

/* set_fixed_tab_stops：设置固定间隔制表符终止位 */
void set_fixed_tab_stops(int tab_stops[], int maxlen, int start, int tab_size) {
    int pos;

    if (start < 0 || start >= maxlen || tab_size <= 0)
        return;
    for (pos = start; pos < maxlen; pos += tab_size)
        tab_stops[pos] = 1;
}

/* set_customized_tab_stops：设置由命令行参数指定的一组自定义制表符停止位 */
void set_customized_tab_stops(int argc, char *argv[], int tab_stops[], int maxlen, int default_tab_size) {
    int i, pos;

    if (argc == 1)
        set_fixed_tab_stops(tab_stops, maxlen, 0, default_tab_size);
    else
        for (i = 1; i < argc; ++i) {
            pos = atoi(argv[i]);
            if (pos >= 0 && pos < maxlen)
                tab_stops[pos] = 1;
        }
}
