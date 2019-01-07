/*
定义转换构造函数的目的是实现类型的自动转换
只有一个参数，而且不是复制构造函数的构造函数，一般就可以当作是转换构造函数
*/
//类型转化构造函数的实例
/*#include<iostream>
#include<cstdio>
using namespace std;
class  Complex {
public:
	double real, imag;
	Complex(int i) {
		cout << "InConstruct called" << endl;
		real = i; imag = 0;
	}
	Complex(double r, double i) { real = r; imag = i; }
};
int main() {
	Complex c1(7, 8);
	Complex c2 = 12;
	c1 = 9;  //9被转换成零时的compelex对象
	cout << c1.real << "," << c1.imag << endl;
	return 0;

}*/

//只要有对象 生成，就一定要用构造函数初始化对象，略略略

/*
析构函数

名字与类名相同，在前面加个~，没有返回值和 参数，一个类
最多有一个析构函数

析构函数在对象消亡时，自动被调用。可以定义析构函数来在对象消亡前
做善后工作，比如释放分配空间。

如果定义类的时候没写析构函数，则编译器生成缺省析构函数。缺省析构函数什么
也不做

*/
/*#include<iostream>
#include<cstdio>
using namespace std;
class String {
private:
	char *p;
public:
	String() {
		p = new char[10];
	}
	~String();
};
String::~String() {
	delete[]p;
}*/
//析构函数和数组
//对象数组生命周期结束时，对象数组的每一个元素的析构函数都会被调用
/*#include<cstdio>
#include<iostream>
using namespace std;
class Ctest {
public:
	~Ctest() {
		cout << "查看函数被调用了多少次";
	}
};
int main() {
	Ctest araay[2];
	cout << "end main" << endl;
	Ctest *pTest;
	pTest = new Ctest;
	delete pTest;
	pTest = new Ctest[3];
	delete[]pTest;
	return 0;


}*/
//若new一个对象数组，那么用delete释放时应该写[]。否则只delete一个对象（即只调用一次
//析构数组）
/*#include<iostream>
#include<cstdio>
using namespace std;
class Cmyclass {
public:
	~Cmyclass() {
		cout << "dewadad" << endl;
	}
 };
Cmyclass obj;
Cmyclass fun(Cmyclass sobj) { //参数对象消亡也会导致析构函数被调用
	return sobj;     //析构函数被调用
}                    //函数调用返回时生成临时对象返回
int main() {
	obj = fun(obj);       //函数调用的返回值（临时对象）被
	return 0;            //调用过后，该临时对象的析构函数被调用
}*/