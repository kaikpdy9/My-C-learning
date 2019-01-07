/*
为了多快好省地定义出一批相似的类，可以定义类模板
然后有类模板生成不同的类哦 

类模板的定义
templete<class 类型参数，class类型参数2，。。。>//类型参数表
class 类模板名
{
  
  成员函数和成员变量
  成员函数的写法
  返回值类型  类模板名<类型参数名列表>::成员函数名（参数表）
  {  ....
  }
  };

  用类模板定义对象
  类模板名<真实类型参数表> 对象名(构造函数实参表)

*/
//类模板示例:pair类模板
/*#include<cstdio>
#include<iostream>
using namespace std;
template<class T1,class T2>
class Pair
{
public:
	T1 key;       //关键字
	T2 value;        //值
	Pair(T1 k,T2 v) :key(k), value(v) {};
	bool operator <(const Pair<T1, T2>&p)const;
};
template<class T1,class T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2>&p)const
{
	return key < p.key;
}
int main() {
	Pair<string, int>student("tom", 19);
	//实例孵化出一个类 Pair<string ,int>这里的类型参数可以随便改
	cout << student.key << "" << student.value;
	return 0;
}*/
/*
编译器由类模板生成类的过程叫类模板的实例化。由类模板实例化得到
的类叫做模板类

同一个类模板的两个模板类是不兼容的
pair<string ,int>*p
pair<string ,double>a;
p=&a;
*/

/*
函数模板作为类模板成员
*/
/*#include<iostream>
using namespace std;
template <class T>
class A
{
public:
	template<class T2>
	void Func(T2 t) { cout << t; }//成员函数模板
};
int main() {
	A<int>a;
	a.Func('k');
	a.Func("hello");
	return 0;
}*/
/*
类模板与非类型参数
类模板的<类型参数表>中可以出现非类型参数
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
template <class T,int size> //这里的int size就是指的是非类型参数
class cArray {
	T array[size];
public:
	void Print() {
		for (int i = 0; i < size; ++i)
			cout << array[i] << endl;
	}
};
cArray<double, 40>a2;
cArray<int, 50>a3;*/
//a2和a3属于不同的类







