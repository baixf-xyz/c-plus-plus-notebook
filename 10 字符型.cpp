#include<iostream>
using namespace std;
int main10()
{
	//1.�ַ��ͱ���������ʽ
	char ch1 = 'a';
	cout << "ch1=" << ch1 << endl;

	//2.�ַ��ͱ�����ռ�ڴ��С
	cout << "char�ַ��ͱ���ch1��ռ���ڴ��С�ռ䣺" << sizeof(ch1) << endl;

	//3.�ַ��ͱ�����������
	//char ch2="b";//�����ַ��ͱ����ǲ���ʹ��˫���ţ�Ҫ�õ�����
	// char ch2='abcdef';//�����ַ��ͱ���ʱ����������ֻ����һ���ַ�

	//4.�ַ��ͱ�����ӦASCII����
	cout << "�ַ��ͱ���ch1��ӦASCII����" << (int)ch1 << endl;
	cout << "�ַ�A��ӦASCII����" << (int)'A' << endl;

	system("pause");
	return 0;
}