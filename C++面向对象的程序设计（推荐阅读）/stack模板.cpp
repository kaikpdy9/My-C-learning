#include<vector>
#include<iostream>
using namespace std;
template<typename T>class Stcak :public vector<T> {
public:
	void push(T const&e) { insert(size(), e); }
	T pop() { return remove(size() - 1); }
	T& top() { return (*this)[size() - 1]; }
};