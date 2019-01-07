/*#include<iostream>
#include<vector>
using namespace std;
template<class T>
void PrintVector(T s, T e)
{
	for (; s != e; ++s)
		cout << *s << "";
	cout << endl;
}
int main() {
	int a[5] = { 1,2,3,4,5 };
	vector<int>v(a, a + 5);//将数组a放进v的容器
	cout << "1(" << v.end() - v.begin() << endl;
	//这里是为了演示两个随机迭代器可以相互加减
	cout << "2("; PrintVector(v.begin(), v.end());
	v.insert(v.begin() + 2, 13);//第一个元素是一个迭代器指明你要插入的数据在哪个位置
	cout << "3("; PrintVector(v.begin() , v.end());
	v.erase(v.begin() + 2);//删除位于begin()+2的元素
	cout << "4("; PrintVector(v.begin(), v.end());
	vector<int>v2(4, 100); //v2 有4个元素，都是100
	v2.insert(v2.begin(), v.begin() + 1, v.begin() + 3);
	//将v的一段插入v2的开头
	cout << "5(v2:"; PrintVector(v2.begin(), v2.end());
	v.erase(v.begin() + 1, v.begin() + 3);//删掉v上的一整段区间 2，3
	cout << "6)"; PrintVector(v.begin(), v.end());
	//6)1 4  5
	return 0;

}*/

//用vector实现二维数组
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<vector<int> >v(3);
	//v有3个元素，每个元素都是vector<int>容器
	for (int i = 0; i < v.size(); ++i)
		for (int j = 0; j < 4; ++j)
			v[i].push_back(j);
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[i].size(); ++j)
			cout << v[i][j] << "";
		cout << endl;

	}
	return 0;

}*/
/*
deque  双向队列
所有使用于vector的操作都适用于deque
deque还有push_front(将元素插入到前面)和pop_front（删除最前面的元素）操作
复杂度是常数的
*/
/*
双向链表
list 他不是数组是链表不支持随机访问

list容器
在任何位置插入删除都是常熟时间 ，不支持随机存取的
除了具有所有顺序容器都有的成员函数以外，还支持8个成员函数
push_front: 在前面插入
pop_front:   删除前面的元素
sort:      排序(list不支持STL 的算法sort)
remove: 删除和指定值相等的所有元素
unique:  删除所有和前一个元素相同的元素（要做到元素不重复，则unique之前还有sort）
merge:   合并两个链表，并清空被合并的那个
reverse:  颠倒链表
splice: 在指定位置前面插入另一链表中的一个或多个元素，并在另一链表中删除被插入的元素 
*/
/*#include<list>
#include<iostream>
#include<algorithm>
using namespace std;
class A {
private:
	int n;
public:
	A(int n_) { n = n_; }
	friend bool operator<(const A& a1, const A &a2);
	friend bool operator==(const A &a1, const A &a2);
	friend ostream & operator<<(iostream & o, const A &a);
	template<class T>
	void PrintList(const list<T>&lst) {
		typename list<T>::const_iterator i;
		i = lst.begin();
		for (i = lst.begin(); i != lst.end(); i++)
			cout << *i << ",";
	}
};//typename用来说明list<T>::const_iterator是个类型
int main() {
	list<A> lst1, lst2;
	lst1.push_back(1); lst1.push_back(3);
	lst1.push_back(2); lst1.push_back(4);
	lst1.push_back(2);
	lst2.push_back(10); lst2.push_front(20);
	lst2.push_back(30); lst2.push_back(30);
	lst2.push_back(30); lst2.push_front(40);
	lst2.push_back(40);
	cout << "1("; PrintList(lst1); cout << endl;
	lst2.sort();
	cout << "2("; PrintList(lst2); cout << endl;
	cout << "3("; PrintList(lst2); cout << endl;
	lst2.pop_front();
	cout << "4)"; PrintList(lst2); cout << endl;
	lst1.remove(2);//删除所有和A（2）相等的元素
	cout << "5("; PrintList(lst1); cout << endl;
	lst2.unique();//删除所有和前一个元素相等的元素
	cout << "6("; PrintList(lst2); cout << endl;
	lst1.merge(lst2);//合并lst2到lst1并清空lst2
	cout << "7("; PrintList(lst1); cout << endl;
	cout << "8"; PrintList(lst2); cout << endl;
	lst1.reverse();
	cout << "9("; PrintList(lst1); cout << endl;
	lst2.push_back(100); lst2.push_back(200);
	lst2.push_back(300); lst2.push_back(400);
	list<A>::iterator p1, p2, p3;
	p1 = find(lst1.begin(), lst1.end(), 3);
	p2 = find(lst2.begin(), lst2.end(), 200);
	p3 = find(lst2.begin(), lst2.end(), 400);
	lst1.splice(p1, lst2, p2, p3);
	//将[p2,p3)插入p1之前，并从lst2中删除[p2,p3)
	cout << "10)"; PrintList(lst1); cout << endl;
	cout << "11)"; PrintList(lst2); cout << endl;
	return 0;
}*/









