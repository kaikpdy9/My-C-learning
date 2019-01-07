/*
友元

友元分为友元函数和友元类两种

1.友元函数：一个类的友元函数（不是这个类的成员函数，这个友元函数可能是个全局函数）
可以访问该类的私有成员
*/

/*#include<cstdio>
#include<iostream>
using namespace std;
class CCar;
class CDriver {
public:
	void ModifyCar(CCar * pCar);
};
class CCar {
private:
	int price;
	friend int MostEXPECAR(CCar cars[], int total);//声明友元
	friend void CDriver::ModifyCar(CCar * pCar);//声明友元
};
void CDriver::ModifyCar(CCar *pCar) {
	pCar->price += 1000;         //为什么能够访问price 因为这是朋友呀
}
int MostEXPECAR(CCar cars[], int total) {
	int tmpMax = -1;
	for (int i = 0; i < total; ++i)
		if (cars[i].price > tmpMax)
			tmpMax = cars[i].price;
	return tmpMax;

 }
int main() {
	return 0;
}*/

/*
友元类：如果A是B的友元类，那么A的而成员函数可以访问B的私有成员
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CCar {
private:
	int price;
	friend class CDriver;
};
class CDriver {
public:
	CCar mycar;
	void Mod() {
		mycar.price += 1000;  因为cdriver是ccar的友元类，所以可以访问私有成员的
	}
};*/
//友元之间的关系 不能传递，不能继承


