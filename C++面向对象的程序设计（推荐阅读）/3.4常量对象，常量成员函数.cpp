/*
如果不希望某个对象的值被改变，则定义该对象时候可以在前面加
const关键字

如class domo；
const domo a；

常量成员函数
在类的成员函数说明后面可以加const关键字，则该成员函数成为常量成员函数

常量成员函数执行期间不应该修改其所作用的对象。因此在常量成员函数中不能修改成员变量的值（
静态成员变量除外），也不能调用同类的非常量成员函数（静态函数除外）。
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class Sample {
public:
	int value;
	void GetValue()const;
	void func() {};
	Sample(){}
};
void  Sample::GetValue() const {
	//value = 0;  //wrong, const函数不能修改成员变量
	//func();      //不能调用非const函数
}
int main() {
	const Sample o;
	o.value = 100;//常量对象不能被修改
	o.func();     //常量对象上不可以执行非常量函数或者常量成员
	o.GetValue();  //常量对象上可以执行常量成员
	return 0;
}*/
/*
引用前面可以加const关键字，成为常饮用。不能通过常饮用，修改引用的变量

！！对象作为函数的参数时，生成该参数需要调用复制构造函数，效率比较低。用指针做参数，代码不好看
可以用对象的引用作为参数
如
class Samle{


};
void printobj(Samle & o)  //注意对象引用作为函数的参数有一定风险，若函数中即（printobj中的修改o
的语句）不小心修改了形参o，则实参也跟着变这可能是我们不想要的
所以 用这个
void printobj(const Samle & o) 这样函数中就能确保不会出现无意中修改o值语句了

*/


