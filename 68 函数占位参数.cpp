#include<iostream>
using namespace std;

//����ռλ���� ��ռλ����Ҳ������Ĭ�ϲ���
//����ֵ���� ���������������ͣ�
//ռλ���� ��������Ĭ�ϲ���
//e.g.void func(int a, int = 10)

void func(int a, int) {
	cout << "this is func" << endl;
}

int main68() {

	func(10, 10); //ռλ������������ܵ���

	system("pause");

	return 0;
}