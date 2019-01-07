/*
创建文件
#include<fstream>  //包含头文件

ofstream outFile("clients.dat",ios::out|ios::binary); //创建文件

-clients.dat 要创建的文件的名字
-ios::out    文件的打开方式
  ios:out 输出到文件，删除原有文件内容
  ios::app  输出到文件，保留原有内容，总是在尾部添加
- ios::binary 以二进制文件格式打开文件

创建文件 也可以先创建ofstream对象，再用open函数打开
ofstream fout;
fout.open("test.out",ios::out|ios::binary);

判断是否打开成功
if(!fout){
     cout<<"file open error!"<<endl;
}
文件名可以给出绝对路径也可以给出相对路径，在没有交代路径信息的时候，就是在当前文件下创建
*/

/*
文件名的绝对路径和相对路径

绝对路径:
"c:\\tmp\\mydir\\some.txt"
相对路径
"\\tmp\\mydir\\some.txt" //当前盘符的根目录下的tmp\dir\some.txt

*/

/*
文件的读写指针

对于输入 文件有一个读指针
对于输出文件有一个写指针
对于输入输出文件，有一个读写指针
标识文件操作的当前位置，该指针在哪里，
读写操作就进行到哪里

文件的写指针
ofstream fout("a1.out",ios::app); //以添加方式打开
long location=fout.tellp();       //取得写指针
locatio=10;              
fout.seekp(location);             //将写指针移动到10个字节处
fout.seekp(location,ios::beg);    //从头数location
fout.seekp(location,ios::cur);    //从当前位置数location
fout.seekp(location,ios::end);    //从尾部数location

文件的读指针
ifstream fin("a1.in",ios::ate);  //打开文件，定位文件指针到文件尾
long location =fin.tellg();      //取得读指针的位置
location=10L;
fin.seekg(location);    //将读指针移动到第10个字节处
fin.seekg(location,ios::beg); //从头数location
fin.seekg(location,ios::cur); //从当前位置数
fin.seekg(location,ios::end);//从尾部数location

location可以是负数
*/

/*
字符文件读写

因为文件流也是流，所以流的成员函数和流操作算子也同样
适用于文件流
*/

/*
写一个程序，将文件in.txt里面的整数排序后，输出到out.txt
例如 若in.txt的内容为
1 234 45 6 879
则执行本程序后，生成的out.txt的内容为
1 6 9 45 234 879
*/
/*
本来cout是ostream的对象，ofsteam是osteam的派生类
所以可以这样用 destFile<<v[i]<<"";
*/
/*#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> v;
	ifstream srcFile("in.txt", ios::in);         //打开文件进行读
	ofstream destFile("out.txt", ios::out);      //打开文件进行写
	int x;
	while (srcFile >> x)
		v.push_back(x);
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		destFile << v[i] << "";
	destFile.close();
	destFile.close();
	return 0;


}*/




