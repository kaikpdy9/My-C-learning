/*
二进制读文件

ifstream和fstream的成员函数:

istream& read(char* s,long n)
将文件读指针指向的地方的n和字节的内容，读到内存地址s，然后将文件读指针向后移动n个字节
(以ios::in方式打开文件时，文件读指针开始指向文件开头)

*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream fout("some.dat", ios::out | ios::binary);//创建一个文件，并且以二进制的方式写入文件
	int x = 120;
	fout.write((const char *)(&x), sizeof(int));  //这里read的第一个参数是const char* 要用强制类型转化
	fout.close();
	ifstream fin("some.dat", ios::in | ios::binary);//将文件里的数据读出来并且赋值给y
	int y;
	fin.read((char *)&y, sizeof(int));
	fin.close();
	cout << y << endl;
	return 0;

}*/
/*
从键盘输入几个学生的姓名的成绩，并以二进制文件形式保存
*/
/*#include<iostream>
#include<fstream>
using namespace std;
struct Student {
	char name[20];
	int score;
};
int main() {
	Student s;
	ofstream OutFile("c:\\tmp\\st.dat", ios::out | ios::binary);
	while (cin >> s.name >> s.score)
		OutFile.write((char *)&s, sizeof(s));
	OutFile.close();
	return 0;

}//输入完后 ctrl z+回车来返回
*/
//将文件student.dat文件的内容读出来并且显示
/*#include<iostream>
#include<fstream>
using namespace std;
struct Student {
	char name[20];
	int score;
};
int main() {
	Student s;
	ifstream inFile("c:\\tmp\\st.dat", ios::in | ios::binary); //以二进制的方式打开文件
	if (!inFile) {
		cout << "error" << endl;
		return 0;
	}
	while (inFile.read((char*)&s, sizeof(s))) {  //每个对象每个对象这么读取的
		int readedBytes = inFile.gcount(); //看看刚才读了多少字节
		cout << s.name << "" << s.score << endl;
	}
	inFile.close();
	return 0;

}*/
//二进制文件读写
//将students.dat文件的Jane的名字改写成Mike
/* #include<iostream>
#include<fstream>
using namespace std;
struct Student {
	char name[20];
	int score;
};
int main() {
	Student s;
	fstream iofile("c:\\tmp\\st.dat", ios::in | ios::out | ios::binary);
	if (!iofile) {
		cout << "文件读取失败";
		return 0;
	}
	iofile.seekp(2 * sizeof(s), ios::beg); //定位写指针到第三个记录
	iofile.write("Mike", strlen("Mike") + 1); 
	iofile.seekg(0, ios::beg);//定位读指针到开头
	while (iofile.read((char *)&s, sizeof(s)))
		cout << s.name << "" << s.score << endl;
	iofile.close();
	return 0;


}*/

//不管是查找方式的情况下，还是存储文件的情况下，用二进制文件要来得方便

//文件拷贝程序mycopy示例
/*
用法示例，mycopy src.dat dest.dat即将前一个拷贝到后一个文件中，后一个
如果有就要被覆盖
*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
	if (argc != 3) {
		cout << "File name missing" << endl;
		return 0;
	}
	ifstream inFile (argv[1], ios::binary | ios::in);//打开文件用于读
	if (!inFile) {
		cout << "source file open error" << endl;
		return 0;
	}
	ofstream outFile(argv[2], ios::binary | ios::out);//打开文件用于写
	if (!outFile) {
		cout << "New file open error" << endl;
		inFile.close();
		return 0;
	}
	char c;
	while (inFile.get(c))//每次读取一个字符
		outFile.put(c);
	outFile.close();
	inFile.close();
	return 0;



}
*/
//二进制文件和文本文件的区别
//记住要用ios::binary




