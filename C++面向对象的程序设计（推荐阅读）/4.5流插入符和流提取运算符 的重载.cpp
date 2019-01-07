/*
流插入运算符的重载
*/
//cout<<5  ;即cout.operator<<(5);
//cout<<"this",即cout.opretor<<("this");	
/*
这里有个问题
怎样输出cout<<5<<"hola"

我们可以将返回值变成cout继续
即
ostream & ostream::operator<<(int n){
             ....//输出n的代码
			 return *this;
}

ostream & ostream::operator<<(const char *s)
{
             .....//输出s的代码
			 return *this;
}
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CStudent {
public:
	int nAge;

};
ostream &*//*这里的返回类型，特别有讲究，让他变成ostream的引用，即返回cout*//* operator<<(ostream & o, const CStudent & s) {*/  //这个o即是ostream的对象(cout)
	/*o << s.nAge;                                                                                          //为了节省开销，我们让它变成ostream的引用 & o
	return o;//返回值就是 o就好啦，所以你知道啦 int main的返回值为什么要写return 0了吧 
}
int main() {
	CStudent s;
	s.nAge = 5;
	cout << s << "hello";
	return 0;
}*/
/*
假定c是COMplx复数类的对象，现在希望些cout<<c,就能以a+bi的形式输出c的值，cin同理，且让c.real=a,c.imag=b
*/
//这里要重载只能重载成全局函数，因为在ostream 和iostream里早就写好了cout与cin
/*#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;
class Complex {
	double real, imag;
public:
	Complex(double r = 0, double i = 0) :real(r), imag(i) {};
	friend ostream & operator<<(ostream &os, const Complex &c);
	friend istream & operator>>(istream & is, Complex &c);
};
ostream &operator <<(ostream &os, const Complex &c) {
	os << c.real << "+" << c.imag << "i";
	return os;
}
istream &operator>>(istream & is, Complex &c) {
	string s;
	is >> s;//将s字符串（即a+bi）作为字符串读入，a+bi中间中间不空格
	int pos = s.find("+", 0);
	string sTmp = s.substr(0, pos);//分离出代表实部的字符串字符串
	c.real = atof(sTmp.c_str());
	//atof库函数能将const char*指针指向的内容转化成float
	sTmp = s.substr(pos + 1, s.length() - pos - 2);
	//分离出代表虚部的
	c.imag = atof(sTmp.c_str());
	return is;
}
int main() {
	Complex c;
	int n;
	cin >> c >> n;
	cout << c << "," << n;
	return 0;

}*/




