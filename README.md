﻿# clang


-建仓日期：2021年8月3日星期二 下午8:16

-学习书籍：C语言程序设计（第二版）中国铁道出版社有限公司
-ISBN：978-7-113-25855-9

-项目标准：C23

-根据书本现学现用写代码，不是初次学习，部分知识已经熟悉于心或略有过。
>以打开方便为目的，每个文件夹都是一个Clion项目，一个项目（章节）内例码可能会有微调:
	Clone，直接打开并运行项目。

-git提交编号：开始当天为1.0,第二天为2.0，第三天为3.0以此类推。
			假如（尽管不可能存在）一天有多次目录（与书中不同）修改，第一次修改为x.1第二次为			x.2以此类推。


** 目录（与书中不同，手工索引）**

    -Chapter1：
     -简单的C程序,输出，求平方和，求平均值。
     -编辑(.c)，编译(.o)，连接(/)，执行(./)。
    -Chapter2:
     -数据类型：基本类型——整型、字符型、实型、枚举型;
     -构造类型——数组类型、结构体类型、共用体类型;
     -指针类型;
     -空类型;
     -整型常量：八进制常量以0开头——如053、033
     -十六进制常量以0X或0x开头——如0x78F2、0X23A4
     -实体常量：指数形式用E或e将底数和指数分开——如2E6是2的6次方
     -变量的定义和使用。
     -字符常量：只能是单个字符且只能用单引号括起来——’D‘
     -复合运算符自右向左:a+=a-=a等于a+=(a-=a)
     -复合条件结合自右向左：a>b?a:c>d?c:d等于a>b?a:(c>d?c:d)
     -逻辑运算符：与或非，关系运算符：小等大
     -位运算：(异或运算，不同则为1)0^0=0、1^1=0、1^0=1、0^1=1
    -Chapter3:
     -程序的控制结构(for、while、if、switch)
     -算法：联系到计算机中程序模块执行的顺序。
     -break:结束case的分支，跳出程序switch结构
        或者跳出循环体后执行循环的后续语句。
     -continue：结束本次循环体内容，但不跳出，继续下一次循环内容。
     -while(条件)，符合条件进行循环，不符合条件则跳出循环执行循环的后续语句。
    -Chapter4:
     -C语言没有字符串变量，使用字符数组替代
     -数组元素个数必须为正整型常量，元素从[0]开始
     -数组下界 <= 下标 <= 上界
     -C语言中不会检测下标越界的错误，编译器不会报错，运行会出现严重错误
     -选择排序、冒泡排序
     -二维数组：a[行][列]，在内存中存放顺序为行、列
     -二维数组初始化：a[2][3]={{1,2,3},{1,2,3}}每行3个列
     -二维数组所有元素赋值，第一维元素可以省略，第二维长度不可省略
        >a[][3]=a[2][3]={{1,2,3},{1,2,3}}等价a[][3]={{1,2,3},{1,2,3}}
     -

