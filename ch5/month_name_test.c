#include <assert.h>
#include <string.h>

#include "month_name.h"

typedef struct {
    int n;
    char *expected;
} TESTCASE;

int main() {
    TESTCASE test_cases[] = {
        {-1, "Illegal month"},
        {0, "Illegal month"},
        {1, "January"},
        {2, "February"},
        {3, "March"},
        {4, "April"},
        {5, "May"},
        {6, "June"},
        {7, "July"},
        {8, "August"},
        {9, "September"},
        {10, "October"},
        {11, "November"},
        {12, "December"},
        {13, "Illegal month"}
    };
    int i;

    for (i = 0; i < 15; ++i)
        assert(strcmp(month_name(test_cases[i].n), test_cases[i].expected) == 0);
    return 0;
}
