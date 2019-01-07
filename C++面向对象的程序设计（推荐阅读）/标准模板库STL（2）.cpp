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
	v.push_back(3); v.push_back(4);
	v.push_back(5); v.push_back(6);
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
 正确的遍历list的方法
 list<int> v;
 list<int>::const_lierator ii;
 for(ii=v.begin();ii!=v.end();++ii)
          cout<<*ii

错误的做法
   for(ii =v.begin();ii<<v.end();ii++)
         cout<<*ii;
	//双向迭代器不支持<,list没有[]成员函数
	for(int i=0;i<v.size();i++)
		  cout<<v[i];
 */


/*
算法简介
算法就是一个个函数模板，大多数在<algorithm>中定义
STL中提供能在各种容器中通用的算法，比如查找，排序等
算法通过迭代器操作容器中的元素。许多算法可以对容器中的一个局部区间进行
操作，因此需要两个参数，一个是其实的迭代器，一个是终止元素的后面一个元素的迭代器
比如排序和查找

有的算法返回一个迭代器，比如find()算法，在容器中查找一个元素，并返回一个指向该元素的
迭代器

算法可以处理容器，也可以处理普通数组
*/


/*
算法示例：find（）
这里面的算法都是用模板函数来写的
不同的编译器里面的算法模板是不一样
template<class Init,class T>
Init find(Init first,Init last ,const T& val)

first和last这两个参数都是容器的迭代器，他们给出了容器中查找区间的
起点和终点[first,last )区间的起点是位于查找范围之中的，而终点不是
find[first,last)查找等于val的元素

用==运算符判断相等

函数返回值是一个迭代器，如果找到，该迭代器指向被找到的元素，如果找不到
，则该迭代器等于last
*/
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	int  array[10] = { 10,20,30,40 };
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int>::iterator p;
	p = find(v.begin(), v.end(), 3);
	if (p != v.end())
		cout << *p << endl;
	return 0;

}








