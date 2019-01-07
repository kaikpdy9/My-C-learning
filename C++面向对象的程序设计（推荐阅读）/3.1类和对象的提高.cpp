/*
this指针

用在c语言的作用是指向成员函数所作用的对象

非静态成员函数中，可以直接使用this赖掉表指向该函数作用的对象的指针
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public:
	double real, imag;
	void Print() {
		cout << real << "," << imag;
	}
	Complex(double r, double i): real(r), imag(i) {

		}
	Complex AddOne() {
		this->real++;   //等价于REAL++
		this->Print();  //等价于Print
		return *this;
	}
};
int main() {
	Complex c1(1, 1), c2(0, 0);
	c2 = c1.AddOne();
	return 0;

}*/
//this 指针的作用
/*#include<cstdio>
#include<iostream>
using namespace std;
class A {
	int i;
public:
	void Heelo() {
		cout << "hola" << endl;

	}
};
int main() {
	A*p = NULL;
	p->Heelo();
}*/
//静态成员函数不能使用this指针
//因为静态成员函数并不具体作用某个对象
//因此，静态成员的真实参数的个数，就是程序中写出的参数个数
//而非静态成员的参数个数要加一 个