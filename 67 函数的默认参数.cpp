#include<iostream>
using namespace std;

//������Ǵ��������ݣ������Լ������ݣ����û�о���Ĭ��ֵ
//�﷨�� ����ֵ���� ������ ���β�=Ĭ��ֵ��
int func(int a, int b = 10, int c = 10) {
	return a + b + c;
}

//ע�����
//1. ���ĳ��λ�ò����Ѿ���Ĭ��ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
// int func1(int a, int b , int c = 10) 
//2. �������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a = 10, int b = 10);
int func2(int a, int b) {
	return a + b;
}

int main67() {

	cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;
	cout << "ret = " << func2() << endl;


	system("pause");

	return 0;
}