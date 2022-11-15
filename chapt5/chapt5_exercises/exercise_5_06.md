# 习题5-06 P188
什么叫做静态成员？它有何特点？

- 静态函数成员是被某个类所有对象共享的函数成员，它不依赖于某个数据成员而存在。

特点：
1. 可以通过**类名**或**对象名**来调用
2. 可以直接访问该类的**静态数据**和**函数成员**（访问非静态成员必须通过对象名）
3. 不依赖于任何对象，直接访问静态数据！（普通函数成员也可访问静态数据成员，但需要借助对象，因为对普通成员函数的调用必须通过对象名）