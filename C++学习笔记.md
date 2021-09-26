# C++学习笔记

## 1、头文件

- .h文件：declarations——类的声明(declaration)和原型(prototypes)；

  - .h文件用下面的格式写：

    #ifndef TICKETMACHINE_H_

    \#define TICKETMACHINE_H_

    \#endif

- .cpp文件：defination——函数体的源文件，即函数定义(defination)；

  - 一个cpp只写一个类；

- main.cpp文件：主函数；

## 2、声明和定义

每个 .cpp文件是一个编译单元

- **声明(declarations)：**有这个东西，但不告诉在哪里
  - extern int a；（声明变量用extern）
  - function prototypes;（函数原型是声明）
  - class/strut declarations;（类和结构体只有声明，没有定义）

- **定义(defination)：**告诉在哪里，包括变量定义、函数定义

## 3、::解析符

<类名>::<函数名>——表明函数是类的函数

## 4、include

将其他文件内容插入在本文件中，编译预处理指令，包含编译、汇编、链接等；

#include "xx.h" ：先从当前目录找，再去默认路径找；

#include <xx.h>：在编译器默认路径找。

## 5、抽象(Abstract)

关注主要问题，忽略部分细节；

## 6、成员变量(字段，Field)

参数和局部变量类似，主要作用在某个函数

成员变量可以在类内的成员函数直接使用，不需要定义

## 7、类实例化为对象

<类名> <对象名> 

函数是类的，不是对象的

## 8、this关键字

表示函数所属类的对象的指针

this->i 和 a.i等价

## 9、构造函数(constructor)

创建对象时被调用，函数名和类名相同

## 10、析构函数(destructor)

回收对象内存空间，对象结束使用时被调用，函数名是类名前加上～(tilde)

## 11、动态内存分配

new delete类似于malloc free

## 12、访问控制

public：所有类都可以访问

private：只有自己可以访问

protected：只有自己及子类可以访问

class默认private；struct默认public





