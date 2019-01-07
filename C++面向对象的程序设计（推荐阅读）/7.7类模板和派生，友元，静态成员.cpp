/*
类模板与继承
1.类模板从类模板派生
2.类模板从模板类派生
3.类模板从普通类派生
4.普通类从模板类派生
*/
//类模板从类模板派生
/*#include<cstdio>
#include<iostream>
using namespace std;
template <class T1,class T2>
class A {
	T1 v1; T2 v2;
};
template<class T1,class T2>
class B :public A<T2, T1> {
	T1 v3; T2 v4;
};
template <class T>
class C :public B<T, T> {
	T v5;
};
int main() {
	B<int, double>obj1;
	C<int>obj2;
	return 0;
}*/
//类模板从模板类派生
/*#include<iostream>
using namespace std;
template<class T1,class T2>
class A {
	T1 v1; T2 v2;
};
template<class T>
class B :public A<int, double> {
	T v;
};
int main() {
	B<char>obj1;     //自动生成两个模板类A<int,double>和B<char>
	return 0;
}*/
//类模板从普通类派生
/*#include<cstdio>
#include<iostream>
using namespace std;
class A {
	int v1;
};
template<class T>
class B :public A {      //所有从B实例化得到的类，都以A为基类
	T v;
};
int main() {
	B<char> obj1;
	return 0;
}*/
//普通类从模板类派生
/*#include<iostream>
using namespace std;
template <class T>
class A {
	T v1;
	int nl;
};
class B :public A<int> {
	double v;
};
int main() {
	B obj1;
	return 0;

}*/

/*
类模板与友元

函数，类，类的成员函数作为类模板的友元
函数模板组为类模板的友元
函数模板作为类的友元
类模板作为类模板的友元
*/
//函数，类，类的成员函数作为类模板的友元
/*#include<cstdio>
#include<iostream>
using namespace std;
void Func1() {};
class A{};
class B {
public:
	void Func(){}
};
template <class T>
class Tmp1
{
	friend void Func1();
	friend class A;
	friend void B::Func();
};*///任何从Tmp1实例来的类，都有以上三个友元
//函数模板作为类模板的友元
/*#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
template <class T1,class T2>
class Pair
{
private:
	T1 key;  //关键字
	T2 value;  //值
public:
	Pair(T1 k, T2 v) :key(k), value(v) {};
	bool operator<(const Pair<T1, T2>&p)const;
	template <class T3,class T4>
	friend ostream &operator<<(ostream &o, const Pair<T3, T4>&p);
};
template<class T1,class T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2>&p)const {
	return key < p.key;
}
template<class T1,class T2>
ostream &operator<<(ostream &o, const Pair<T1, T2>&p)
{
	o << "(" << p.key << "," << p.value << ")";
	return o;
}
int main()
{
	Pair<string, int>student("tpm", 29);
	Pair<int, double>obj(12, 3.14);
	cout << student << "" << obj;
	return 0;

}*/
//任意从 template<class T1,class T2>生成的函数，都是Pair模板类的友元 
//函数模板作为类的友元
/*#include<iostream>
using namespace std;
class A {
	int v;
public:
	A(int n):v(n){}
    template <class T>
	friend void Print(const T & p);
};
template<class T>
void Print(const T & p)
{
	cout << p.v;
}
int main() {
	A a(4);
	Print(a);    //这里的a问好不懂
	return 0;
}*/
//类模板作为类模板的友元
/*#include<iostream>
using namespace std;
template<class T>
class B {
	T v;
public:
	B(T n):v(n){}
	template <class T2>
	friend class A;
};
template <class T>
class A {
public:
	void Func() {
		B<int>o(10);
		cout << o.v << endl;
	}
};
int main() {
	A<double>a;
	a.Func();
	return 0;

}*/
//类模板与stactic成员
//类模板可以定义静态成员，那么从该类模板实例化得到的所有类
//都包含同样的静态成员
/*#include<iostream>
using namespace std;
template<class T>
class A {
private:
	static int count;
public:
	A() { count++; }
	~A() { couny--; }
	A(A &) { cout++; }
	static void PrintConut() { cout << count << endl; }

};
template<>int  A<int>::count = 0;
template<>int  A<double>::count = 0;

int main() {
	A<int> ia;;
	A<double> da;
	ia.PrintConut();
	da.PrintConut();
	return 0;
}*/