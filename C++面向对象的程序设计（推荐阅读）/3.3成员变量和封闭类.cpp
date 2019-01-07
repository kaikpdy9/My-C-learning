/*#include<cstdio>
#include<iostream>
using namespace std;
class CTyre {     //轮胎类
private:
	int radius;  //半径
	int width;   //宽度
public:
	CTyre(int r,int w):radius(r),width(w){}//这个：后面的叫做初始化列表
};                                      //可以为成员变量设置初始值
class CEngine { //引擎类

};
//有成员对象（有一个类的成员它是其他类的对象）的类叫做封闭类
class CCar {
private:      //!!犹豫ccar这个类包含成员对象，所以ccar他就是封闭类
	int price;
	CTyre tyre;
	CEngine engine;
public:
	CCar(int p, int tr, int tw);

};
CCar::CCar(int p, int tr, int w) :price(p), tyre(tr, w) {

};
int main() {
	CCar car(2000, 17, 225);
	return 0;

}*/
//任何对象初始化的时候，都一定会引发构造函数的调用，构造函数有参数的话，如何调用
//编译器必须明白才行
/*
任何生成封闭类对象的语句，都要让编译器明白，对象中的成员对象，是如何
初始化的
具体做法就是通过封闭类的构造函数初始化列表
成员对象初始化列表中的参数可以是任意复杂的表达式，可以包括函数，变量，只要表达式中的函数或变量有定义就行了
*/


/*
封闭类构造函数和析构函数的执行顺序

封闭类对象生成时，先执行所有对象成员的构造函数，然后才执行封闭类的构造函数
对象成员的构造函数调用次序和对象成员在类中的说明次序一致，与他们在成员初始化列表中出现的
次序无关

当封闭类的对象消亡时，先执行封闭类的析构函数，然后再执行成员对象的析构函数，次序和构造函数的
次序相反
*/
/*#include<iostream>
#include<cstdio>
using namespace std;
class CTyre {
public:
	CTyre() { cout << "啦CTyre函数生成啦" << endl; }
	~CTyre() { cout << "CTyre函数被我毁灭了" << endl;}
};
class CEngine {
public:
	CEngine() { cout << "CEgine函数生成拉拉"; }
	CEngine() { cout << "CEgine函数被消灭啦"; }
};
class CCar {
private:
	CEngine engine;
	CTyre tyre;
public:
	CCar() { cout << "CCar函数生成啦" << endl; }
	~CCar() { cout << "CCar函数被消灭啦" << endl; }
};
int main() {
	CCar car;
	return 0;
}*/




