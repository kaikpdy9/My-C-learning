/*
标准模板库里面的关联容器
set，mutiset，map，multimap
内部元素有序排列，新元素插入的位置却决于它的值，查找速度快
除了个容器都有的函数外，还支持以下成员函数
find:查找等于某个值的元素（x小于y和y小于x同时不成立即为相等
lower_bound:查找某个下界
upper_bound:查找某个上界
eaual_range:同时查找上界和下界
count:计算等于某个值的元素个数(x小于y和y小于x同时不成立即为相等)
insert:用以插入一个元素或一个区间
*/
/*
pair模板预备知识
*/
/*#include<iostream>
#include<cstdio>
using namespace std;
template<class _T1,class _T2>
struct pair {
	typedef _T1 first_type;
	typedef _T2 second_type;
	_T1 first;
	_T2 second;
	pair():first(),second(){}
	pair(const_T1&_a,const_T2&_b):first(_a),second(_b){}
	template<class_U1,class_p>
	:first(_p.first),second(_p.second){}
};
//map/mutimap容器里放着的都是pair模板类的对象,且按first从小到大
//排序
//第三个构造函数用法实例
pair<int, int>
p(pair<double, double>(5.5, 4.6));
//p.first = 5;//p.second=6;
*/
/*
multiset
template<class Key,class Pred=less<key>>
  class A=alloctor<key>
 class multiset{....};
 Pred的类型的变量决定了multiset中的元素，“一个比另一个小”是怎么定义的
 multiset运行过程中，比较两个元素x，y的大小的做法，就是生成一个Pred类型
 的变量，假定位op，若表达式op（x，y）返回值为true，则x比y小
 Pred的缺省类型是less<Key>

 less模板的定义
 template<class T>
 struct less:public binary_function<T,T,bool>
 {bool operator()(const T&x,const T&y){return x<y}const;}
 //less模板是靠小于号来比较大小的

 如果第二个参数不给类型的话，用的缺省op来比较大小的
*/
/*
multiset的成员函数
iterator find(const T &val);
在容器中查找值为val的元素，返回其迭代器，如果找不到，返回end()
这个比较的规则是小于，小于同时成立的那个判断
iterator insert（const T &val）将val插入到容器并返回迭代器

*/
/*
multiset的用法
*/
/*#include<set>
using namespace std;
class A {};
int main() {
	multiset<A>a;//表明mutiset里的每一个元素都是class A类型的对象
	a.insert(A());
}*/
/*
multiset<A>a;
就等价于
multiset<A,less<A>>a;
擦汗如元素时，multiset会将被插入元素和已有元素进行比较的，由于less模板
是用<进行比较的，所以，这都要求A的对象能够<比较，即要重载<符号了

*/
/*#include<iostream>
#include<set>//使用multiset须要包含头文件
using namespace std;
template<class T>
void Print(T first, T last)
{
	for (; first != last; ++first)
		cout << *first << "";
	cout << endl;
}
class A {
private:
	int n;
public:
	A(int n_) { n = n_; }
	friend bool operator<(const A&a1, const A&a2) { return a1.n < a2.n; }
	friend ostream & operator<<(ostream & o, const A&a2) { o << a2.n; return o; }
	friend class MyLess;

};
struct MyLess {
	bool operator()(const A &a1,const A &a2)
	{
		return (a1.n % 10) < (a2.n % 10);
	}
}; //按个位数来比较大小
typedef multiset<A>MSET1;//MSET1用"<"来比较大小 因为mulitset<A>写起来比较长就换了个样子
typedef multiset<A, MyLess>MSET2;//MSET2用mysless::operator()来比较大小
int main() {
	const int SIZE = 6;
	A a[SIZE] = { 4,22,19,8,33,40 };
	MSET1 m1;
	m1.insert(a, a + SIZE);
	m1.insert(22);
	cout << "1)" << m1.count(22) << endl;
	cout << "2)" ; Print(m1.begin(), m1.end());
	MSET1::iterator pp = m1.find(19);
	if (pp != m1.end())
		cout << "found" << endl;
	cout << "3"; cout << *m1.lower_bound(22) << ","
		<< *m1.upper_bound(22) << endl;
	pp = m1.erase(m1.lower_bound(22), m1.upper_bound(22));
	//pp指向的是被删除的下一个元素
	MSET2 m2;
	m2.insert(a, a + SIZE);
	cout << "6("; Print(m2.begin(), m2.end());
	return 0;

}//iterator lower_bound(const T & val)；
//查找一个最大的位置it，使得[begin(),it)中所有的元素都比val小
//即找到的迭代器就指向22
*/
/*
set和multiset的区别在于set里面是不能有重复的元素
*/
/*#include<iostream>
#include<set>
using namespace std;
int main() {
	typedef set<int>::iterator IT;
	int a[5] = { 3,4,6,1,2 };
	set<int>st(a, a + 5);
	pair<IT, bool>result;
	result = st.insert(5);
	if (result.second)//插入成功则输出插入元素
		cout << *result.first << "insertes" << endl;
	if (st.insert(5).second)
		cout << *result.first << endl;
	else
		cout << *result.first << "already exists" << endl;
	pair<IT, IT>bounds = st.equal_range(4);
	cout << *bounds.first << "," << *bounds.second;
	return 0;
 
}*/








