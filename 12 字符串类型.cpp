# include <iostream>
using namespace std;
#include<string>//C++����ַ������Ѳ���Ҫ���

int main12()
{
	//1.C����ַ���
	/*ע������
	1.char�ַ���������Ҫ��һ�� []
	2.�Ⱥź���Ҫ�� ˫����("") ���ַ�����������
	*/

	char str[] = "Hello World";
	cout << "C����ַ���str[]:" << str << endl;

	//2.C++����ַ���
	//����һ��ͷ�ļ�
	string str2 = "Hello World";
	cout << "C++����ַ���str2:" << str2 << endl;

	system("pause");

	return 0;
}