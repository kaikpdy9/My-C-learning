/*
多态 的关键在于通基类指针或引用调用一个虚函数时，编译时不确定到底调用的是基类还是派生类
的函数，运行时才确定----这叫 动态联编。
*/
//提示：请看下面的程序
/*#include<cstdio>
#include<iostream>
using namespace std;
class Base {
public:
	int i;
	virtual void Print() { cout << "Base:Print"; }
};
class Derived :public Base {
public:
	int n;
	virtual void Print() {
		cout << "Drive:Print" << endl;
	}
};
int main() {
	Derived d;
	cout << sizeof(Base) << "," << sizeof(Derived);
	return 0;

}*/
/*
多态实行的关键----虚函数表

每一个虚函数的类（或有虚函数的类的派生类）都有一个虚函数表，该类的任何对象中都放有
虚函数表的指针。虚函数表中列出了该类的虚函数地址。多出来的4个字节就是用来放虚函数表的
地址的

*/
/*#include<iostream>
using namespace std;
class A {
public:virtual void Func() { cout << "A::func" << endl; }
};
class B :public A {
public:
	virtual void Func() { cout << "B::func" << endl; }
};
int main() { 
	A a;
	A *pa = new B();
	pa->Func();
	long long *p1 = (long long *)&a;
	long long *p2 = (long long *)pa;
	*p2 = *p1;           //这里覆盖掉了b的虚函数表的内容改成了a
 	pa->Func();          //这个多态虽然调用的是b的虚函数，但是b的虚函数表被覆盖了
	return 0;
}*/