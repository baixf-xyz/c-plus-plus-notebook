#include<iostream>
using namespace std;

//�������ص�������
//1.����������Ҫ��������ͬһ����������
//2.����������ͬ
//3.�����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
void func()
{
	cout << "func �ĵ��ã�" << endl;
}
void func(int a)
{
	cout << "func (int a) �ĵ��ã�" << endl;
}
void func(double a)
{
	cout << "func (double a)�ĵ��ã�" << endl;
}
void func(int a, double b)
{
	cout << "func (int a ,double b) �ĵ��ã�" << endl;
}
void func(double a, int b)
{
	cout << "func (double a ,int b)�ĵ��ã�" << endl;
}

//ע�������������ֵ��������Ϊ����������������
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)�ĵ��ã�" << endl;
//}


int main69() {

	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 10);

	system("pause");

	return 0;
}