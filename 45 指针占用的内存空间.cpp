# include <iostream>
using namespace std;

//����ָ��������32λ����ϵͳ����4���ֽ�
//����ָ��������64λ����ϵͳ����8���ֽ�
int main45()
{
	int a = 10;
	int* p;
	p = &a; //ָ��ָ������a�ĵ�ַ
	//int* p = &a;/ָ�붨��������ʽ�����ǲ�����⣬���Ϊ������������

	cout << "*p:" << * p << endl; //* ������
	cout << "sizeof(p):" << sizeof(p) << endl;
	cout << "sizeof(char*):" << sizeof(char*) << endl;
	cout << "sizeof(float*):" << sizeof(float*) << endl;
	cout << "sizeof(double*):" << sizeof(double*) << endl;

	system("pause");

	return 0;
}