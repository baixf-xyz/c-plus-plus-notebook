#include<iostream>
using namespace std;

//���ؾֲ���������
int& test01() {
	int a = 10; //�ֲ����� �����ջ�� �����ź������ý����ͷ�
	return a;
}

//���ؾ�̬��������
int& test02() {
	static int a = 20;
	return a;
}

int main64() {

	//���ܷ��ؾֲ�����������
	int& ref = test01();
	cout << "ref = " << ref << endl;//��һ�λ������ȷ�𰸣���Ϊ���������˱���
	cout << "ref = " << ref << endl;//�ڶ�����������ǷǷ�����

	//�����������ֵ����ô���뷵������
	int& ref2 = test02();//ref�Ǻ�������ֵa�ı���
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;//���ʾ��Ƕ�test02�ķ���ֵ����һ�θ�ֵ����

	//cout << "a = " << a << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}