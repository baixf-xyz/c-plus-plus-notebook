#include<iostream>
using namespace std;

int main62() {

	int a = 10;
	int& b = a;//���� ���ʣ������
	//int &b; //�Ǵ���ģ����ñ����ʼ��
	//int &b=c;//�Ǵ���ģ�����һ����ʼ�� �Ͳ�������ȥ����

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "&a = " << &a << endl;
	cout << "&b = " << &b << endl;

	system("pause");

	return 0;
}