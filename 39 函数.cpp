# include <iostream>
using namespace std;
/*
函数作用：将一段经常使用的代码封装起来，减少重复代码
一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能。
1.返回值类型 ：一个函数可以返回一个值。在函数定义中
2.函数名：给函数起个名称
3.参数列表：使用该函数时，传入的数据
4.函数体语句：花括号内的代码，函数内需要执行的语句
5.return表达式： 和返回值类型挂钩，函数执行完后，返回相应的数据
*/
//函数定义：num1,num2并没有真实的值，是形参
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main39()
{
	int a = 10;
	int b = 10;
	//main()函数中去调用add()函数
	//a,b为实参
	int sum = add(a, b);
	cout << "add(a,b)=" << add(a, b) << endl;
	cout << "sum=" << sum << endl;
	system("pause");

	return 0;
}