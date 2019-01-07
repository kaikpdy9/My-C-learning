/*
函数对象
若一个类重载了运算符"()"
*/
//eg
/*#include<cstdio>
#include<iostream>
using namespace std;
class CMyAverage {
public:
	double operator()(int a1, int a2, int a3 ) {
		return (double)(a1 + a2 + a3) / 3;
	}
};
int main() {
	CMyAverage average;//函数对象
	cout << average(3, 2, 3);//等价于average.operator()(3,2,3
	return 0;

}*/

/*#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<functional>
using namespace std;
int SumSquares(int total,int value)
{
	return total + value * value;
}
template<class T>  //模板函数输出不同类型区间[first,last)中的元素
void PrintInterval(T first, T last) //这个first，last想都不想迭代器
{
	for (; first != last; ++first)
		cout << *first << "";
	cout << endl;
}
template<class T>
class SumPowers {
private:
	int power;
public:
	SumPowers(int p):power(p){}
	const T operator()(const T&total, const T & value)
	{//计算value的power次方，加到total上
		T v = value;
		for (int i = 0; i < power - 1; ++i)
			v = v * value;
		return total + v;


	}
};
int main() {
	const int SIZE = 10;
	int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int>v(a1, a1 + SIZE);
	cout << "1)"; PrintInterval(v.begin(), v.end());
	int result = accumulate(v.begin(), v.end(),0,SumSquares);
	cout << "2(平方和:" << result << endl;
	result = accumulate(v.begin(), v.end(), 0, SumPowers<int>(3));//这个对象实际上就是个函数对象
	cout << "3(立方和:" << result << endl;
	result = accumulate(v.begin(), v.end(), 0, SumPowers<int>(4));
	cout << "4)4次方和" << result;
	return 0;

}*/
//而上面的程序，只用到了局部变量，所以函数对象很好用
//结合上面两个程序想一想就应该知道函数对象到底是什么了
//面向对象尽量少用全局变量
/*
STL中的函数对象类模板
以下模板可以用来生成函数对象
equal_to
greater
less
.......
<functional>
*/
/*
greater函数对象类模板
template<class T>
struct greater:public binay function<T,T,bool>{
   bool operator()
(const T&x,const T& y)const{
    return x>y;
      }
}


list 有两个sort成员函数
void sort()
void sort(Compare op)
自己定义op比较规则即我们看op(x,y)的返回值
若为true则认为x小于y
*/
/*#include<list>
#include<iostream>
using namespace std;
class MyLess {
public:
	bool operator()(const int &c1, const int&c2) {
		return (c1 % 10) < (c2 % 10);
	}
};
template<class T>
void Print(T first, T last) {
	for (; first != last; ++first)cout << *firest << ",";
}
int main() {
	const int SIZE = 5;
	int a[SIZE] = { 5,21,14,2,3 };
	list<int>lst(a, a + SIZE);
	lst.sort(MyLess());
	Print(lst.begin(), lst.end());
	cout << endl;
	lst.sort(greater<int>());//greater<int>()是个函数对象
                            //	greater是个类模板，greater<int>是一个类
	Print(lst.begin(), lst.end());
	cout << endl;
	return 0;

}*/
/*
STL中使用自定义的大小关系
关联容器和STL中许多算法，都是可以用函数或函数对象自定义比较器的
在自定义了比较器op的情况下，以下三种说法等价
x小于y
op(x,y)返回值为true
y大于x
*/

/*
例题写出MyMax模板
*/
/*#include<iostream>
#include<iterator>
using namespace std;
class MyLess {
public:
	bool operator()(int a1,int a2) {
		if ((a1 % 10) < (a2 % 10))
			return true;
		else
			return false;
	}
};
bool MyCompare(int a1, int a2) {
	if ((a1 % 10) < (a2 % 10))
		return false;
	else
		return true;
}
int main() {
	int a[] = { 35,7,13,19,12 };
	cout << *MyMax(a, a + 5, MyLess())
		<< endl;
	cout << *MyMax(a, a + 5, MyCompare)
		<< endl;
	return 0;
}
template <class T,class Pred>
T MyMax(T first, T last, Pred myless)
{
	T temMax = first;
	for (; first != last; ++first)
		if (myless(*tmpMax, *first))  //这里的myless可以是函数指针，也可以是函数对象
			                              //如果这里是myless函数对象的话，调用operator.()成员函数
			                        //然后成员函数里面会有返回值的
			tmpMax = first;
	return temMax;
}
*/










