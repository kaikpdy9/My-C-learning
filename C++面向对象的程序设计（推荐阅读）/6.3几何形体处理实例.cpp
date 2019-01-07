/*
几何形体处理程序

几何形体处理程序:输入若干个几何形体的参数,按要求
面积排序输出。输出时要指明形状。

input:
第一行是几何形体数目n（不超过100）下面有n行,每行有一个字母c开头
若c是'R',则代表一个矩形，本行后面跟着两个整数，分别是矩形的宽和高
若c是'C’则掉膘也不一个圆，本行后面跟着一个整数代表面积
若c是‘T’，则代表一个三角形，本行后面跟着三个整数，代表三条边的长度 
*/
/*#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
class CShape {
public:
	virtual double Area() = 0;//纯虚函数
	virtual void PrintInfo() = 0;
};
class Cttt :public CShape {
public:
	int k;
	virtual double Area();
	virtual void PrintInfo();
};
class CRectangle :public CShape {
public:
	int w, h;
	virtual double Area() ;
	virtual void PrintInfo() ;
};
class CCricle :public CShape {
public:
	int r;
	virtual double Area() ;
	virtual void PrintInfo() ;
};
class CTriangle :public CShape {
public:
	int a, b, c;
	virtual double Area();
	virtual void PrintInfo();
};
double Cttt::Area() {
	return k * k*k;
}
void Cttt::PrintInfo() {
	cout << "Cttt" << Area() << endl;
}


double CRectangle::Area() {
	return w * h;
}
void CRectangle::PrintInfo() {
	cout << "CRectangle:" << Area() << endl;
}
double CCricle::Area() {
	return 3.14*r*r;
}
void CCricle::PrintInfo() {
	cout << "CCricle" << Area() << endl;
}
double CTriangle::Area() {
	double p = (a + b + c) / 2.0;          //海伦公式，我高数要该看看了
	return sqrt(p*(p - a)*(p - b)*(p - c));
}
void CTriangle::PrintInfo() {
	cout << "CR=Triangle" << Area() << endl;
}
CShape *pShapes[100];  //这个数组里面的每一个数就是一个基类的指针，
  //犹豫是基类的指针，所以可以指向派生类的对象，所以我们可以让这个
//数组的每一个元素去指向不同几何形体，所有几何形体是new出来的对象
//他们的地址，就被放到数组里面去了，排序即对基类指针数组进行排序
int MyCompare(const void *s1, const void*s2); //排序规则自己写
int main() {
	int i; int n;
	CRectangle *pr; CCricle *pc; CTriangle *pt; Cttt *pm;
	cin >> n;
	for (i = 0; i < n; i++) {
		char c;
		cin >> c;
		switch (c)
		{
		case'R':
			pr = new CRectangle();
			cin >> pr->w >> pr->h;
			pShapes[i] = pr;
			break;
		case'C':
			pc = new CCricle();
			cin >> pc->r;
			pShapes[i] = pc;
			break;
		case'T':
			pt = new CTriangle();
			cin >> pt->a >> pt->b >> pt->c;
			pShapes[i] = pt;
			break;
		case'M':
			pm = new Cttt();
			cin >> pm->k;
			pShapes[i] = pm;
			break;
		
		}
		
	}
	qsort(pShapes, n, sizeof(CShape*), MyCompare);
	for (i = 0; i < n; i++)
		pShapes[i]->PrintInfo();          //这里是多态！！！
	return 0;

}
int MyCompare(const void*s1, const void *s2) {
	double a1, a2;
	CShape **p1; //s1,s2是void *，不可写”s1“来取得s1指向的内容
	CShape **p2;
	p1 = (CShape**)s1;//s1,s2指向pshapes中的元素，数组元素的类型是CShape*
	p2 = (CShape**)s2;//故p1 p2是指向指针的指针，类型为CShape**
	a1 = (*p1)->Area();//*p1的类型是Cshape*，是基类指针，故此句为多态
	a2 = (*p2)->Area();       //！！！这里也是多态
	if (a1 < a2)
		return -1;
	else if (a2 < a1)
		return 1;
	else
		return 0;
}*/
/*
!!!用基类指针数组存放指向各种派生类对象的指针，然后遍历该数组，就能对各个派生对象做各种操作，
是很常见的做法
*/


//多态的另一个例子
/*#include<cstdio>
#include<iostream>
using namespace std;
class Base {
public:
	void fun1() { fun2(); }
	virtual void fun2() { cout << "调用的是基类Base的fun2" << endl; }
};
class Derived :public Base {
public:
	virtual void fun2() { cout << "调用的是派生类D的fun2" << endl; }
};
int main() {
	Derived d;
	Base *pBase = &d;
	pBase->fun1();
	return 0;

}*/
//在非构造函数，非析构函数的成员函数中调用虚函数，是多态!!!
//在构造函数，析构函数的成员函数中调用虚函数，不是多态，在自己的类中用
/*#include<cstdio>
#include<iostream>
using namespace std;
class myclass {
public:
	virtual void hello() { cout << "hello from myclass" << endl; }
	virtual void bye() { cout << "bye from myclass" << endl; }
};
class son :public myclass {
public:
	void hello() { cout << "hello from son" << endl; };
	son() { hello(); };
	~son() { bye(); };
};
class grandson :public son {
public:
	void hello() { cout << "hello from grandson" << endl; }
	void bye() { cout << "bye from grandson" << endl;}
	grandson() { cout << "constrycting grandson" << endl; }
	~grandson() { cout << "destructing grandson" << endl; }
};
int main() {
	grandson gson;
	son *pson;
	pson = &gson;
	pson->hello();
	return 0;

}*/
//因此我们不能在基类的构造函数中执行派生类的虚函数，所以在基类的构造函数调用虚函数就不是多态
//析构的道理也是同理
















