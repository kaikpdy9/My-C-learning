/*
char *原来一直都当作字符串在用呀

string类
 --string类是模板类
   typedef basic_string<char>string;

使用string类要包含头文件<string>

string对象的初始化
----string s1("hello");
----string mooth="March";
----string s2(8,'x');

但是可以将字符赋值给string对象
--string s;
--s='n';
*/
/*#include<iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[]) {
	string s1("hlola");
	cout << s1 << endl;
	string s2(8, 'x');
	cout << s2 << endl;
	string month = "March";
	cout << month << endl;
	string s;
	s = 'n';
	cout << s << endl;
	return 0;

}*/
/*
string 对象的长度用成员函数length()读取；
string s("hello");
cout<<s.lentth()<<endl;
string 支持流读取运算符
--string stringObject;
--cin>>stringObjext;
string支持getline函数
--string s;
--getline(cin,s);
*/
/*
string的赋值和连接
用=赋值
-string s1("cat"),s2;
s1=s2;
用assign成员函数复制
-string s1（“cat”），s3;
s3.assign(s1);
用assign成员函数部分复制
--string s1("catpig",s3);
s3.assign(s1,1,3)
//从s1中下标为1的字符开始复制3个字符
单个字符复制
s2[5]=s1[3]='a';
逐个访问string的字符
string s1（“hello”）
for(int i=0;i<s1.length();++i)
        cout<<s1.at(i)<<endl;
		cout<<s1[i]<<endl;
成员函数会做饭为检查，如果超出范围，会抛出out_of_range异常
而下标运算符[]不做范围检查
用+运算符连接字符串
string s1（“good“），s2（”morining！“）
s1+=s2;
cout<<s1;就是我们说的goodmorining
也可以用成员函数append连接字符串
s1.append(s2);
cout<<s1;
s2.append(s1,3,s1.size())
cout>>s2;指定字符的添加


比较string
用关系运算符比较string的大小
==,>,>=,<,<=,!=
返回值是bool类型，成立反回true，否则返回false

用成员函数compare比较string的大小
s1.compare（s2）相等返回0，大于返回1,小于返回-1
*/
/*
子串
成员函数substr
string s1("hello world"),s2;
s2=s1.substr(4,5);//下标4开始5个字符
cout<<s2<<endl;

成员函数swap交换字符串

寻找string中的字符串
成员函数find（）
--string s1（"hello world"）;
--s1.find("lo");

如果能够找到即返回l所在位置的下标  

成员函数erase()
s1.erase(5)就是去掉下标5以及之后的字符

成员函数replace
string s1("hello wodrld")
s1.replace(2,3,"haha")
cout<<s1;

insert()
string s1("hello word")
string s2("show insert")
s1.insert(5,s2)//将s2插入s1下标5
的位置

转换成c语言式char*字符串
c_str()
string s1("hello world")
printf("%s\n",s1.c_str())
s1.c_str()返回传统的const char*类型字符串，且该字符串以
\0结尾


*/


