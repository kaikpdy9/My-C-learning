/*
继承：在定义一个新的类B 时，如果该类与某个已有的类A 相似（指的是B拥有A的全部特性）
呢么就可以把A作为一个基类，而把B作为作为基类的一个派生类（子类）

派生类是通过基类进行修改和扩充得到的。在派生类中，可以扩充新的成员变量和成员函数
派生类一经定义后，可以独立使用，不依赖于基类。

派生类拥有全部成员函数和成员变量，无论是private，protected，public

在派生类的各个成员函数中，不能访问基类中的private成员
*/
/*
派生类的写法
class 派生类名:public 基类名{

}
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CStudent {
private:
	string sName;
	int nAge;
public:
	bool isThreegood() {

	};
	void setName(const string & name) {
		sName = name;
	}
};
class CUndergraduateStudent :public CStudent {
private:
	int nDepartment;
public:
	bool isThreegood() {};//对基类的覆盖，或则叫做修改
	bool canbaoyan() {};
};*/

/*
派生类对象的内存空间

派生类对象的体积，等于基类对象的体积，再加上派生类对象的成员变量的体积，在派生类对象中，包含着基类对象
而且积累对象的存储位置位于派生类对象新增的成员函数之前
class CBase{
    int v1,v2;

};
class CDeriver:public CBase{
   int v3;

};
*/


/*
继承实例程序：学籍管理
*/
/*#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
class CStudent {
private:
	string name;
	string id;
	char gender;
	int age;
public:
	void Printinfo();
	void Setinfo(const string & name_, const string & id_, int age_, char gender_);
	string GetName() { return name; }
};
class CundergruateStuuent :public CStudent {
private:
	string department;
public:
	void Qualifeforbaoya() {
		cout << "qualified for baoyan" << endl;
	}
	void Printfo() {
		CStudent::Printinfo();       //调用基类的printinfo
		cout << "department:" << department << endl;
	}
	void setinfo(const string &name_, const string &id_, int age_, char gender_, const string &department_) {
		CStudent::Setinfo(name_, id_, age_, gender_);//调用基类的setinfo
		department = department_;
	}
};
int main() {
	CundergruateStuuent s2;
	s2.setinfo("Harry potter", "111821313", 19, 'M', "C  S");
	cout << s2.GetName() << "";
	s2.Qualifeforbaoya();
	s2.Printinfo();
	return 0;

}*/










