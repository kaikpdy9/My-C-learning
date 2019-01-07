/*
无序容器(哈希表)

是一种数据结构
哈希表插入和查询的时间复杂几乎是常数的复杂度
*/
/*#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main() {
	unordered_map<string, int>turingWinner;
	turingWinner.insert(make_pair("adawda", 1874));
	turingWinner.insert(make_pair("grehrdh", 1374));
	turingWinner.insert(make_pair("jytrdxv", 1274));
	turingWinner.insert(make_pair("hymm", 1999));
	turingWinner.insert(make_pair("fdd", 1997));
	turingWinner["riada"] = 1983;
	string name;
	cin >> name;
	unordered_map<string, int>::iterator p = turingWinner.find(name);
	//根据姓名查时间
	if (p != turingWinner.end())
		cout << p->second;
	else
		cout << "Not Found" << endl;
	return 0;
	
}*/
/*
正则表达式

意思是一种字符串的模式，即规定字符串是什么样子的
*/
/*#include<iostream>
#include<regex>
#include<cstdio>
uisng namespace std;
int main()
{
	regex reg("b.?p.*k");
	cout << regex_match("bopggk", reg) << endl;
	cout << regex_match("boopgggk", reg) << endl;
	cout << regex_match("b pk", reg) << endl;
	return 0;

}*/
//可以做字符串匹配
/*
Lambda表达式
*/
/*#include<iostream>
#include<lamp.h>
using namespace std;
int main() {
	int x = 100, y = 200, z = 300;
	cout << [](doubl a, double b) {return a + b; }(1.2, 2.5) << endl;
	auto ff = [=, &y.&z](int n){
		cout << x << endl;
		y++; z++;
		return n * n;
	};
	cout << ff(15) << endl;
	cout << 7 << "," << z << endl;

}*/
//它的方便的地方
/*#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a[4] = { 4,2,11,33 };
	sort(a, a + 4, [](int x, int y)->bool {return x % 10 < y % 10; });
	for_each(a, a + 4, [](int x) {cout << x << " "; });
	return 0;

}*/
/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int>a{ 1,2,3,4 };
	int total = 0;
	for_each(a.begin(), a.end(), [&](int &x) {total += x; x *= 2; });
	cout << total << endl;
	for_each(a.begin(), a.end(), [](int x) {cout << x << " "; });
	return 0;

}*/
//lambda实现递归











