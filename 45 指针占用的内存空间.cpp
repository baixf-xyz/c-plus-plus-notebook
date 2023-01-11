# include <iostream>
using namespace std;

//所有指针类型在32位操作系统下是4个字节
//所有指针类型在64位操作系统下是8个字节
int main45()
{
	int a = 10;
	int* p;
	p = &a; //指针指向数据a的地址
	//int* p = &a;/指针定义其他方式，但是不好理解，拆分为以上两步即可

	cout << "*p:" << * p << endl; //* 解引用
	cout << "sizeof(p):" << sizeof(p) << endl;
	cout << "sizeof(char*):" << sizeof(char*) << endl;
	cout << "sizeof(float*):" << sizeof(float*) << endl;
	cout << "sizeof(double*):" << sizeof(double*) << endl;

	system("pause");

	return 0;
}