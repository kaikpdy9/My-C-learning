/*#include<cstdio>
#include<iostream>
using namespace std;
class Demo {
	int id;
public:
	Demo(int i) {
		id = i;      //事实上，这个就是类型转换构造函数
		cout << "id=" << id << "是哪个对象出生了哇" << endl;
	}
	~Demo() {
		cout << "id=" << id << "是哪个对象消亡了哇" << endl;
	}
};
Demo d1(1);
void func() {
	static Demo d2(2);   //静态的局部变量不会消亡的,在程序完后消亡
	Demo d3(3);            
	cout << "func" << endl;
}
int main() {
	Demo d4(4);
	d4 = 6;    //有个类型转换构造函数的存在呀
	cout << "main" << endl;
	{
		Demo d5(5);                //局部对象在花括号的右边就不见啦
	}
	func();
	cout << "main ends" << endl;
	return 0;

}*/
//！！！new 出来的东西，程序运行完后，也不会消亡//