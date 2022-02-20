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
> mkdir output
> gcc -o output\hello_world.exe -ansi hello_world.c
> output\hello_world.exe
```

## Linux
方式一：使用gcc编译，例如：
```bash
$ cd ch1
$ mkdir output
$ gcc -o output/hello_world.out -ansi hello_world.c
$ output/hello_world.out
```

方式二：使用make构建

构建单个目标
```bash
$ cd ch1
$ make output/hello_world.out
$ output/hello_world.out
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
