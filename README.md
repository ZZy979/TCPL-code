# TCPL-code
《C程序设计语言》(The C Programming Language)（第2版）书中代码和练习题解答

图书链接：<https://book.douban.com/subject/1139336/>

笔记：<https://blog.csdn.net/zzy979481894/article/details/122767409>

# 运行方式
## Windows
方式一：复制到Visual Studio运行

方式二：在命令行中使用gcc编译，例如：
```
> cd ch1
> gcc -o hello_world.exe -ansi hello_world.c
> hello_world.exe
```

## Linux
方式一：使用gcc编译，例如：
```bash
$ cd ch1
$ gcc -o hello_world.out -ansi hello_world.c
$ ./hello_world.out
```

方式二：使用make构建

构建单个目标
```bash
$ cd ch1
$ make hello_world.out
$ ./hello_world.out
```

构建所有目标
```bash
$ make
```

删除输出文件
```bash
$ make clean
```

# 代码目录
## 第1章 导言
### 1.1 入门
* [Hello world](ch1/hello_world.c)

### 1.2 变量与算术表达式
* [打印华氏温度与摄氏温度对照表](ch1/fahrenheit_celsius_table.c)
* [打印华氏温度与摄氏温度对照表（浮点数版本）](ch1/fahrenheit_celsius_table_float.c)
* [练习1-3](ch1/exec1-3.c)
* [练习1-4](ch1/exec1-4.c)

### 1.3 for语句
* [打印华氏温度与摄氏温度对照表（for循环）](ch1/fahrenheit_celsius_table_for.c)
* [练习1-5](ch1/exec1-5.c)

### 1.4 符号常量
* [打印华氏温度与摄氏温度对照表（符号常量）](ch1/fahrenheit_celsius_table_define.c)

### 1.5字符输入/输出
#### 1.5.1 文件复制
* [将输入复制到输出（版本1）](ch1/file_copying.c)
* [将输入复制到输出（版本2）](ch1/file_copying_v2.c)

#### 1.5.2 字符计数
* [统计输入的字符数（版本1）](ch1/character_counting.c)
* [统计输入的字符数（版本2）](ch1/character_counting_v2.c)

#### 1.5.3 行计数
* [统计输入中的行数](ch1/line_counting.c)
* [练习1-8](ch1/exec1-8.c)
* [练习1-9](ch1/exec1-9.c)
* [练习1-10](ch1/exec1-10.c)

#### 1.5.4 单词计数
* [单词计数](ch1/word_counting.c)
* [练习1-12](ch1/exec1-12.c)

### 1.6 数组
* [统计字符的出现次数](ch1/character_counting_array.c)
* [练习1-13](ch1/exec1-13.c)
* [练习1-14](ch1/exec1-14.c)

### 1.7 函数
* [测试power函数](ch1/power.c)
* [练习1-15](ch1/exec1-15.c)

### 1.8 参数——传值调用
* [测试power函数（版本2）](ch1/power_v2.c)

### 1.9 字符数组
* [打印最长的输入行](ch1/print_longest_line.c)
* [练习1-16](ch1/exec1-16.c)
* [练习1-17](ch1/exec1-17.c)
* [练习1-18](ch1/exec1-18.c)
* [练习1-19](ch1/exec1-19.c)

### 1.10 外部变量与作用域
* [打印最长的输入行（外部变量）](ch1/print_longest_line_extern.c)
* [练习1-20](ch1/exec1-20.c)
* [练习1-21](ch1/exec1-21.c)

## 第2章 类型、运算符与表达式
### 2.2 数据类型及长度
* [练习2-1](ch2/exec2-1.c)

### 2.3 常量
* [strlen函数](ch2/strlen.c)

### 2.7 类型转换
* [atoi函数](ch2/atoi.c)
* [lower函数](ch2/lower.c)
* [伪随机数生成器](ch2/rand.c)
* [练习2-3](ch2/htoi.c)

### 2.8 自增运算符与自减运算符
* [squeeze函数](ch2/squeeze.c)
* [strcat函数](ch2/strcat.c)
* [练习2-4](ch2/squeeze2.c)
* [练习2-5](ch2/any.c)

### 2.9 按位运算符
* [getbits函数](ch2/getbits.c)
* [练习2-6](ch2/setbits.c)
* [练习2-7](ch2/invert.c)
* [练习2-8](ch2/rightrot.c)

### 2.10 赋值运算符与表达式
* [bitcount函数](ch2/bitcount.c)
* [练习2-9](ch2/bitcount2.c)

### 2.11 条件表达式
* [练习2-10](ch2/lower2.c)

## 第3章 控制流
### 3.3 else-if语句
* [binsearch函数](ch3/binsearch.c)
* [练习3-1](ch3/exec3-1.c)

