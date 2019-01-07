/*
成员函数的一种
成员与类名相同，可以有参数，不能有返回值（void 也不行）
作用是对对象进初始化，如给成员变量赋初始值
如果定义类没有写构造函数，则编译器生成一个默认的无参数的构造函数
默认构造函数无参数，不做任何操作

如果定义了构造函数，则编译器不生成默认的无参数的构造函数
对象生辰石构造函数自动调用。对象一旦生成，就再也不能在其上执行构造函数
一个类可以有很多个构造函数
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
private:
	double real, image;
public: void Set(double r, double i);
};  //编译器默认构造函数
Complex c1;//默认构造函数被调用
Complex *pc = new Complex;//默认构造函数被调用
*/
//自己写个构造函数
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
private :
	double real, image;
public:
	Complex(double r, double i = 0);

};
Complex::Complex(double r, double i) {
	real = r; image = i;
}
Complex c1;//没有参数
Complex *pc = new Complex; //没有参数
Complex c1(2);
*/
/*
可以有多个构造函数，参数个数或类型不同
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public:
	double real, image;
public:
	void Set(double r, double i);
	Complex(double r, double i);
	Complex(double r);
	Complex(Complex c1, Complex c2);





};
Complex::Complex(double r, double i)
{
	real = r; 
	image = i;
}
Complex::Complex(double r) {
	real = r; image = 0;

}
Complex::Complex(Complex c1, Complex c2) {
	real = c1.real + c2.real;
	image = c1.image + c2.image;
}
Complex c1(3), c2(1, 0), c3(c1, c2);
//就像小蝌蚪找妈妈那样，什么类型，有多少个参数就往哪里走
int main() {
	cout << c1.real << c2.real << c3.real;
	return 0;

}*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CSample {
	int x;
public:
	CSample() {
		cout << " 1 called" << endl;
	}
	CSample(int n) {
		x = n;
		cout << " 2   calles" << endl;
	}
};
int main() {
	CSample array1[3];
	cout << "1" << endl;
	CSample array2[2] = { 4,5 }
	cout << "2" << endl;
	CSample array3[2] = { 3 };
	cout << "step3" << endl;
	CSample *array4 = new CSample[2];
	delete[]array4;
	return 0;

}*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Test {
public:
	Test(int  n){}
	Test(int n,int m){}
	Test(){}
};
Test array1[3] = { 1,Test(1,2) };
//这个Test分别用（1）（2）（3）初始化
Test array2[3] = { Test(2,3),Test(1,2),1 };
*/


