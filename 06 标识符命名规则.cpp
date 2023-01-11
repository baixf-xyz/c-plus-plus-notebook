#include<iostream>
using namespace std;

//建议：给变量起名时，最好见名知意
/*
标识符命名规则：
1.标识符不能是关键字
2.标识符只能由 字母、数字、下划线 组成
3.标识符第一个字符必须为字母或者下划线
4.标识符中字母区分大小写
*/

int main6()
{
	//1.标识符不能是关键字
	// int int =1;
	//2.标识符只能由 字母、数字、下划线 组成
	int abc = 4;
	int a_bc = 0;
	int _abc = 10;

	//3.标识符第一个字符必须为字母或者下划线
	// int 12abc=100;
	
	//4.标识符中字母区分大小写
	int a = 20;
	int A = 30;
	cout << "a=" << a << "\n" << "A=" << A << endl;

	system("pause");
	return 0;
}