#include<iostream>
using namespace std;

//默认情况下，输出一个小数，会显示出6位有效数字
int main9()
{
	//1.单精度 float
	float f1 = 3.14; //会多做一步转换
	float f2 = 3.14f;

	//2.双精度 double
	double d1 = 3.14;

	//统计占用空间大小
	cout << "float f1占用空间:" << sizeof(f1) << endl; //4
	cout << "float f2占用空间:" << sizeof(f2) << endl; //4
	cout << "float d1占用空间:" << sizeof(d1) << endl; //8

	//科学计数法
	float f3 = 3e2;
	float f4 = 3e-2;

	cout << "float f3:" << f3 << endl;
	cout << "float f4:" << f4 << endl;

	system("pause");
	return 0;
}