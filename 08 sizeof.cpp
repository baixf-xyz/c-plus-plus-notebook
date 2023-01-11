#include<iostream>
using namespace std;

int main8()
{
	//整型：short(2) int(4) long(4) long long(8) 
	//可以利用sizeof求出数据类型占用内存大小
	//语法：sizeof(数据类型/变量)

	short num1 = 10;
	int num2 = 10;
	int num3 = 10;
	long long num4 = 10;

	cout << "short占用内存空间大小：" << sizeof(num1) << endl;
	cout << "short占用内存空间大小：" << sizeof(short) << endl;
	cout << "int占用内存空间大小：" << sizeof(num2) << endl;
	cout << "long占用内存空间大小：" << sizeof(num3) << endl;
	cout << "long long占用内存空间大小：" << sizeof(num4) << endl;

	//结论：short < int <=long <=long long

	system("pause");

	return 0;
}