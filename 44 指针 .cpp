# include <iostream>
using namespace std;
//ָ�����һ����ַ
int main44()
{
	//1��ָ��Ķ���
	int a = 10; //�������ͱ���a

	//ָ�붨���﷨�� �������� * ������ ;
	int* p;

	//ָ�������ֵ
	p = &a; //ָ��ָ�����a�ĵ�ַ
	cout << "a�ĵ�ַΪ��" << & a << endl; //��ӡ����a�ĵ�ַ
	cout << "p�ĵ�ַΪ��" << p << endl;  //��ӡָ�����p

	//2��ָ���ʹ��
	//ͨ��*����ָ�����ָ����ڴ�
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");

	return 0;
}