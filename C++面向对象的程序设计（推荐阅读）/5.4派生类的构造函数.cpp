/*#include<cstdio>
#include<iostream>
using namespace std;
class Bug {
private:
	int nLegs;
	int nColor;
public:
	int nType;
	Bug(int leg, int color);
	void PrintBug() {};
};
class FlyBug :public Bug {
	int nWings;
public:
	FlyBug(int legs, int color, int wings);
};
Bug::Bug(int legs, int color) {
	nLegs = legs;
	nColor = color;
}
//错误的FlyBug构造函数*/
/*FlyBug::FlyBug(int legs, int color, int wings) {
	nLegs = legs;  //不能在构造函数里访问基类的私有变量
	nColor = color;//同上
	nType = 1;  //ok
	nWings = wings;
}*/
//用初始化列表就可以访问了
/*FlyBug::FlyBug(int legs, int color, int wings) :Bug(legs, color) {
	nWings = wings;
}
int main() {
	FlyBug fb(2, 3, 4);
	fb.PrintBug();
	fb.nType = 1;
//	fb.nLegs = 2;
	return 0;
}*/
/*
在创建派生类的对象是时，需要调用基类的构造函数：初始化派生类对象中从基类继承的成员。在执行一个派生类的构造函数之前，总是先执行基类的
构造函数

调用基类构造函数的两种方式
--显示方式：在派生类的构造函数中，为基类的构造函数提供参数
deriver：：derived（arg_derived-list）:base(arg_base-list)
---隐式方式 ：在派生类的构造函数中，省略基类构造函数时，派生类的构造函数则自动调用基类的默认构造函数

先构造的后析构
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Base {
public:
	int n;
	Base(int i):n(i)
	{
		cout << "base" << n << "基类的构造函数生成啦" << endl;
	}
	~Base() {
		cout << "Base" << n << "基类的析构函数消亡了" << endl;
	}
};
class Derived:public Base {
public:
	Derived(int i):Base(i)
	{
		cout << "派生类的构造函数诞生啦" << endl;
	}
	~Derived() {
		cout << "派生类的析构函数消亡啦" << endl;
	}
};
int main() {
	Derived obj(3); return 0;

}*/


/*
包含成员对象的派生类的构造函数的写法
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Bug {
private:
	int nLegs;
	int nColor;
public:
	int nType;
	Bug(int legs, int color);
		void PrintBug() {};
};
class Skill {
public:
	Skill(int n){}
};
class FlyBug :public Bug {
	int nWings;
	Skill sk1, sk2;
public:
	FlyBug(int legs, int color, int wings);
};
FlyBug::FlyBug(int legs,int color,int wings):
	Bug(legs,color),sk1(5),sk2(color),nWings(wings){}
	*/
//封闭派生类对象的构造函数执行顺序
/*
在创建派生类的而对象时:
1.先执行基类的构造函数，用以 初始化派生类对象从基类继承的成员;
2.在执行成员对象类的构造函数，用以初始化派生类对象中成员对象
3.最后才执行派生对象自己构造函数
*/

/*
析构函数刚好相反
3.
2.
1.
*/











