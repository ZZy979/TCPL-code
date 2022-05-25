#pragma once

#define NKEYS 32
/* 下面的方式只能在定义keytab的源文件中使用，否则会报错“不允许使用不完整的类型” */
/* #define NKEYS (sizeof keytab / sizeof(struct key)) */

struct key {
    char *word;
    int count;
};

extern struct key keytab[];
