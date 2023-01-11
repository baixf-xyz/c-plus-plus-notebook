# include <iostream>
using namespace std;
//实现两个数字交换
void swap01(int num1, int num2)
{
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
	cout << num1 << endl;//20
	cout << num2 << endl;//1
}
void swap02(int *num1, int *num2) //这里的形参定义方式理解成指针的定义
{
	int tmp = *num1;//解地址为变量值
	*num1 = *num2;//解地址为变量值
	*num2 = tmp;
	cout << *num1 << endl;//20
	cout << *num2 << endl;//1
}
int main49()
{
	//指针和函数
	//1.值传递：不会改变实参
	int a = 1;
	int b = 10;
	swap01(a, b);
	cout << a << endl;//1
	cout << b << endl;//20

	//2.地址传递：会改变实参
	//把a、b变量的地址传了过去
	swap02(&a, &b);
	cout << a << endl;//20
	cout << b << endl;//1

	system("pause");

	return 0;
}