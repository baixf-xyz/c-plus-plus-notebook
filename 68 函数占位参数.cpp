#include<iostream>
using namespace std;

//函数占位参数 ，占位参数也可以有默认参数
//返回值类型 函数名（数据类型）
//占位参数 还可以有默认参数
//e.g.void func(int a, int = 10)

void func(int a, int) {
	cout << "this is func" << endl;
}

int main68() {

	func(10, 10); //占位参数必须填补才能调用

	system("pause");

	return 0;
}