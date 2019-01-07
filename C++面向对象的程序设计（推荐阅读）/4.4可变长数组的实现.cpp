/*
要编写可变长的整形数组，使之能能如下使用
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class CArray {
	int size;//数组元素的个数
	int *ptr;//指向动态分配的数组
public:
	CArray(int s = 0);//普通构造函数，s代表数组元素的个数
	CArray(CArray &a);//复制构造函数
	~CArray();
	void push_back(int v);//用于在数组尾部添加一个元素v
	CArray&operator=(const CArray&a);//用于数组对象的赋值，即深拷贝的操作
	int length() { return size; }//返回数组的元素个数
	int &CArray::operator[](int i) {
		return ptr[i];
	}

};
CArray::CArray(int s) :size(s) {
	if (s == 0)
		ptr = NULL;
	else
		ptr = new int[s];
}
CArray::CArray(CArray &a) {
	if (!a.ptr) {
		ptr = NULL;
		size = 0;
		return;
	}
	ptr = new int[a.size];
	memcpy(ptr, a.ptr, sizeof(int)*a.size);
	size = a.size;
}
CArray::~CArray() {
	if (ptr)delete[]ptr;
}
CArray &CArray::operator=(const CArray &a) {
	//赋值号的作用是使=左边对象里存放的数组，大小和内容都和右边的对象一样
	if (ptr == a.ptr) //防止a=a这样的赋值导致出错
		return *this;
	if (a.ptr == NULL) {
		if (ptr)delete[]ptr;
		ptr = NULL;
		size = 0;
		return *this;
	}
}
void CArray::push_back(int v) {//在数组后面加一个元素
	if (ptr) {
		int *tmpPtr = new int[size + 1];
		memcpy(tmpPtr, ptr, sizeof(int)*size);
		delete[]ptr;
		ptr = tmpPtr;
	}
	else
		ptr = new int[1];
	ptr[size++] = v;

}

int main() {
	CArray a;                       //要用动态分配的内存来存放数组元素，需要
                                         //一个指针成员变量
	for (int i = 0; i < 5; ++i)
		a.push_back(i);
	CArray a2, a3;
	a2 = a;
	for (int i = 0; i < a.length(); ++i)
		cout << a2[i] << "";
	a2 = a3;
	for (int i = 0; i < a2.length(); ++i)
		cout << a2[i] << "";
	cout << endl;
	a[3] = 100;
	CArray a4(a);
	for (int i = 0; i < a4.length(); ++i)
		cout << a4[i] << "";
		return 0;

}*/