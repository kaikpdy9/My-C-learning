/*#include<iostream>
#include<cstdio>
using namespace std;
class  son {
public:
	virtual ~son() { cout << "bye from son" << endl; }
};
class grandon :public son {
public:
	~grandon{ cont << "bye from grandson" << endl; };
};
int main(){
	son *pson;
	pson = new grandson();
	delete pson;
	return 0;
}*/


/*
纯虚函数和抽象类

没有函数体的虚函数

如果一个类包含纯虚函数就叫做抽象类
抽象类只能作为基类来派生新类使用，不能创建抽象类的对象
抽象类的指针和引用可以指向抽象类派生出来的类的对象
A a；//错 不能创建对象
A *pa//ok 可以定义抽象类的指针和引用
pa =new A；

在抽象类的成员函数内可以调用纯虚函数，但是在构造函数或析构函数内部不能调用
纯虚函数
*/

//在普通的成员函数里面调用虚函数是没有问题的，因为
//调用的时候是多态真正调用的时候一定是派生类的那个虚函数
