/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public:
	double real, imag;
public:
	Complex(double r, double i) :real(r), imag(i) {};
	Complex operator+(double r);
};
Complex Complex::operator+(double r) {
	return Complex(real + r, imag);
}
int main() {
	Complex c(2, 3);
	c + 3;
	cout << c.;

}*/
/*
一般情况下，将运算符重载为类的成员函数，是比较好的选择
但有时候，重载为成员函数本能满足使用要求，重载为普通函数，又不能访问类的私有成员
所以需要将运算符重载为友元
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
	double real, imag;
public:
	Complex(double r, double i) :real(r), imag(i) {};
	Complex operator+(double r);
	friend Complex operator+ (double r, const Complex &c);
};*/