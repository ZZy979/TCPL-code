#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "getword.h"

typedef struct {
    int limit;
    int expected_ret;
    char expected_word[20];
} TESTCASE;

int main() {
    /* 输入文件：testdata/getword_input.txt */
    TESTCASE test_cases[] = {
        {20, 'T', "The"},
        {2, 'a', "an"},
        {20, 's', "swer"},
        {20, 'i', "is"},
        {20, '4', "4"},
        {20, '2', "2"},
        {20, '.', "."},

        {20, 'p', "print"},
        {20, '(', "("},
        {20, '\'', "'"},
        {3, 'h', "hel"},
        {20, 'l', "lo"},
        {20, ',', ","},
        {20, 'w', "world"},
        {20, '!', "!"},
        {20, '\'', "'"},
        {20, ')', ")"},

        {20, '3', "3"},
        {20, 'x', "xy"},
        {20, '+', "+"},
        {20, '4', "4"},
        {20, 'y', "yz"},

        {20, '2', "2"},
        {20, 'A', "A1B"},

        {20, '\"', "\""},
        {20, 's', "string"},
        {20, 'c', "constant"},
        {20, '\\', "\\"},
        {20, 'r', "r"},
        {20, '\\', "\\"},
        {20, 'n', "n"},
        {20, '\"', "\""},

        {20, '/', "/"},
        {20, '*', "*"},
        {20, 'C', "C"},
        {20, '-', "-"},
        {20, 's', "style"},
        {20, 'c', "comment"},
        {20, '*', "*"},
        {20, '/', "/"},

        {20, '#', "#"},
        {20, 'i', "include"},
        {20, '<', "<"},
        {20, 's', "stdio"},
        {20, '.', "."},
        {20, 'h', "h"},
        {20, '>', ">"},

        {20, 'w', "word"},
        {20, '_', "_"},
        {20, 'w', "with"},
        {20, '_', "_"},
        {20, 'u', "underscore"},

        {20, EOF, ""}
    };
    char word[20];
    int i;

    for (i = 0; i < 53; ++i) {
        assert(getword(word, test_cases[i].limit) == test_cases[i].expected_ret);
        assert(strcmp(word, test_cases[i].expected_word) == 0);
    }
    return 0;
}
