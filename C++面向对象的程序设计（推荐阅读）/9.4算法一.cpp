/*
STL中的算法分类可以分为以下七类
1.不变序列算法
2.变值算法 
3.删除算法
4.变序算法
5.排序算法
6.有序区间算法
7.数值算法

大多数算法都有两个版本的
多用==判断是否相等
或者判断小于，大于形式、

以下有两个版本的min_element
itertor min_element(iterator first,iterator last);
itertor min_element(iterator first,iterator last,Pred op)//这个op可以用自己定义的op，如果
是自己定义的话，那么选择就可能有多种多样
*/


/*
不变序列算法

该算法不会修改算法所作用的容器或对象
适用于顺序容器和关联容器
时间复杂度都是O（n）

算法的名称
min                 求两个对象中较小的       
max                 同理            
min_elelment        求区间的最小值             !!!比较器可以自定义
max_element         求区间的最大值
for_each            对区间的每个元素都做某种操作哦
count
count_if
find
find_if
find_end
find_first_of
adjacent_find
search              
*/

/*#include<iostream>
#include<algorithm>
using namespace std;
class A {
public:
	int n;
	A(int i):n(i){}
};
bool operator<(const A&a1, const A&a2) {
	cout << "<called" << endl;
	if (a1.n == 3 && a2.n == 7)
		return true;
	return false;
}
int main() {
	A aa[] = { 3,5,7,2,1 };
	cout << min_element(aa, aa + 5)->n << endl;
	cout << max_element(aa, aa + 5)->n << endl;
	return 0;

}*/

/*
变值算法

该算法会修改源区间或目标区间元素的值
值被修改的那个区间，不可以是属于关联容器的（因为关联容器的序列是排序好了的）

for_each
copy           复制一个区间到别处
copy_backwark  复制一个区间到别处，但目标区间是从后往前修改
transform      将一个区间的元素变形后拷贝到另一个区间
swap_ranges    交换两个 区间的内容
fill           用某个值去填充区间
fill_n         用某个操作的结果去填充n个元素
replace         替换
  
*/

/*#include<vector>
#include<iostream>
#include<numeric>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
class CLessThen9 {
public:
	bool operator()(int n) { return n < 9;}
};
void outputSquare(int value) { cout << value * value << ""; }
int calculateCube(int value) { return value * value*value; }

int main() {
	const int SIZE = 10;
	int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a2[] = { 100,2,8,1,50,3,8,9,10,2 };
	vector<int>v(a1, a1 + SIZE);
	ostream_iterator<int>output(cout, " ");
	random_shuffle(v.begin(), v.end()); //打牌程序就要写这个
	cout << endl << "1)";
	copy(v.begin(), v.end(), output);
	copy(a2, a2 + SIZE, v.begin());
	cout << endl << "2(";
	cout << count(v.begin(), v.end(), 8);
	cout << endl << "3(";
	cout << count_if(v.begin(), v.end(), CLessThen9()); //!!!类加上()就是对象了 即替代了op（e）=ture（即考察这个）
	cout << endl << "4(";
	cout << *(min_element(v.begin(), v.end()));
	cout << endl << "5(";
	cout << *(max_element(v.begin(), v.end()));
	cout << endl << "6(";
	cout << accumulate(v.begin(), v.end(), 0);
	cout << endl << "7)";
	for_each(v.begin(), v.end(), outputSquare);
	vector<int>cubes(SIZE);
	transform(a1, a1 + SIZE, cubes.begin(), calculateCube);
	cout << endl << "8(";
	copy(cubes.begin(), cubes.end(), output);
	return 0;


}*/
//为什么copy可以向上面的方法呢么用呢
/*
copy函数模板

copy的源代码
template<class _II,class _OI>   这个是迭代器
inline _OI copy(_II_F,_II_L,_OI_X)
{
   for（；_F！=_L;++_X,++_F)
   *_X=*_F;
   return (_X);
}
*/
/*#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;
int main() {
	int a[4] = { 1,2,3,4 };
	My_ostream_iterator<int>oit(cout, "*");
	copy(a, a + 4, oit);
	ofstream oFile("text.texxt", ios::out);
	My_ostream_iterator<int>oitf(oFile, "*");
	copy(a, a + 4, oitf);
	oFile.close();
	return 0;
}
   太难了  放弃了
*/



















