/*
class base{};
class derived:public base{};  //这里的Public指的是公有派生
base b;
derived d;
1.派生类的对象可以赋值给基类对象
  b=d;      原因是派生对象就是基类对象
2.派生对象可以初始化基类的饮用
  base &br=d;
3.派生类对象的地址可以赋值给基类对象的指针
  base *pb=&d;
  
  如果派生方式是private或protected，则上述三条就不可行
*/


/*
直接基类和间接基类
A--B B--C C--D A--B直接 A--D间接
*/
/*#include<iostream>
using namespace std;
class Base {
public:
	int n;
	Base(int i) :n(i) {
		cout << "BASE" << n << "base的构造函数生成啦" << endl;
	}
	~Base() {
		cout << "Base" << n << "base的析构函数消亡啦" << endl;
	}
};
class Derved :public Base {
public:
	Derved(int i) :Base(i) {
		cout << "我是Base的直接派生的构造函数诞生啦" << endl;

	}
	~Derved() {
		cout << "我是Base的直接派生的析构函数消亡了" << endl;
	}
};
class MoreDerved :public Derved {
public:
	MoreDerved():Derved(18){
		cout << "base的间接派生类的析构函数诞生啦" << endl;
	}            
	~MoreDerved() {
		cout << "base的间接派生类的析构函数消亡啦" << endl;
	}
};
int main() {
	MoreDerved obj;
	return 0;

}*/
