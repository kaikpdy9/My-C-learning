/*
auto 
用于定义变量，编译器可以自动判断变量的类型
auto i=100；
auto p=new A（）；   
*/
/*#include<iostream>
using namespace std;
class A {

};
A operator +(int n, const A& a)
{
	return a;
}
template<class T1,class T2>
auto add(T1 x, T2 y) {
	return x + y;

}
int main() {
	auto d = add(100, 1.5);
	auto k = add(100, A());
	cout << d;
	return 0;

}*/

/*
decltype关键字
求表达式的类型
int i;
double t;
struct A{double x;};
const A* a=new A()

decltype(a)  x1;   A*
decltype(i)  x2;  int
decltype(a->x) x3; double 
*/

/*
智能指针 shared_ptr
*/
/*#include<memory>
#include<iostream>
using namespace std;
struct A {
	int n;
	A(int v=0):n(v){}
	~A() { cout << n << "destructor" << endl; }
};
int main()
{
	shared_ptr<A>sp1(new A(2)); //SP1托管 A（2）
	shared_ptr<A>sp2(sp1);//sp2也托管A（2）
	cout << "1(" << sp1->n << "," << sp2->n << endl;
	shared_ptr<A>sp3;
	A*p = sp1.get();
	cout << "2" << p->n << endl;
	sp3 = sp1;//使得sp3也托管A（2）
	cout << "3(" << (*sp3).n << endl;
	sp1.reset(); //sp1放弃托管
	if (!sp1)
		cout << "4(sp1 is null" << endl;
	A*q = new A(3);
	sp1.reset(q);//sp1托管q
	cout << "5(" << sp1->n << endl;
	shared_ptr<A>sp4(sp1);//sp4托管A（3）
	shared_ptr<A>sp5;
	//sp5.reset(q)不妥，会导致程序出错 //会让A被析构两次
	sp1.reset(); //sp1 放弃托管A（3）
	cout << "before end main" << endl;
	sp4.reset();  //sp4放弃托管A（3）  //这个时候没人托管A（3），会被自动销毁
	cout << "end main" << endl;        
	return 0; //程序结束， 会delete掉A（2）



}*/


/*
空指针nullptr
*/

/*
基于范围的for循环
*/

//引用用来修改值的
/*#include<iostream>
#include<vector>
using namespace std;
struct A { int n; A(int i):n(i){} };
int main() {
	int ary[] = { 1,2,3,4,5 };
	for (int & e : ary)
		e *= 10;
	for (int e : ary)
		cout << e << ",";
	cout << endl;
	vector<A>st(ary, ary + 5);
	for (auto & it : st)
		it.n *= 10;
	for (A it : st)
		cout << it.n << ",";
	return 0;
}*/

/*
右值引用和move语义
右值：一般来说，不能取地址的表达式，就是右值
能取地址的，就是左值
*/
//class A{};
//A &r = A();//error A()是无名变量，是右值
//左值引用只能引用左值like this
//A a;
//A &r = a;
//A &&r = a;//error 无法将左值绑定到右值
//A &&r = A(); 这个就可以

/*
主要目的是提高程序运行的效率，减少需要进行深拷贝的对象进行深拷贝的次数
*/
/*#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#pragma warning(disable :4996)
using namespace std;
class String
{
public:
	char *str;
	String() :str(new char[1]) { str[0] = 0; }
	String(const char *s) {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
	String(const String &s) {
		cout << "copy constructor called" << endl;//这个是深拷贝
		str = new char[strlen(s.str) + 1];
		strcpy(str, s.str);
	}
	String & operator =(const String &s) {
		cout << "copy operator=called" << endl;
		if (str != s.str) {
			delete[]str;
			str = new char[strlen(s.str) + 1];
			strcpy(str, s.str);
		}
		return *this;
	}
	//move constructor
	String(String &&s) :str(s.str) {
		cout << "move constructor called" << endl;
		s.str = new char[1];
		s.str[0] = 0;
	}
	//move assignment
	String &operator=(String &&s) {
		cout << "move operator=called" << endl;
		if (str != s.str) {
			delete[]str;
			str = s.str;
			s.str = new char[1];
			s, str[0] = 0;
		}
		return *this;
	}
	~String() { delete[]str; }
};
template<class T>
void MoveSwap(T &a, T&b) {
	T tmp(move(a));//std::move(a)为右值，治理会调用move constructor
	a = move(b);//move(b)为右值，因此会调用move assignment
	b = move(tmp);//move(tmp)为右值，因此会调用move assignment
}
//用这个的时候要不在乎ab的值被修改
int main()
{
	String s;
	s = String("ok"); //String("ok")是右值，调用move oprator=
	cout << "********" << endl;
	String &&r = String("this");
	cout << r.str << endl;
	String s1 = "hello", s2 = "word";
	MoveSwap(s1, s2);
	cout << s2.str << endl;
	return 0;

}*/











