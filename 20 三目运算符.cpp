# include <iostream>
using namespace std;
/*
���ã� ͨ����Ŀ�����ʵ�ּ򵥵��ж�
�﷨�����ʽ1 ? ���ʽ2 �����ʽ3
���ͣ�
������ʽ1��ֵΪ�棬ִ�б��ʽ2�������ر��ʽ2�Ľ����
������ʽ1��ֵΪ�٣�ִ�б��ʽ3�������ر��ʽ3�Ľ����
*/
int main20()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c = " << c << endl;

	//C++����Ŀ��������ص��Ǳ���,���Լ�����ֵ

	(a > b ? a : b) = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	system("pause");

	return 0;
}