/*
multimap
template<class Key,class T,class Pred =less<Key>,class A=alloctor<T>>
class multimap{
      ....
	  typedef piar<const Key,T>value_type;
	  .....
}
     key代表关键字类型
*/
/*
multimap中的元素由<关键字，值>组成，每个元素是一个pair对象，关键字
就是first成员变量，其类型是Key
*/
/*#include<iostream>
#include<map>
using namespace std;
int main() {
	typedef multimap<int, double, less<int >>mmid;
	mmid pairs;
	cout << "1(" << pairs.count(15) << endl;
	pairs.insert(mmid::value_type(15, 2.7));//typedef pair<cpnst Key,T>value_type
	pairs.insert(mmid::value_type(15, 99.3));
	cout << "2(" << pairs.count(15) << endl;//求关键字等于15的元素个数
	pairs.insert(mmid::value_type(30, 111.11));
	pairs.insert(mmid::value_type(10, 22.22));
	pairs.insert(mmid::value_type(25, 33.333));
	pairs.insert(mmid::value_type(20, 9.3));
	for (mmid::const_iterator i = pairs.begin();
		i != pairs.end(); i++)
		cout << "(" << i->first << "," << i->second << "(" << ",";
}*/
//multimap列题
/*
一个学生成绩录入和查询系统，
接受以下两种输入
Add name id score
Query score

name是个字符串，中间没有空格，代表学生姓名。id是个整数，代表学号
。score是个整数，表示分数。学号不会重复，分数和姓名有可能重复

query表示查询，碰到这种输入，就输出已有记录中分数比score低的最高分获得者
的姓名，学号和分数。如果多个学生满足条件，就输出学号最大的那个学生的信息
如果找不到，就输出nobody

输入样例
Add jack 12 78
Query 78
Query 81
Add Percy 9 81
Add Marry 8 81
*/
//如果用vector来存这些数据的话，10有8，9都会出错
//所以要用关联容器，又因为我们存的时候，需要重复的录入
//所以就需要multimap
/*#include<iostream>
#include<map>
#include<string>
using namespace std;
class CStudent
{
public:
	struct Cinfo   //类的内部还可以定义类
	{
		int id;
		string name;
	};
	int score;
	Cinfo info;//学生的其他信息
};
typedef multimap<int, CStudent::Cinfo>MAP_STD;//这个容器内的每个元素，都是pair类
                                              //模板的对象，然后他的first成员变量
                                              //是整形的，second成员变量里面存放
                                              //的是学生的id
int main() {
	MAP_STD mp;
	CStudent st;
	string cmd;
	while (cin >> cmd) {
		if (cmd == "Add") {
			cin >> st.info.name >> st.info.id >> st.score;
			mp.insert(MAP_STD::value_type(st.score, st.info));
		}
		else if (cmd == "Query") {
			int score;
			cin >> score;
			MAP_STD::iterator p = mp.lower_bound(score);
			if (p != mp.begin()) {
				--p;
				score = p->first; //比查询分数低的最高分
				MAP_STD::iterator maxp = p;
				int maxid = p->second.id;
				for (; p != mp.begin() && p->first == score; --p) {
					if (p->second.id > maxid) {
						maxp = p;
						maxid = p->second.id;
					}
				}
				if (p->first == score) {
					if (p->second.id > maxid) {
						maxp = p;
						maxid = p->second.id;
					}
				}
				cout << maxp->second.name << "" << maxp->second.id << ""
					<< maxp->first << endl;
			}
			else
				cout << "Nobody" << endl;
		}
	}
	return 0;

}*/
//关联容器适用于不断地要去更新数据，要不断地在数据里面查询，都很快
//mpinsert(MAP_STD::type(st.score,st.info));
//mp.insert(make_pair(st.score,st.info));
/*
map里面不能够有两个元素，他的first成员变量是相同的
map的模板和multimap是一样的
map的[]成员函数
若pairs为map模板类的对象
pairs[key]
返回对关键字等于key的元素的值的引用，如果没有就插入一个关键字为key的元素，其
值用无参构造函数初始化

eg  
map<int,double> pairs;
pairs[50]=5;
会修改pairs中关键字为50的元素，其值变成5
*/
//map示例
/*#include<iostream>
#include<map>
using namespace std;
template<class Key,class Value>
ostream & operator<<(ostream &o, const pair<Key, Value>&p)
{
	o << "(" << p.first << "," << p.second << "";
	return o;
}
int main() {
	typedef map<int, double, less<int>>mmid;
	mmid pairs;
	cout << "1(" << pairs.count(15) << endl;
	pairs.insert(mmid::value_type(20, 9.3));
	mmid::iterator i;
	cout << "3(";
	for (i = pairs.begin(); i != pairs.end(); ++i)
		cout << *i << ",";
	cout << endl;
	cout << "4(";
	int n = pairs[40];
	for (i = pairs.begin(); i != pairs.end(); ++i)
		cout << *i << ",";
	cout << endl;
	cout << "5(";
	pairs[15] = 6.28;//把关键字为15的元素的值改为6.28
	for (i = pairs.begin(); i != pairs.end(); i++)
		cout << *i << ",";
	return 0;

}*/


