#include<iostream>
using namespace std;

//数据类型存在的意义：给变量分配合适的空间，避免资源浪费
//变量创建语法：数据类型 变量名 = 变量初始值

int main7()
{

	//整型：区别所占用的空间不同，表示的数值范围不同
	//1.short(短整型) (-32768-32767)
	short num1 = 10;
	//2.int(整型)
	int num2 = 10;
	//3.long(长整型)
	int num3 = 10;
	//4.long long(长长整型)
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	system("pause");

	return 0;
}