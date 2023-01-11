# include "swap_f.h"
# include<iostream>
using namespace std;
//函数的定义
void swap_f(int num1, int num2)
{
	cout << "交换前的数字：" << endl;
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后的数字：" << endl;
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;

	return;
}