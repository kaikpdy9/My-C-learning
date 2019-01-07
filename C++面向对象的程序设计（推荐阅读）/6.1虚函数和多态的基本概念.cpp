/*
虚函数

在类的定义中，前面有Virtual关键字的成员函数就是虚函数。
class base{
   virtual int get()
};
int base::get(){}
virtual关键字只用在类定义里的函数声明中，
写函数体时不用
构造函数和静态成员函数不能是虚函数

虚函数和普通函数的区别在于虚函数能够参与多态，而普通的函数不能
*/

/*
多态的表现形式
*/
/*       一
派生类的指针呢个可以赋值给基类指针
通过基类指针调用基类和派生类中的同名虚函数时:
1.若该指针指向一个基类的对象,那么被调用是基类的虚函数:
2.若该指针指向一个派生类的对象,那么被调用的是派生类的虚函数
这种机制就叫做 多态
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CBase {
public:
	virtual void SomeVirtualFunc(){}
};
class CDrived :public CBase {
public:
	virtual void SomeVirtualFunc(){}
};
int main() {
	CDrived ODervied;
	CBase *p = &ODervied;
	p->SomeVirtualFunc();//调用哪个虚函数取决于p指向哪种类型的对象
	return 0;

}*/


// 二 
/*
派生类的对象可以赋值给基类的引用
通过类型引用调用基类和派生类的同名虚函数时:
1.若该引用引用的是一个基类的对象,那么被调用
的是基类的虚函数；
2.若该引用引用的是一个派生类的对象,那么被调
用到的是派生类的虚函数

这种机制也叫做 多态
*/
/*#include<iostream>
#include<cstdio>
using namespace std;
class CBase {
public:
	virtual void SomeVirtualFunc() {}
};
class CDrived :public CBase {
public:
	virtual void SomeVirtualFunc() {}
};
int main(){
	CDrived Odaawd;
	CBase &r = Odaawd;
	r.SomeVirtualFunc(); //调用哪个虚函数取决于r引用那种类型的对象
	return 0;
}*/
//多态的简单示例
/*#include<cstdio>
#include<iostream>
using namespace std;
class A {
public:
	virtual void Print ()
	{
		cout << "A::print" << endl;
	}
};
class B :public A {
public:
	virtual void Print() {
		cout << "B print" << endl;
	}
};
class D :public A {
public:
	virtual void Print() { cout << "D::print" << endl; }
};
class E :public B {
	virtual void Print() { cout << "E::Print" << endl; }
};
int main(){
	A a; B b; E e; D d;
	A*pa = &a;
	B*pb = &b;
	E*pe = &e;
	D*pd = &d;
	pa->Print();
	pa = pb;
	pa->Print();
	pa = pd;
	pa->Print();
	pa = pe;
	pa->Print();
	return 0;

}*/
/*
多态的作用
在面向对象的程序设计中使用多态，能够增强程序的可扩充性，即程序需要修改或增加功能的时候,需要
改动和增加代码较少
*/
