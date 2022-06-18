#include <assert.h>
#include <string.h>

#include "getline.h"

typedef struct {
    int maxlen;
    char line[50];
    int len;
} TESTCASE;

int main() {
    /* 输入文件：testdata/Rubaiyat.txt */
    TESTCASE test_cases[] = {
        {50, "Ah Love! could you and I with Fate conspire\n", 44},
        {45, "To grasp this sorry Scheme of Things entire,", 44},
        {50, "\n", 1},
        {20, "Would not we shatte", 19},
        {50, "r it to bits -- and then\n", 25},
        {0, "", 0},
        {50, "Re-mould it nearer to the Heart's Desire!\n", 42},
        {50, "", 0}
    };
    char line[50];
    int i;

    for (i = 0; i < 8; ++i) {
        assert(getline(line, test_cases[i].maxlen) == test_cases[i].len);
        assert(strcmp(line, test_cases[i].line) == 0);
    }
    return 0;
}
