#include<iostream>
using namespace std;

int main8()
{
	//���ͣ�short(2) int(4) long(4) long long(8) 
	//��������sizeof�����������ռ���ڴ��С
	//�﷨��sizeof(��������/����)

	short num1 = 10;
	int num2 = 10;
	int num3 = 10;
	long long num4 = 10;

	cout << "shortռ���ڴ�ռ��С��" << sizeof(num1) << endl;
	cout << "shortռ���ڴ�ռ��С��" << sizeof(short) << endl;
	cout << "intռ���ڴ�ռ��С��" << sizeof(num2) << endl;
	cout << "longռ���ڴ�ռ��С��" << sizeof(num3) << endl;
	cout << "long longռ���ڴ�ռ��С��" << sizeof(num4) << endl;

	//���ۣ�short < int <=long <=long long

	system("pause");

	return 0;
}