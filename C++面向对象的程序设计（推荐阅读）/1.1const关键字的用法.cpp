/*
1.定义常量
const int MAX_VAL=23；
const double Pi=3.14;
const char*SCHOOL_NAME="PKU";
少用define，多用const

2.定义常量指针
不可以通过常量指针修改其指向的内容
int n,m;
const int*p=&n;
*p=5;//编译出错
n=4;//ok
p=&m;//ok 常量指针的指向可以彼变化

不能把常量指针赋值给非常量指针
const int*p1;int *p2;
p1=p2; //ok
p2=p1; //error
p2=(int *)p1;//ok,强制类型转换

！！！函数参数为常数指针的时候（常常不用改变）可避免函数内部不小心改变参数指针所
指地方的内容
void MyPrintf(const char *p)
{  
   strcpy(p,"this");//编译报错，试图修改参数指针 strcpy的第一个类型是char*,所以出错
   printf("%s",p) //ok

   3.可以定义常引用，内容在上面的
}
*/