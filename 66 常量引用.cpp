#include<iostream>
using namespace std;
//����ʹ�õĳ�����ͨ�����������β�,��ֹ�����

//��ӡ���ݺ���������ϣ�����޸ģ����� �������ò��� �����޸ģ�ֵ����ռ�ռ䣩
void showValue(const int& v) {
	//v += 10;v=1000;//���󣬳����������޸�
	cout << v << endl;
}

int main66() {

	//int& ref = 10; //�������ñ�����Ҫһ���Ϸ����ڴ�ռ�
	
	//����const�Ϳ����ˣ��������Ż����롾���������󹦡�
	//int temp = 10; const int& ref = temp;
	const int& ref = 10;

	//ref = 100;  //����const�󲻿����޸ı���
	cout << ref << endl;

	//���������ó������÷�ֹ������޸�ʵ��
	int a = 10;
	showValue(a);

	system("pause");

	return 0;
}