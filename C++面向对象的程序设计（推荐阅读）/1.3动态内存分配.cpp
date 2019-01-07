/*
用new运算符实现动态内存分配
第一个用法分配一个变量
【】P=new T；
T是任意类型名，p是任意类型为T*的指针
动态分配出一片大小为sizeof（T）字节的内存空间，并将
该内存空间的起始地址赋值给P
int *pn；
pn=new int；
*pn=5；


第二种用法是分配一个数组
P=new T【N】；
T：任意类型名
P:类型为T *的指针
N：要分配的数组元素的个数，可以是整形表达式
分配的内存大小的大小字节是N*sizeof（T）并赋值给P。

【】
int *pn;
int i=5;
pn=new  int[i*20];
pn[0]=20;
pn[100]=30;

他们的返回值都是T*类型的哟

用delete运算符释放动态分配存储内存
delete指针//必须指向new出来的空间

int *p=new int；
*p=5；
delete p；
delete p；只能做一次运行异常

用delete释放动态分配的数组要加[]
int *p=new int [20];
p[0]=1;
delete []p;
*/
