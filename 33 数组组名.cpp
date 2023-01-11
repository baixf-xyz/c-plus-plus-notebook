# include <iostream>
using namespace std;
/*
一维数组名称的用途：
1.可以统计整个数组在内存中的大小
2.可以获取数组在内存中的首地址
*/
int main33()
{
	int arr1[] = { 1,2,3,4,5 };
	cout << "整个数组占用内存空间大小：\t"  << sizeof(arr1) << endl;//统计整个数组在内存中的大小
	cout << "每个元素占用内存空间大小：\t" << sizeof(arr1[0]) << endl;//统计数组中每一个元素在内存中的大小
	cout <<  "数组中元素的个数：\t" << sizeof(arr1) / sizeof(arr1[0]) << endl;//
	cout << "数组首地址：\t" << arr1 << endl;//数组在内存中的首地址
	cout << "数组首地址：\t" << (int)arr1 << endl;//十进制
	cout << "数组中第一个元素地址：\t" << &arr1[0] << endl;
	cout << "数组中第一个元素地址：\t" << (int) & arr1[0] << endl;//十进制
	cout << "数组中第二个元素地址：\t" << (int)&arr1[1] << endl;//十进制

	//数组名是一个常量，不可以进行赋值操作
	//arr1 = 100; //错误信息：同前面宏常量错误“表达式必须时刻修改的左值”

	system("pause");

	return 0;
}