#include<iostream>
using namespace std;
int main10()
{
	//1.字符型变量创建方式
	char ch1 = 'a';
	cout << "ch1=" << ch1 << endl;

	//2.字符型变量所占内存大小
	cout << "char字符型变量ch1所占用内存大小空间：" << sizeof(ch1) << endl;

	//3.字符型变量常见错误
	//char ch2="b";//创建字符型变量是不能使用双引号，要用单引号
	// char ch2='abcdef';//创建字符型变量时，单引号内只能有一个字符

	//4.字符型变量对应ASCII编码
	cout << "字符型变量ch1对应ASCII编码" << (int)ch1 << endl;
	cout << "字符A对应ASCII编码" << (int)'A' << endl;

	system("pause");
	return 0;
}