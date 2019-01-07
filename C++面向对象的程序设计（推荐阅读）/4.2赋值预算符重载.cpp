/*
赋值运算符“=”重载

有时候希望赋值运算的两边类型可以不匹配，比如
，把一个int类型变量赋值给一个complex对象，或把一个
char *类型的字符串赋值给一个字符串对象，此时需要重载赋值运算符
“=”
*/
/*#include<cstdio>
#include<iostream>
using namespace std;
class String {
private:
	char *str;
public:
	String() :str(new char[1]) {
		str[0] = 0;
	}
	const char *c_str() { return str; };
	String & operator = ( const char *s );
	~String() { delete[]str; }
};
String & String::operator=(const char *s)
{
	delete[]str;
	str = new char[strlen(s) + 1];
	strcpy(str, s);
	return *this;
}
int main() {
	String s;
	s = "good luck";
	cout << s.c_str() << endl;
	s = "shenzhou 8";
	cout << s.c_str() << endl;
	return 0;

}*/
/*
若要s1=s2；
如不定义自己的赋值运算符，那么s1=s2实际上导致S1.str和s2.str指向的同一个地方

若果S1对象消亡，析构函数将释放S1.str指向的空间，s2消亡时还要释放一次，不行
因此
string & operator =（const string & s）{
            delete [] str;
			str=new char [strlen(s.str)+1]
			strcpy(str ,s.str);
			return *this;
*/
