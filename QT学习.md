# <center>QT学习</center>
#### 信号与槽机制
   ```
   connect(&b1,&QPushButton::click,this,&QPushButton::hide);
   /*QT4  不进行错误检测*/
   connect(sender, SIGNAL(signal()), receiver, SLOT(slot()));
   /*
   &b1: 信号发射者，转的是地址
   &QPushButton::click : 处理的信号 （什么信号）
   this : 处理信号的对象
   &QPushButton::hide :槽函数 做出响应
    */
   ```

+ 自定义槽函数

   ```
        class Name::public Fa_class{
            signals : void mysignal();
            /**
             * 信号必须有singals关键字来声明
             * 信号没有返回值，但可以有参数
             * 信号就是函数的声明，无需定义
             * 使用： emit mysignal();
             * 信号可以重载
             */
        }
        void Myclass_name::fun_name(){
            emit mysignal();
        }
   ```

#### 通过指针来引用函数
    ```
    void fun(int ){}
    void (*p)(int) = fun;
    /*
    void fun(int a){...}
    void (*p)(int) = fun;
    p(a);
     */
    
    void(Classname::*p)() = &Classname::functionname;
    }
    ```
####Lambda表达式 -- 匿名函数对象
```
[capture](parameters) mutable ->return-type{statement}
[capture] : 捕捉列表
(parameters) : 参数列表
mutable : 取消常量性 即可修改
connect (sender,&Signal(), [] (){});
[](){} -- 相当是是一个函数体 void fun(){};

1.[var]表示值传递方式捕捉变量var；
2.[=]表示值传递方式捕捉所有父作用域的变量（包括this）；
3.[&var]表示引用传递捕捉变量var；
4.[&]表示引用传递方式捕捉所有父作用域的变量（包括this）；
5.[this]表示值传递方式捕捉当前的this指针。

父作用域 即包含lambda表达式的语句块 在捕捉列表中不可以重复使用
/*
[=]  可以传外部变量进来 但不可以改变值的内容
=：  等于将所有的局部变量以及类成员以值方式传进来
[=]() mutable 可以改变值的内容

this :  及类成员以值方式传进来
& (引用):等于将所有的局部变量以值方式传进来 
 */
```

