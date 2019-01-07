/*
结构化程序设计
c语言使用结构化程序设计

   程序=数据结构+算法
   
   程序由全局变量及众多相互调用的函数组成

   算法以函数形式实现，用于对数据结构进行操作

   程序设计的不足也是很明显的
   结构化程序设计没有封装和隐藏的概念，要访问
   某个数据结构中的某个变量，就可以直接访问，那
   么当变量的定义有改动的时候，就哟啊吧有访问该变量的语句找出来
   修改，不利于程序的维护和扩充

   难以差错，当某个数据结构的值不正确的时候，难以找到是哪个函数
   把值出错了

    重用：把我写过的函数调用出来重新使用

	但是在结构化程序设计中，随着程序规模的增大，又有程序大量函数，变量之间的
	关系是跟复杂哦，要抽取这些代码变得十分的困难

	面向对象的程序设计方法  i need you

	面向对象的程序= 类+类+类+类。。。。+类
	设计程序的过程，就是设计一大堆类的过程

	面向对象的程序方法：将某客观事物共同特点（属性）归纳出来，形成
	一个数据结构（可以用多个变量描述事物的属性）；

	将这些类事物所能进行的行为 也归纳出来，形成一个个函数，这些函数可以
	用来操作数据结构（这一步叫“抽象”）

	然后，通过某种语言形式，将数据结构和操作该数据结构的函数捆绑在一起，形成
	一个类，从而使得操作结构和操作该结构的算法呈现出显而易见的紧密关系，这就是
	封装
	面向对象的程序设计具有，抽线，封装，继承，多态的四个基本特性

	面向对象的程序模式
	               main（）
    class 1         class2            class3


*/
/*
类和对象

写一个程序输入矩形的长和宽，输出矩形的面积和周长

比如矩形这个东西，我们如果用类表示，怎么抽象化呢？

属性：我们需要定义两个变量来存储矩形的长和宽两个属性
行为：然后矩形的行为是求矩形的周长和面积

将长宽和输入长宽，求面积，求周长的属性和方法（三个函数）
封装在一起，就可以形成一个举行类

长宽叫做成员变量，输入长宽，求面积，求周长就叫做成员函数，
类看上去就是一个带函数的结构
类的名字可以当作一个类型的名字，去定义一个对象，通过类定义出的变量
就是我们说得对象

类的名字就是用户自定义的类型的名字，可以像使用基本类型的那样来使用它，
就是一种用户自定义类型
*/


/*
关于存储问题，对象只是成员变量需要存储空间，成员函数不需要存储空间
*/

/*
对象的运算只能用=号来表示
*/

/*
使用成员变量和使用成员函数有三个方法
如下程序将包含
用法1.对象名.成员民
用法2.指针->成员名
用法3.引用名.成员名
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CRectangle {
public:
	int w, h;
	int Area() {
		return w * h;
	}
	int Perimeter() {
		return 2 * (w + h);
	}
	void Init(int w_, int h_) {
		w = w_;
		h = h_;
	}
};
int main() {
	int w, h; CRectangle r;     //这个r就是一个对象
	cin >> w >> h;
	r.Init(w, h);
	cout << r.Area() << endl << r.w <<
		endl << r.Perimeter();
	return 0;

}*/
//  下次学习接着从，用法123，作为入手
/*#include<cstdio>
#include<iostream>
using namespace std;
class  Rectangele {
public:
	int w, h;
	int Aera() {
	    return w * h;
	}
	int Zhouchang(){
		return (w + h) * 2;
	}
	void Init(int w_, int h_) {
		w = w_; h = h_;
	}
};
int main() {
	int w, h;
	Rectangele c;
	Rectangele *p = &c;
	Rectangele &a = c;
	cin >> w >> h;
	c.Init(w, h);
	cout << a.Aera() << endl;
	return 0;

}*/
/*
类的成员函数和类分开写
*/
/*
int CRctangel::Area() {
	return w*h ;
}
*/
/*
类成员的可访问范围
private：私有成员  只能在成员函数内部访问
public： 共有成员  可以在任何地方访问
protected： 保护成员

如果某个成员面前没有上述关键字，则缺省地被认为是私有成员

在类的成员函数内部，能够访问：
--当前对象的全部属性，函数；
--同类其他对象的全部属性，函数
在类的成员函数以外的地方，只能访问该类对象的共有成员
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CEmployee {
private:
	char szname[30];

public:
	int salary;
	void setName(char *name);
	void getName(char *name);
	void averageSalary(CEmployee e1, CEmployee e2);
};
void CEmployee::setName(char*name) {
	strcpy_s(szname, name);
	 }
void CEmployee::getName(char *name) {
	strcpy_s(szname,name);
}
void CEmployee::averageSalary(CEmployee e1, CEmployee e2) {
	cout << e1.szname;
	salary = (e1.salary + e2.salary) / 2;

}
int main() {
	CEmployee e;
	//strcpy(e.szname, "Ton1234567");//以声明不可访问
	e.salary = 5000;
	e.setName  ("tmo");//ok
	return 0;
}*/
/*
设置私有成员的机制叫做隐藏
隐藏的目的是强制成员变量访问一定要通过成员函数进行，那么以后
成员函数的属性修改就需要更改成员函数即可，。否则所有直接访问
成员变量的语句都需要修改
*/

/*
成员函数的重载和参数的缺省
*/ 



