### 3.4 switch语句
* [统计字符的出现次数](ch3/character_counting_switch.c)
* [练习3-2](ch3/escape.c)

### 3.5 while循环与for循环
* [atoi函数](ch3/atoi.c)
* [shellsort函数](ch3/shellsort.c)
* [reverse函数](ch3/reverse.c)
* [练习3-3](ch3/expand.c)

### 3.6 do-while循环
* [itoa函数](ch3/itoa.c)
* [练习3-4](ch3/itoa2.c)
* [练习3-5](ch3/itob.c)
* [练习3-6](ch3/itoa3.c)

### 3.7 break语句与continue语句
* [trim函数](ch3/trim.c)

## 第4章 函数与程序结构
### 4.1 函数的基本知识
* [打印所有与模式匹配的行](ch4/grep.c)
* [练习4-1](ch4/strrindex.c)

### 4.2 返回非整型值的函数
* [atof函数](ch4/atof.c)
* [简单计算器](ch4/rudimentary_calculator.c)
* [练习4-2](ch4/atof2.c)

### 4.3 外部变量
* [逆波兰计算器](ch4/reverse_polish_calculator)
    * [main函数](ch4/reverse_polish_calculator/main.c)
    * [push和pop函数](ch4/reverse_polish_calculator/stack.c)
    * [getop函数](ch4/reverse_polish_calculator/getop.c)
    * [getch和ungetch函数](ch4/reverse_polish_calculator/getch.c)
* [练习4-3~4-6](ch4/exec)：扩充逆波兰计算器
* [练习4-7](ch4/ungets.c)
* [练习4-8](ch4/getch2.c)

### 4.10 递归
* [printd函数](ch4/printd.c)
* [qsort函数](ch4/qsort.c)
* [练习4-12](ch4/itoa.c)
* [练习4-13](ch4/reverse.c)

### 4.11 C预处理器
* [练习4-14](ch4/swap_macro.h)

## 第5章 指针与数组
### 5.2 指针与函数参数
* [getint函数](ch5/getint.c)
* [练习5-1](ch5/getint2.c)
* [练习5-2](ch5/getfloat.c)

### 5.3 指针与数组
* [strlen函数](ch5/strlen.c)

### 5.4 地址算术运算
* [简单存储分配程序](ch5/alloc.c)
* [strlen函数（版本2）](ch5/strlen2.c)

### 5.5 字符指针与函数
* [strcpy函数（数组下标版本）](ch5/strcpy.c)
* [strcpy函数（指针版本1）](ch5/strcpy2.c)
* [strcpy函数（指针版本2）](ch5/strcpy3.c)
* [strcpy函数（指针版本3）](ch5/strcpy4.c)
* [strcmp函数（数组下标版本）](ch5/strcmp.c)
* [strcmp函数（指针版本）](ch5/strcmp2.c)
* [练习5-3](ch5/strcat.c)
* [练习5-4](ch5/strend.c)
* 练习5-5
    * [strncpy函数](ch5/strncpy.c)
    * [strncat函数](ch5/strncat.c)
    * [strncmp函数](ch5/strncmp.c)

### 5.6 指针数组以及指向指针的指针
* [排序文本行](ch5/sort)
    * [main函数](ch5/sort/main.c)
    * [readlines和writelines函数](ch5/sort/lineio.c)
    * [qsort函数](ch5/sort/qsort.c)
* [练习5-7](ch5/exec5-7)

### 5.7 多维数组
* [day_of_year和month_day函数](ch5/date_conversion.c)
* [练习5-8](ch5/date_conversion2.c)

### 5.9 指针与多维数组
* [month_name函数](ch5/month_name.c)
* [练习5-9](ch5/date_conversion3.c)

### 5.10 命令行参数
* [回显命令行参数（版本1）](ch5/echo.c)
* [回显命令行参数（版本2）](ch5/echo_v2.c)
* [打印所有与模式匹配的行](ch5/find.c)
* [打印所有与模式匹配的行（支持选项参数）](ch5/find_v2.c)

### 5.11 指向函数的指针
* [排序文本行（版本2）](ch5/sort_v2)
    * [main函数](ch5/sort_v2/main.c)
    * [qsort函数](ch5/sort_v2/qsort.c)
    * [numcmp函数](ch5/sort_v2/numcmp.c)

### 5.12 复杂声明
* [声明转换](ch5/dcl_convert)
    * [gettoken函数](ch5/dcl_convert/lexer.c)
    * [dcl和dirdcl函数](ch5/dcl_convert/parser.c)
    * [dcl程序](ch5/dcl_convert/dcl.c)
    * [undcl程序](ch5/dcl_convert/undcl.c)

## 第6章 结构
### 6.2 结构与函数
* [point结构和操作函数](ch6/point.c)
* [rect结构和操作函数](ch6/rect.c)
