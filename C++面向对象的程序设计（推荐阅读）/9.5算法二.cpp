/*
3.删除算法
删除一个容器里的某些元素

删除元素后留下空位置，然后去填充，最后没有被填充上的空位置，维持其原来的值不变
删除算法不能用在关联容器
remove          删除区间中等于某个值的元素
remove_if  
remove_copy
remove_copy_if
unique           删除区间中连续相等的元素，只留下一个  （排序，去重）
unique_copy
*/
/*
同理 unique也有重载，有两个版本的函数
一个是== 一个多了个参数，即自己的定义的函数对象用作比较

remove删除是变成空位置，其里面的个数没有减少
*/
/*#include<vector>
#include<iostream>
#include<numeric>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
int main() {
	int a[5] = { 1,2,3,2,5 };
	int b[6] = { 1,2,3,2,5,6 };
	ostream_iterator<int>oit(cout, ",");
	int *p = remove(a, a + 5, 2);
	cout << "1("; copy(a, a + 5, oit); cout << endl;
	cout << "2(" << p - a << endl;
	vector<int>v(b, b + 6);
	remove(v.begin(), v.end(), oit); cout << endl;
	cout << "4("; cout << v.size() << endl;
	return 0;
}*/
/*
4.变序算法

便须算法改变容器中元素的顺序
但是不改变元素的值
变序算法不适用于关联容器
算法复杂度是O（n）

reverse                     颠倒区间
next_permutation        将区间改为下一个排列(可以自定义比较器)
prev_permutation        将区间改为上一个排列（可自定义比较器）
random_shuffle          随机打乱区间的元素的顺序
stable_patition         把区间满足某个条件的元素移到前面
                        不满足的元素移到后面，保持他们的先后顺序不变


*/
/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	string str = "231";
	char szStr[] = "324";
	while (next_permutation(str.begin(), str.end())) {
		cout << str << endl;
	}
	cout << "****" << endl;
	while (next_permutation(szStr, szStr + 3)) {
		cout << szStr << endl;
	}
	sort(str.begin(), str.end());
	cout << "****" << endl;
	while (next_permutation(str.begin(), str.end()))
	{
		cout << str << endl;
	}
	return 0;

}*/
/*#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
#include<string>
using namespace std;
int main() {
	int a[] = { 8,7,10 };
	list<int>is(a, a + 3);
	while (next_permutation(is.begin(), is.end())) {
		list<int>::iterator i;
		for (i = is.begin(); i != is.end(); ++i)
			cout << *i << " ";
		cout << endl;
	}
	return 0;

}*/

/*
5.排序算法

变序算法变出来的序列是乱的
sort                          
stable_sort

同理sort快速排序
template<class Ranlt>
void  sort(Ranlt first,Ranlt last);
升序排序
判断x是否应比y靠前，就看x<y是否为true

template<class Ranlt,class Pred>
void sort(Ranlt first,Ranlt last,Pred pr) !!!这个pr是函数对象，或者函数指针

sort实际上是快速排序

stable_sort是归并排序


*/

/*
6.有序区间算法
要求所操作的区间是从小到大排好序的
需要随机访问迭代器支持
有序区间算法不能用关联容器和list
binary_search             判断区间是否含有某个元素
lower_bound              找最后一个不小于某个值的元素的位置
upper_bound              找第一个大于某个值元素的位置
equal_bound                同时
merge                     合并两个有序区间到第三个区间里去
set_union                 区间合并拷贝
set_intersection           求交并拷贝
set_different               求差
inplace_merge                将两个有序区间原地合并


*/

/*#include<vector>
#include<bitset>
#include<iostream>
#include<numeric>
#include<list>
#include<algorithm>
using namespace std;
bool Greater10(int n) {
	return n > 10;

}
int main()
{
	const int SIZE = 10;
	int a1[] = { 2,8,1,50,3,100,8,9,10,2 };
	vector<int>v(a1, a1 + SIZE);
	ostream_iterator<int>output(cout, "");
	vector<int>::iterator location;
	location = find(v.begin(), v.end(), 10);
	if (location != v.end()) {
		cout << endl << "1(" << location - v.begin();
	}
	location = find_if(v.begin(), v.end(), Greater10);
	if (location != v.end())
		cout << endl << "2)" << location - v.begin();
	sort(v.begin(), v.end());
	if (binary_search(v.begin(), v.end(), 9)) {
		cout << endl << "3)" << "9 found";
	}
}*/
/*
bitset

template<size_t N>
class bitset
{
...
}
实际使用的时候,N是个整形常数
如bitset<40>bst;
bst是一个由40位组成的对象
用bitset函数可以方便地访问任何一位

bitset的成员函数// 自己baidu
*/














