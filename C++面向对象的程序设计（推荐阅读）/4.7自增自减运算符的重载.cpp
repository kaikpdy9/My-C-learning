/*
为了区分自增自减运算符的前后置之分

前置运算符作为一元运算符重载
重载为成员函数：
T & operator++();
T & operator--();
重载为全局函数:
T1 & operator++(T2);
T1 & operator--(T2);

后置运算符作为二元运算符重载，多写一个没用的参数:
重载为成员函数：
T operator++(int );
T operator--(int );
重载为全局函数：
T operator++(T2,int );
T operator--(T2,int );
在vs中，obj++也调用前置重载
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CDemo {
private:
	int n;
public:
	CDemo(int i = 0):n(i){}
	CDemo & operator++();
	CDemo operator++(int);
	operator int() { return n; }   //强制类型转换符，将对象转换为n
	friend CDemo & operator--(CDemo &);
	friend CDemo operator--(CDemo &, int);
};
CDemo & CDemo::operator++() {       //这样写就可以访问私有变量
	++n;                           
	return *this;
}//++s即为 s.operator++();
CDemo CDemo::operator++(int k) {
	CDemo tmp(*this);//记录修改前的对象
	n++;
	return tmp;//返回修改前的对象
}//s++即为s.operator++(0);
CDemo & operator--(CDemo &d) {
	d.n--;
	return d;
}
CDemo operator--(CDemo &d, int) {
	CDemo tmp(d);
	d.n--;
	return tmp;
}

int main() {
	CDemo d(5);
	cout << (d++) << ",";
	cout << d << ",";
	cout << (++d) << ",";
	cout << d << endl;
	cout << (d--) << ",";
	cout << d << ",";
	cout << (--d) << ",";
	cout << d << endl;
	return 0;

}*/
//在c++里面++a的返回值就是a的引用
//再循变量里++i比i++是要快的
/*
1.c++不允许定义新的运算符：
2.重载后运算符的含义应该符合日常习惯
3.运算符重载不改变运算符的优先级
4.以下运算符不能够被重载"."".*""::","?:","sizeof"
5.重载运算符(),[],->或赋值运算符=时，运算符重载函数必须声明为类的
成员函数（这里注意下成员函数的表示形式，看一去看看=的重载）

*/


