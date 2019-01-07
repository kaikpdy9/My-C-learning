/*
派生类可以定义一个和基类成员同名的成员，这叫覆盖。在派生类中访问这类成员时，缺省的情况是访问派生类中
定义的成员。在派生类中定义的成员。要在派生类中访问由基类定义的同名成员时，要使用作用域符号::
*/

/*#include<cstdio>
#include<iostream>
using namespace std;
class base {
	int j;
public:
	int i;
	void func();
};
class derived :public base {
	int i;
	void access();
	void func();
};
void derived::access() {
	j = 5;//error
	i = 5; //引用的是派生类
	base::i = 5; //引用的是基类
	func();   //派生类
	base::func();  //基类的
}
*/
//一般来说基类和派生类不定义同名成员变量

/*
另一种存取权限说明符：protected
基类的protected成员：可以被以下函数访问
---基类的成员函数
---基类的友元函数
---派生类的成员函数可以访问当前对象的基类的保护成员
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Father {
private:
	int nPrivate;
public:
	int nPublic;
protected:
	int nPropected;

};
class Son :public Father {
	void AccessfATher() {
		nPublic = 1;
		//nPrivate = 1;
		nPropected = 1;//ok.访问是从基类继承的protected成员
		Son f;
		f.nPropected = 1;//wrong ,f不是当前对象
	}
};
int main() {
	Father f;
	Son s;
	f.nPublic = 1;
	s.nPublic = 1;
	f.
}*/

