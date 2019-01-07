//运算重载符的需求
/*
c++预定义的运算符，只能用于基本数据类型的运算：整形，实型，字符型，逻辑性
+，-，。。。。.>> !,
不能用于对象的运算


运算符重载
运算符重载，就是对已有的运算符（c++中预定义的运算符）赋予多重的含义，使同
一运算符作用于不同类型是导致不同的类型行为

运算符重载的目的是：扩展c++提供的运算符的适用范围，使之能够作用于对象。

同一运算符对不同类型的操作数，所发生的行为是不同的

*/
//运算符重载的是指就是函数重载
/*
可以重载为普通函数，也可以重载为成员函数
把运算符的表达式转化成对运算符函数的调用
把运算符的操作数转化成运算符的参数
运算符被多次重载时，根据实参的类型决定调用哪个运算符函数
*/
//运算符重载的形式
/*
返回值类型  operator 运算符（形参表）
{
      。。。
}

*/
//例子 
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public:
	double real, imag;
	Complex(double r=0.0,double i=0.0):real(r),imag(i){}
	Complex operator -(const Complex &c);

};
Complex operator +(const Complex &a, const Complex &b) {
	return Complex(a.real + b.real, a.imag + b.imag);
}
Complex Complex::operator-(const Complex &c) {
	return Complex(this->real - c.real, imag - c.imag);

}
//重载成为成员函数时，参数个数为运算符目数减一。
//重载为普通函数时，参数个数为运算符数目
int main() {
	Complex a(4, 4), b(1, 1), c;
	c = a + b;
	cout << c.real << "," << (a - b).imag << endl;
	cout << (a - b).real << "," << (a - b).imag << endl;
	return 0;

 }*/
/*c = a + b; 等价于c = operator +(a + b); 这是普通函数传两个参数
a - b  等价于 a.operator -(b);  这是成员函数只要一个参数*/

