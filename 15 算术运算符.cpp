# include <iostream>
using namespace std;

int main15()
{
	//加、减、乘、除、取模 以及 前、后置 递增、递减
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //两个整型相除结果依然是整数，0不能做除数
	cout << a1 % b1 << endl; //取模运算，除数不能为0

	//总结：前置递增先对变量进行++，再计算表达式；后置递增相反
	cout << "a1++:\t" << a1++ << endl;//后置递增
	cout << "a1:\t" << a1 << endl;
	cout << "++a1:\t" << ++a1 << endl;//前置递增
	cout << "a1:\t" << a1 << endl;
	cout << "a1--:\t" << a1-- << endl;
	cout << "a1:\t" << a1 << endl;
	cout << "--a1:\t" << --a1 << endl;
	cout << "a1:\t" << a1 << endl;


	double a2 = 0.5;
	double b2 = 0.25;
	double c2 = 0.3;
	cout << a2 / b2 << endl;
	cout << a2 / c2 << endl;
	//cout << a2 % b2 << endl; //两个小数不可以做取模运算，只有整型变量可以做取模运算


	cout << "Hello World" << endl;
	system("pause");

	return 0;
}