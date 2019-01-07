/*
迭代器

用于指向顺序容器和关联容器中的元素
迭代器用法和指针类似
有const和非const两种
通过迭代器可以读取它指向的元素
通过非const迭代器还能修改其指向的元素
*/
/*
迭代器的定义
定义个容器类的迭代器的方法是
容器类名::iterator 变量名;
或
容器类名::const_iterator 变量名;
访问一个迭代器指向的元素
*迭代器变量名

迭代器可以使用++的操作，以使指向容器中的下一个元素。如果迭代器到达了容器中的
最后一个元素的后面，此时在使用它就会出错
*/
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>v; //一个存放int元素的数组，一开始里面没有元素
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4);
	vector<int>::const_iterator i;//常量迭代器
	for (i = v.begin(); i != v.end(); ++i)
		cout << *i << ",";
	cout << endl;
	vector<int>::reverse_iterator r;//反向迭代器
	for (r = v.rbegin(); r != v.rend(); r++)
		cout << *r << ",";
	cout << endl;
	vector<int >::iterator j;//非常量迭代器
	for (j = v.begin(); j != v.end(); j++)
		*j = 100;
	for (i = v.begin(); i != v.end(); i++)
		cout << *i << ",";
	return 0;

}*/

/*
双向迭代器
++p,p++  使p指向容器中的下一个元素
--p,p--  使p指向容器中上一个元素
*p  //取p指向的元素
p=p1   赋值
p==p1，p！=p1 判断是否相等，不等
随机迭代器
 有双向迭代器所有的操作
 p+=i 将p向后移动i个元素
 p-=i 将p向前移动i个元素
 p+i   值为：指向p后面的第i个元素的迭代器
 p-i   值为：指向p前面的第i个元素的迭代器
 p[i]  值为:p后面的第i个元素的引用
 p<p1,p<=p1,p>p1,p>=p1


 容器                     容器上的迭代器的类别
 vector                       随机访问
 deque                        随机访问
 list                           双向
 set/multiset                   双向
 map/multimap                   双向

stack                       不支持迭代器
queue                       不支持迭代器
priority_queue              不支持迭代器

有的算法 像sort，binary_search需要通过随机访问迭代器来访问容器中的元素
呢么list以及关联其容器就不该支持算法
*/
//遍历vector可以有以下几种做法
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>v(6);
	v.push_back(1); v.push_back(2);
	int i;
	for (i = 0; i < v.size();)
		cout << v[i]; //根据下标随机访问
	vector<int>::const_iterator ii;
	for (ii = v.begin(); ii != v.end(); ii++)
		cout << *ii;
	for (ii = v.begin(); ii != v.end(); ii++)
		cout << *ii;
	for (ii = v.begin(); ii < v.end(); ii++)
		cout << *ii;
	ii = v.begin();
	while (ii < v.end()) {
		cout << *ii;
		ii = ii + 2;
		//间隔一个输入
	}


}*/
/*
list的迭代器是双向迭代器
正确遍历list的方法
list<int >v;
list<int>::const_iterator ii;
for(ii=v.begin();ii!=v.end();++ii)
       cout<<*ii;
错误的做法是 
for(ii=v.begin();ii<v.end();i++)
	   cout<<*ii;
	//双向迭代器不支持<。list没有[]成员函数
	for(int i=0;i<v.size();++i)
	cout<<v[i];
*/
/*
算法就是一个个函数模板，大多数在<algorithm>中定义
STL中提供能在各种容器中通用的算法，比如查找排序等

算法通过迭代器来劳作容器中的元素。许多算法可以对容器中的一个局部区间进行操作，
因此需要两个参数，一个是起始元素的迭代器，一个时候终止元素的迭代器，比如排序和查找

有的算法返回一个迭代器，比如find()算法，在容器中查找一个元素，并返回一个指向该元素的迭代器

算法可以处理容器，也可以处理普通数组
*/

/*
算法实例:find()
算法大多数是通过模板函数来写的适用于不同的容器
template<class Init,class T>
Init find(Inlt first,Inlt last,const T&val);
first和last两个参数都是容器的迭代器，他们给出了容器中查找区间的起点和终点[first,last)
区间的起点是位于查找范围之中的，而终点不是。find在[fiest,last)查找等于val的元素
用==运算符判断相等

函数返回值是一个迭代器，如果找到，则该迭代器指向被找到的元素，如果找不到
则该迭代器等于last
*/
/*#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	int array[10] = { 10,20,30,40 };
	vector<int>v;
	v.push_back(1); v.push_back(2);
	v.push_back(3); v.push_back(4);
	vector<int>::iterator p;
	p = find(v.begin(), v.end(), 3);   //即v.end本来也没有指向最后一个元素，指向的是最后一个元素还要后面的位置
	if (p != v.end())
		cout << *p << endl;
	p = find(v.begin(), v.end(), 9);
	if (p == v.end())
		cout << "not found" << endl;
	p = find(v.begin() + 1, v.end() - 2, 1);//整个容器的查找区是[2,3)
	if (p != v.end())
		cout << *p << endl;
	int *pp = find(array, array + 4, 20);//数组名是迭代器
	cout << *pp << endl;                 //所以*pp返回的是那个数
	return 0;

}*/
/*
STL中"大""小"的概念
关联容器内部的元素是从小到大排序的
有些算法要求其操作的区间是从小到大排序的，成为"有序区间算法"
eg。binary_search
有些算法会对区间进行从小到大排序，"成为排序算法"
eg。sort
还有一些对其他算法会用到"大"“小”的概念
 
 程序源可以自定义从小到大的规则

使用STL时，在缺省的情况下，以下三个说法等价
1.x比y小
2.表示式x<y为真
3.y比x大
*/
/*
STL中相等的概念
 
 有时"x和y"相等等价于x==y为真
 
 比如在为排序区间的算法，如顺序查找find

 有时x和y相等等价于---x小于y和y小于x同时为假----  !!这里的小于程序源也可以自己定义只看返回值
                                |
								|
						    那就认为x与y相等
 例:有关区间算法 binary_search
 关联容器自身的成员函数find
*/
//STL中"相等"概念演示
/*#include<iostream>
#include<algorithm>
using namespace std;
class A
{
	int v;
public:
	A(int n):v(n){}
	bool operator<(const A &a2)const {
		cout << v << "<" << a2.v << "?" << endl;
		return false;
	}
	bool operator==(const A &a2)const {
		cout << v << "==" << a2.v << "?" << endl;
		return v == a2.v;
	}

};

int main() {
	A a[] = { A(1),A(2),A(3),A(4),A(5) };
	cout << binary_search(a, a + 4, A(9));
	return 0;

}*/







