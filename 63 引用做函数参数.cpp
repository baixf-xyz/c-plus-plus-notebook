#include<iostream>
using namespace std;
//1. ֵ����
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//2. ��ַ����
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3. ���ô���
void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main63(){

	int a = 10;
	int b = 20;

	mySwap01(a, b);
	cout << "a:" << a << " b:" << b << endl;

	a = 10;
	b = 20;

	mySwap02(&a, &b);//���������ݵ�ַ����ָ������
	cout << "a:" << a << " b:" << b << endl;

	a = 10;
	b = 20;

	mySwap03(a, b);//���ô��� ʵ�λ������βθı�
	cout << "a:" << a << " b:" << b << endl;

	system("pause");

	return 0;
}
