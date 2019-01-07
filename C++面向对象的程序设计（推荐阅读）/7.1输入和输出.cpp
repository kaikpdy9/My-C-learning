/*
输入和输出流相关的类
                       ios
             istream        ostream
     ifstream    iostream               ofstream
	             fstream
	这里的东西是派生来的
	iostream既可以读也可以写

istream是用于输入的流类，cin就是该类的对象
ostream适用于输出的流类，cout就是该类的对象
ifstream是用于文件读写数据的类
ofstream是用于向文件读入数据的类
isotream是既能输入又能输出的类
fstream是既能从文件读取数据，又能向文件写入数据的类

cin对应于标准输入流，用于从键盘读取数据，也可以被重新定向从文件中读取数据
cout对应于标准输出流，用于向屏幕输出数据，也可以被重新向文件写入数据
*/
/*#pragma warning(disable:4996)
#include<iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	freopen("text.txt", "w", stdout);
	if (y == 0)
		cerr << "error" << endl;
	else
		cout << x / y;
	return 0;

}*/
/*#pragma warning (disable:4996)
#include<iostream>
using namespace std;
int main() {
	double f; int n;
	freopen("t.txt", "r",stdin);
	cin >> f >> n;
	cout << f << "," << endl;
	return 0;

}*/
//判断输入流结束
/*int x;
while (cin >> x) {

}*/
/*
如果去读文件的话
文件读完了输入流就结束了
键盘的话敲下ctrl+z就结束了
*/
/*
istream类的成员函数
istream & getline(char *buf,int bufSize);
从输入流中读取bufSize-1个字符到缓冲区buf,或读到\n为止
istream & getline(char *buf,int buffSize,char delim);
从输入流中读取bufSize个字节到缓冲区，碰到delim字符位置
*/
/*
bool eof（）；判断输入流是否结束
int peek（）；返回下一个字符，但不从流中去掉
istream &putback（char c）；将字符ch放回输入流
istream &ignore（）从流中删掉nCount个字符，遇到EOF时结束
*/
/*#include<iostream>
using namespace std;
int main() {
	int x;
	char buf[100];
	cin >> x;
	cin.getline(buf, 90);
	cout << buf << endl;
	return 0;

}
*/



