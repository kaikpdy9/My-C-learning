/*
c++为了减少开发者的汗水
设置了 
继承 和 泛型程序设计（模板）
*/

/*函数模板*/
/*
比如我们设置模板
swap(int x,int y)
{
   int tmp=a;
   a=b;
   b=tmp;
}
swap(double a,double b)
{
   double tmp=a;
   a=b;
   b=tmp;
}
每次写的时候，我们都要去写个不同类型的函数，可不可以写一个模板
只来调用一次
*/
/*
函数模板的格式
template<class 类型参数1，class 类型参数2，。。。>
返回值类型 模板名（形参表）
{
    函数体
};
*/
/*#include<iostream>
#include<cstdio>
using namespace std;
template <class T>
void Swap(T &x, T &y) {
	T tmp = x;
	x = y;
	y = tmp;
}
int main() {
	int a = 3;
	int b = 9.8;
	Swap(a, b);
	double x = 3.06;
	double y = 9.05;
	
	Swap(x, y);
	cout << a << b << x << y << endl;
	return 0;

}*/
/*
求数组最大元素的MaxElement函数模板
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
template <class T>
T MaxElement(T a[], int size) {
	T temMax = a[0];
	for (int i = 1; i < size; ++i)
		if (tmpMax < a[i])
			tmpMax = a[i];
	return tmpMax;
}*/

/*
不通过参数实例化函数模板
*/
/*#include<iostream>
using namespace std;
template<class T>//这里指的是类型参数表
T Inc(T n) {      //这里是形参表
	return n + 2;
}
int main() {
	cout << Inc<double>(3) / 2;   //这里的实参数经过自动类型转换后能够匹配的函数
	return 0;

}*/

//函数模板可以重载，只要他们的形参表或类型参数表不同就即可
/*
1.先找普通函数
2.找模板函数
3.找实参经过转换的函数
*/
//下面的函数实例，描述上面的内容
#include<cstdio>
#include<iostream>
using namespace std;
/*template<class T>
T Max(T a, T b) {
	cout << "模板函数1被调用" << endl;
	return 0;
}*/
/*template <class T,class T2>
T Max(T a, T2 b) {
	cout << "模板函数2被调用" << endl;
	return 0;
}
double Max(double a, double b) {
	cout << "MyMax" << endl;
	return 0;
}
int main() {
	int i = 4, j = 5;
	Max(1.2, 3.4);
	Max(i, j);
	Max(1.2, 3);
	return 0;

}*/
/*#include<iostream>
using namespace std;
template<class T,class Pred>       //显然这个s，e，x就是个地址指针，这个op是个函数指针
void Map(T s, T e, T x, Pred op) {  //这个模板是吧一个区间长度的东西，放到另一个地方去的
	for (; s != e; ++s, ++x) {
		*x = op(*s);
	}                                
}



int Cube(int x) { return x * x*x; }
double Square(double x) { return x * x; }

int a[5] = { 1,2,3,4,5 }, b[5];
double d[5] = { 1.1,2.1,3.1,4.1,5.1 }, c[5];*/
//实例化出以下函数:
/*void Map(int *s, int *e, int *x, double(*op)(double)) {
	for (; s != e; ++s; ++x) {
		*= op(*s);
	}
}*/
/*int main() {
	Map(a, a + 5, b, Square);
	for (int i = 0; i < 5; ++i)
		cout << b[i] << ",";
	cout << endl;
	Map(a, a + 5, b, Square);
	for (int i = 0; i < 5; ++i)
		cout << b[i] << ",";
	cout << endl;
	Map(d, d + 5, c, Square);
	for (int i = 0; i < 5; ++i)
		cout << c[i] << ",";
	cout << endl;
	return 0;

}*/









