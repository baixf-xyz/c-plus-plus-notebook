#include<iostream>
using namespace std;
int main11()
{
	//转义字符

	//换行符
	cout << "Hello World\n" << endl;

	//反斜杠
	cout << "\\" << endl;

	//水平制表符:整齐的输出数据，8个空格
	cout << "aaa" << "hello" << "world" << endl;
	cout << "aaaaaa\t" << "hello\t" << "world\t" << endl;
	cout << "aaa\thello\tworld\t" << endl;

	system("pause");
	return 0;
}