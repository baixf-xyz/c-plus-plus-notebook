#include<iostream>
using namespace std;

//Ĭ������£����һ��С��������ʾ��6λ��Ч����
int main9()
{
	//1.������ float
	float f1 = 3.14; //�����һ��ת��
	float f2 = 3.14f;

	//2.˫���� double
	double d1 = 3.14;

	//ͳ��ռ�ÿռ��С
	cout << "float f1ռ�ÿռ�:" << sizeof(f1) << endl; //4
	cout << "float f2ռ�ÿռ�:" << sizeof(f2) << endl; //4
	cout << "float d1ռ�ÿռ�:" << sizeof(d1) << endl; //8

	//��ѧ������
	float f3 = 3e2;
	float f4 = 3e-2;

	cout << "float f3:" << f3 << endl;
	cout << "float f4:" << f4 << endl;

	system("pause");
	return 0;
}