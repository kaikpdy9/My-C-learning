/*
比如我们希望用10进制 16进制输出 就要用到

。整数流的基数:流操作算子dec，oct（8进制），hex（16进制），setbase
。浮点数的精度（precision，setprecision）
。设置域宽（setw，width）
。用户自定义流操作算子

使用流操作算子需要用到#include<iomanip>
*/
/*#include<iomanip>
#include<iostream>
using namespace std;
int main() {
	int n = 10;
	cout << n << endl;
	cout << hex << n << "\n"
		<< dec << n << "\n" <<
		oct << n << endl;
	return 0;

}*/
/*cout.precision
cout<<setprecision*/
/*setiosflags(ios::fixed) 定点方式输入*/
//设置宽度的流操作算子
/*#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int w = 4;
	char string[10];
	cin.width(5);
	while (cin >> string) {
		cout.width(w++);
		cout << string << endl;
		cin.width(5);
	}
	return 0;
	    
}*///这里的输入流1234567890叫做输入流
//它是每4个4个这样读进去的
//这个缺省的话要用空格去补，而且w++所以就有错位的现象
//宽度设置这种东西是一次性的
/*#include<cstdio>
#include<iomanip>
#include<iostream>
using namespace std;
int main() {
	int n = 141;
	cout << "1)" << hex << n << "" << dec << n << oct << n << endl;
	//分别以16进制，十进制，八进制先后输出n
	double x = 1234567.89, y = 12.34567;
	cout << "2(" << setprecision(5) << x << "" << y << "" << endl;
	//保留五位有效数字
	cout << "3(" << fixed << setprecision(5) << x << "" << y << endl;
	//保留小数点后5五位数字
	cout << "4(" << scientific << setprecision(5) << x << "" << y << endl;
	//以科学计数法输出，且保留小数点后五位数字
	return 0;
} */ 
//用户自定义流操作算子
//实际上是个函数，返回值是ostream的引用
/*
ostream &tab(ostream &output){
return output<<'t';                //tab是个函数，也是个流操作算子
cout<<"aa"<<tab<<"bb"<<endl;
}
*/



