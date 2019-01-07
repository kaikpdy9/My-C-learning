/*#include<iostream>
using namespace std;
class Complex
{
	double real, imag;
public:
	Complex(double r = 0, double i = 0) :real(r), imag(i) {};
	operator double() { return real; }
	//强制类型转换符double  
	//这个函数的函数值就是这个类型的本身
};
int main() {
	Complex c(1.2, 3.4);
	cout << double(c) << endl;  //double==c.opertor double()即返回c.real
	double n = 2 + c;  //这个等价于double n=2+c.operator double()
	cout << n;
	return 0;

}*/