#include<iostream>
using namespace std;

int main62() {

	int a = 10;
	int& b = a;//引用 本质：起别名
	//int &b; //是错误的，引用必须初始化
	//int &b=c;//是错误的，引用一旦初始化 就不可以再去更改

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "&a = " << &a << endl;
	cout << "&b = " << &b << endl;

	system("pause");

	return 0;
}