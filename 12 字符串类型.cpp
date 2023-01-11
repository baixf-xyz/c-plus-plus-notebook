# include <iostream>
using namespace std;
#include<string>//C++风格字符串，已不需要添加

int main12()
{
	//1.C风格字符串
	/*注意事项
	1.char字符串名后面要加一个 []
	2.等号后面要用 双引号("") 将字符串包含起来
	*/

	char str[] = "Hello World";
	cout << "C风格字符串str[]:" << str << endl;

	//2.C++风格字符串
	//包含一个头文件
	string str2 = "Hello World";
	cout << "C++风格字符串str2:" << str2 << endl;

	system("pause");

	return 0;
}