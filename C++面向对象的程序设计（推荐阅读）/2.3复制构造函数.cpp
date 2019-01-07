/*
定义：只有一个参数，即对同类对象的引用

样子张这个  X::X( X& )或者X::X(const X &)二者选一，
后者能够对常量对象作为参数
如果没有定义复制构造函数，那么编译器生成默认复值构造
函数。默认的复制构造函数完成复制功能。
*/
/*
#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
private:
	double real, image;

};
Complex c1;//调用无参缺省构造函数
Complex c2(c1);//调用缺省的复制构造函数，将c2初始化成和c1一样
*/
//自己定义一个复制构造函数
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public :
	double real, imagel;
		Complex() {}
		Complex(const Complex &c) {
			real = c.real;
			imagel = c.imagel;
			cout << "over";

		}
};
int main() {
	Complex c1;
	Complex c2(c1);
	return 0;

}*/
//复制构造函数起作用的三种情况
//1.当用一个对象去初始化同类的另一个对象的时候
/*
Complex c2（c1）；
Complex c2=c1  初始化语句，非赋值语句
2.如果某函数有一个参数是类A的对象，那么该函数被调用时
，类A的复制构造函数将被调用
3.如果函数的返回值是一个类A的对象时，则函数返回时，A的复制构造函数被调用
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class A {
public:
	int v;
	A(int n) { v = n; };
	A(const A&a) {
		v = a.v;
		cout << "copy constructor called";
	}
};
A Func() {
	A b(4);
	return b;
}
int main() {
	cout << Func().v << endl;
	return 0;
}


//不允许有形如X::X(X)的构造函数*/ 
