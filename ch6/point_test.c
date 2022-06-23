#include <assert.h>

#include "point.h"

typedef struct {
    int x;
    int y;
} MAKEPOINT_TESTCASE;

typedef struct {
    struct point p1;
    struct point p2;
    struct point expected;
} ADDPOINT_TESTCASE;

int main() {
    MAKEPOINT_TESTCASE makepoint_test_cases[] = {
        {3, 4},
        {0, 0},
        {0x7fffffff, 0x80000000}
    };
    ADDPOINT_TESTCASE addpoint_test_cases[] = {
        {{1, 2}, {3, 4}, {4, 6}},
        {{123, 456}, {0, -789}, {123, -333}},
        {{0x7fffffff, 0x80000000}, {0x80000000, 0x7fffffff}, {-1, -1}}
    };
    int i;

    for (i = 0; i < 3; ++i) {
        struct point p = makepoint(makepoint_test_cases[i].x, makepoint_test_cases[i].y);
        assert(p.x == makepoint_test_cases[i].x && p.y == makepoint_test_cases[i].y);
    }

    for (i = 0; i < 3; ++i) {
        struct point p = addpoint(addpoint_test_cases[i].p1, addpoint_test_cases[i].p2);
        assert(p.x == addpoint_test_cases[i].expected.x && p.y == addpoint_test_cases[i].expected.y);
    }
    return 0;
}
