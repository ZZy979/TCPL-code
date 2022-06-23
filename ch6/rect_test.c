#include <assert.h>

#include "rect.h"

typedef struct {
    struct point p;
    struct rect r;
    int expected;
} PTINRECT_TESTCASE;

typedef struct {
    struct rect r;
    struct rect expected;
} CANONRECT_TESTCASE;

int main() {
    PTINRECT_TESTCASE ptinrect_test_cases[] = {
        {{2, 1}, {{-1, -2}, {4, 3}}, 1},
        {{-1, 1}, {{-1, -2}, {4, 3}}, 1},
        {{0, -2}, {{-1, -2}, {4, 3}}, 1},
        {{4, 1}, {{-1, -2}, {4, 3}}, 0},
        {{2, 3}, {{-1, -2}, {4, 3}}, 0},
        {{-2, 0}, {{-1, -2}, {4, 3}}, 0},
        {{-1, -5}, {{-1, -2}, {4, 3}}, 0},
        {{5, 2}, {{-1, -2}, {4, 3}}, 0},
        {{6, 8}, {{-1, -2}, {4, 3}}, 0},
        {{2, 1}, {{4, 3}, {-1, -2}}, 0},
        {{-1, 1}, {{4, 3}, {-1, -2}}, 0},
        {{5, 2}, {{4, 3}, {-1, -2}}, 0}
    };
    CANONRECT_TESTCASE canonrect_test_cases[] = {
        {{{-1, -2}, {4, 3}}, {{-1, -2}, {4, 3}}},
        {{{4, 3}, {-1, -2}}, {{-1, -2}, {4, 3}}},
        {{{-1, 3}, {4, -2}}, {{-1, -2}, {4, 3}}},
        {{{4, -2}, {-1, 3}}, {{-1, -2}, {4, 3}}}
    };
    int i;

    for (i = 0; i < 12; ++i)
        assert(ptinrect(ptinrect_test_cases[i].p, ptinrect_test_cases[i].r) == ptinrect_test_cases[i].expected);

    for (i = 0; i < 4; ++i) {
        struct rect r = canonrect(canonrect_test_cases[i].r);
        assert(r.pt1.x == canonrect_test_cases[i].expected.pt1.x);
        assert(r.pt1.y == canonrect_test_cases[i].expected.pt1.y);
        assert(r.pt2.x == canonrect_test_cases[i].expected.pt2.x);
        assert(r.pt2.y == canonrect_test_cases[i].expected.pt2.y);
    }
    return 0;
}
