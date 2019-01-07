/*
static_cast,interpret_cast
const_cast ,dynamic_cast

指针与指针之间的转换风险就比较大
*/

/*
1.static_cast
 static_castY用来进行比较“自然”和低风险的转换

*/
/*#include<iostream>
using namespace std;
class A
{
public:
	operator int() { return 1; }
	operator char*() { return NULL; }
};
int main()
{
	A a;
	int n;
	char *p = "New Dragon Inn";
	n = static_cast<int>(3.14);
	n = static_cast<int>(a);
}*/
/*
reinterpret_cast
用于指针之间的转换
*/
/*#include<iostream>
using namespace std;
class A
{
public:
	int i;
	int j;
	A(int n):i(n),j(n){}
};
int main()
{
	A a(100);
	int &r = reinterpret_cast<int&>(a);//强行让r引用a
	r = 200;//把a.i变成200
	cout << a.i << "," << a.j << endl;
	int n = 300;
	A *pa = reinterpret_cast<A*>(&n);//强行让pa指向n
	pa->i = 400;
	pa->j = 500;
	cout << n << endl;

}*/

/*
const_cast
用来进行除const属性的转换。将const引用转换成同类型的非const引用
*/
/*
/*
dynamic_cast
专门用于多态基类的指针或引用，强制转化为派生类的指针和引用/
专门用于多态基类的指针或引用，强制转化为派生类的指针和引用/
*/
