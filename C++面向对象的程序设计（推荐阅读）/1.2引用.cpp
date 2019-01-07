//下面的写法定义了一个引用，并将其初始化为引用某个变量
/*
类型名&引用名=某变量名；
int n=4；
int &r =n；  //r引用了n，r的类型是int &
//某个变量的引用，等价于这个变量，相当于这个变量的一个别名

*/
/*#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int n = 7;
	int &r = n;
	r = 4;
	cout << r;
	cout << n;
	n= 5;
	cout << r;
	return 0;

}*/
/*
引用的概念，定义引用时，一定要将其初始化成引用某个变量
*/
/*
初始化后，它就一直引用该变量，不会再引用别的变量了
*/
/*
引用只能引用变量，不能引用常量
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	double a = 4, b = 5;
	double &r1 = a;
	double &r2 = r1;
	r2 = 10;
	cout << a << endl;
	r1 = b;
	cout << a << endl;
	return 0;

}*/
//!!!!!!!why!!!!!!
/*#include<iostream>
#include<cstdio>
using namespace std;
void Swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;

}
int main() {
	int a = 2;
	int b = 3;
	Swap(a, b);
	cout << a << b;
	return 0;

}*/
//n1与n2的值不会被改变
//我们上节课学的指针发现他的值可以通过*，与&（去地址）来交换

//有了c++的引用，就方便的得多了，可以对参数做引用
/*#include<cstdio>
#include<iostream>
using namespace std;
void Swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}
int main() {
	int n1 = 3;
	int n2 = 4;
	Swap(n1, n2);
		cout << n1 << n2;
	return 0;

}*/
//引用也可以作为函数的返回值
/*#include<cstdio>
#include<iostream>
using namespace std;
int n = 4;
int & SetValue() { return n;}
int main() {
	SetValue() = 40;
	cout << n ;
	return 0;

}*/
/*
引用的另一种用法，常引用
在定义引用时加const关键字
int n;
const int &r=n;

其作用是不能通过常引用去修改引用的内容
int n=100;
const int &r=n;
r=200;  //不能修改n的值，当然编译要报错
n=300;

const T &和T & 是不同的类型，不能相互转化

*/


