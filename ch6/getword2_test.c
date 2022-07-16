#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "getword.h"

typedef struct {
    int limit;
    int expected_ret;
    char expected_word[30];
} TESTCASE;

int main() {
    /* 输入文件：testdata/getword_input.txt */
    TESTCASE test_cases[] = {
        {30, 'T', "The"},
        {2, 'a', "an"},
        {30, 's', "swer"},
        {30, 'i', "is"},
        {30, '4', "4"},
        {30, '2', "2"},
        {30, '.', "."},

        {30, 'p', "print"},
        {30, '(', "("},
        {30, '\'', "'"},
        {3, 'h', "hel"},
        {30, 'l', "lo"},
        {30, ',', ","},
        {30, 'w', "world"},
        {30, '!', "!"},
        {30, '\'', "'"},
        {30, ')', ")"},

        {30, '3', "3"},
        {30, 'x', "xy"},
        {30, '+', "+"},
        {30, '4', "4"},
        {30, 'y', "yz"},

        {30, '2', "2"},
        {30, 'A', "A1B"},

        {30, '\"', "\"string constant\\r\\n\""},

        {30, '/', "/* C-style comment */"},

        {30, '#', "#include"},
        {30, '<', "<"},
        {30, 's', "stdio"},
        {30, '.', "."},
        {30, 'h', "h"},
        {30, '>', ">"},

        {30, 'w', "word_with_underscore"},

        {30, EOF, ""}
    };
    char word[30];
    int i;

    for (i = 0; i < 34; ++i) {
        assert(getword(word, test_cases[i].limit) == test_cases[i].expected_ret);
        assert(strcmp(word, test_cases[i].expected_word) == 0);
    }
    return 0;
}
