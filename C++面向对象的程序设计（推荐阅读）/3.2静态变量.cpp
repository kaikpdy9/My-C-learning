/*
静态成员：在说明前面加了static关键字的成员
*/
/*#include<iostream>
#include<cstdio>
using namespace std;
class CRectangle {
private:
	int w, h;
	static int nTotalArea;  //静态成员变量
	static int nTotalNumber;
public:
	CRectangle(int w_, int h_);
	~CRectangle();
	static void PrintTotal(); //静态成员函数
};*/
/*
普通成员变量每个对象各自的一份，而静态成员变量一共就一份，
为所有对象共享

size of运算符不会计算静态成员变量

普通成员函数必须作用于某个对象，而静态成员函数并不具体作用某个
对象

因此静态成员不需要通过对象就能访问

如何访问静态成员
1.类名：：成员名
CRectangle::PrinTotal();
2.对象名.成员名
CRectangle r;r.PrintTotal();
静态不是具体作用某个对象上的
3.指针->成员名
CRectangle*p=&r; p->PrintTotal;
4.引用.成员名
CRectangle & ref=r; int n=ref.nTotalNumber

静态成员变量本质上是全局变量，哪怕一个对象都不存在，类的静态成员变量也存在

静态成员函数，本质上是去全局函数

设置静态成员这种机制的目的是将和某些紧密相关的全集变量
和函数写到类里面，看上去像一个整体，易于维护和理解

考虑一个需要随时知道举行总数和总面积的图形处理程序
可以通过全局变量来记录总数和总面积
用静态成员将这两个比变量封装进类中，就更容易理解和维护

*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CRectangle {
private:
	int w, h;
	static int nTotalArea;
	static int nTotalNumber;
public:
	CRectangle(int w_, int h_);
	~CRectangle();
	static void PrintTotal();
};
CRectangle::CRectangle(int w_, int h_) {
	w = w_;
	h = h_;
	nTotalNumber++;
	nTotalArea += w * h;
}
CRectangle::~CRectangle() {
	nTotalArea -= w * h;
	nTotalNumber--;

}*/
/*CRectangle::CRectangle(CRectangle&r) {
	w = r.w;
	h = r.h;  写一个复制构造函数避免出现，没有增加，却构xi后数目减少的
	nTotalNumber++;                情况
	nTotalArea += w * h;
}*/
/*void CRectangle::PrintTotal() {
	cout << nTotalNumber << "," << nTotalArea << endl;
}
int CRectangle::nTotalNumber = 0;
int CRectangle::nTotalArea = 0;
//必须定义类的文件中对静态成员变量进行一次说明或初始化
//否则编译能够通过，连接不能通过
int main() {
	CRectangle r1(3, 3), r2(2, 2);
	//cout << CRectangle::nTotalNumber;不可访问哟
	CRectangle::PrintTotal();
	r1.PrintTotal();
	return 0;

}*/
//在静态成员函数中，不能访问非静态成员变量，也不能调用非静态成员函数。


