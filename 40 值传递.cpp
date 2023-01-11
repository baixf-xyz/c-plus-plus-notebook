# include <iostream>
using namespace std;
/*
值传递：
1.所谓值传递，就是函数调用时实参将数值传入给形参
2.值传递时，如果形参发生，并不会影响实参
*/
//如果函数不需要返回值，声明的时候可以写void
void swap(int num1,int num2)
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
int main40()
{
	int a = 10;
	int b = 20;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	//当我们做值传递的时候，函数的形参发生改变，并不会影响实参
	swap(a, b);
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	system("pause");
	return 0;
	//总结： 值传递时，形参是修饰不了实参的
}