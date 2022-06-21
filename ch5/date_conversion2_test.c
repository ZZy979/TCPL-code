#include <assert.h>

#include "date_conversion.h"

typedef struct {
    int year;
    int month;
    int day;
    int day_of_year;
} TESTCASE;

void test_day_of_year(TESTCASE test_cases[], int n);
void test_month_day(TESTCASE test_cases[], int n);

int main() {
    TESTCASE test_cases[] = {
        {2022, 1, 1, 1},
        {2022, 3, 1, 60},
        {2022, 12, 31, 365},
        {2020, 3, 1, 61},
        {2020, 12, 31, 366},
        {2000, 3, 1, 61},
        {2000, 12, 31, 366},
        {1900, 3, 1, 60},
        {1900, 12, 31, 365}
    };
    TESTCASE invalid_month_day[] = {
        {-2020, 3, 1, -1},
        {2022, 0, 10, -1},
        {2022, 13, 1, -1},
        {2022, 3, -2, -1},
        {2022, 2, 29, -1},
        {2022, 12, 32, -1}
    };
    TESTCASE invalid_day_of_year[] = {
        {-2020, -1, -1, 61},
        {2022, -1, -1, -5},
        {2020, -1, -1, 367},
        {2022, -1, -1, 366}
    };

    test_day_of_year(test_cases, 9);
    test_day_of_year(invalid_month_day, 6);
    test_month_day(test_cases, 9);
    test_month_day(invalid_day_of_year, 4);
    return 0;
}

void test_day_of_year(TESTCASE test_cases[], int n) {
    int i;

    for (i = 0; i < n; ++i)
        assert(day_of_year(test_cases[i].year, test_cases[i].month, test_cases[i].day) == test_cases[i].day_of_year);
}

void test_month_day(TESTCASE test_cases[], int n) {
    int month, day, i;

    for (i = 0; i < n; ++i) {
        month_day(test_cases[i].year, test_cases[i].day_of_year, &month, &day);
        assert(month == test_cases[i].month);
        assert(day == test_cases[i].day);
    }
}
