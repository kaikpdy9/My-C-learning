 /*
 用try catch对异常的处理
 */
/*#include<iostream>
using namespace std;
int main()
{
	double m, n;
	cin >> m >> n;
	try {
		cout << "before dividing" << endl;
		if (n == 0)
			throw - 1;//抛出类型异常    //出现异常程序往catch块里面走
		else
			cout << m / n << endl;
		cout << "after dividing" << endl;
	}
	catch (double d) {
		cout << "catch(double)" << d << endl;
	}
	catch (int e) {
		cout << "catch(int)" << e << endl;
	}
	cout << "fished" << endl;
	return 0;

}*/
/*#include<iostream>
#include<string>
using namespace std;
class CException
{
public:
	string msg;  //msg用来存放异常的信息的
	CException(string s):msg(s){}
};
double Devide(double x, double y)
{
	if (y == 0)
		throw CException("devided by zero");
	cout << "in Devide" << endl;
	return x / y;
}
int CountTax(int salary)
{
	try {
		if (salary < 0)
			throw - 1;
		cout << "conting tax" << endl;
	}
	catch (int) {
		cout << "salary<0" << endl;
	}
	cout << "tax counted" << endl;
	return salary * 0.15;
}
int main()
{
	double f = 1.2;
	try {
		CountTax(-1);
		f = Devide(3, 0);
		cout << "end of try block" << endl;
	}
	catch (CException e) {
		cout << e.msg << endl;
	}
	cout << "f=" << f << endl;
	cout << "finished" << endl;
	return 0;

}*/
/*
c++标准异常类
这些类都是从exception类派生而来的。
常用的几个异常类
*/
/*
bad_cast
在用dynamic_cast进行从多态基类对象（或引用）
到派生类的引用的强制类型转换是，如果转换是
不安全的，则会抛出此异常
*/
/*#include<iostream>
#include<stdexcept>
#include<typeinfo>
using namespace std;
class Base
{
	virtual void func(){}
};
class Derived :public Base
{
public:
	void Print(){}
};
void PrintObj(Base &b)
{
	try {
		Derived &rd = dynamic_cast<Derived&>(b);
		//此类型不安全，会抛出bad_cast异常
		rd.Print();
	}
	catch (bad_cast&e) {
		cerr << e.what() << endl;
	}
}
int main()
{
	Base b;
	PrintObj(b);
	return 0;

}*/
/*
bad_alloc
在用new运算符进行动态内存分配时，如果没有足够的neicun
，则会发生此异常
*/
/*#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	try {
		char*p = new char[0x7fffffff];
	}
	catch (bad_alloc&e) {
		cerr << e.what() << endl;
	}
	return 0;

}*/
/*
out_of_range
用vector或string的at成员函数根据下标访问元素时
如果下标越界，就会抛出此类异常

*/
/*#include<iostream>
#include<stdexcept>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<int>v(10);
	try {
		v.at(100) = 100;//下标越界
	}
	catch (out_of_range&e) {
		cerr << e.what() << endl; 
	}
	string s = "hello";
	try {
		char c = s.at(100);//抛出out_of_range异常
	}
	catch (out_of_range&e) {
		cerr << e.what() << endl;
	}
	return 0;

}*/


