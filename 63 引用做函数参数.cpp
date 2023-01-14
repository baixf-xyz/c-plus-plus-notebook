#include<iostream>
using namespace std;
//1. 值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//2. 地址传递
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3. 引用传递
void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main63(){

	int a = 10;
	int b = 20;

	mySwap01(a, b);
	cout << "a:" << a << " b:" << b << endl;

	a = 10;
	b = 20;

	mySwap02(&a, &b);//传的是数据地址，用指针来接
	cout << "a:" << a << " b:" << b << endl;

	a = 10;
	b = 20;

	mySwap03(a, b);//引用传递 实参会随着形参改变
	cout << "a:" << a << " b:" << b << endl;

	system("pause");

	return 0;
}
