# 习题2-05
注释有什么作用？C++语言中有哪几种注释方法？它们之间有什么区别？

- 注释的作用：对程序进行注解和说明，以便于阅读，编译系统在对源程序进行编译时不理会注释部分。
- C++有两种注释方法，一种是用`/*`和`*/`括起注释文字
```C++
/* This is
a comment.
*/
```
- 另一种是用`//`，从`//`开始到它所在的行尾，所有字符都被作为注释处理。
```C++
//This is a comment.
int i;  //i is an integer
```