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
* [练习1-22](ch1/exec1-22.c)
* [练习1-23](ch1/exec1-23.c)
* [练习1-24](ch1/exec1-24.c)

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
