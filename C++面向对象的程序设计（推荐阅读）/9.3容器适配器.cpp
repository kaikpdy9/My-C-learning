/*
因为容器适配器没有迭代器，所以很多算法，不适用于
*/
/*
stack即栈！！！
栈是后进先出的数据结构，只能插入，删除，访问栈顶的元素
定义:
template<class T,class Cont=deque<T>>
class stack{
    .....
}
push ,pop ,top（返回栈顶元素的引用）

queue和stack差不多，但是push发生在队尾，先进先出，pop发生在队头
back可以返回队尾元素的引用

priority_queue优先队列
通常用堆排序技术实现，保证最大的元素总是在最前面。即执行pop操作时，删除的是最大的元素；执行top操作的时候
返回的是最大元素的引用。默认的比较器是less<T>
*/
/*#include<queue>
#include<iostream>
using namespace std;
int main()
{
	priority_queue<double>pq1;
	pq1.push(3.2); pq1.push(9.8); pq1.push(5.4);
	pq1.push(6.7);
	while (!pq1.empty()) {
		cout << pq1.top() << "";
		pq1.pop();
	}
	cout << endl;
	priority_queue<double, vector<double>, greater<double>>pq2;
	pq2.push(3.2); pq2.push(9.8); pq2.push(9.8); pq2.push(5.4);
	while (!pq2.empty()) {
		cout << pq2.top() << "";
		pq1.pop();
	}
	return 0;
}*/
/*
empty()成员函数用来判断适配器是否为空
size()成员函数返回适配器中元素个数
*/

