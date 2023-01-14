#include<iostream>
using namespace std;

//如果我们传入了数据，就用自己的数据；如果没有就用默认值
//语法： 返回值类型 函数名 （形参=默认值）
int func(int a, int b = 10, int c = 10) {
	return a + b + c;
}

//注意事项：
//1. 如果某个位置参数已经有默认值，那么从这个位置往后，从左向右，必须都要有默认值
// int func1(int a, int b , int c = 10) 
//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
//声明和实现只能有一个有默认参数
int func2(int a = 10, int b = 10);
int func2(int a, int b) {
	return a + b;
}

int main67() {

	cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;
	cout << "ret = " << func2() << endl;


	system("pause");

	return 0;
}