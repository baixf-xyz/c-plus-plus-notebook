# include <iostream>
using namespace std;

int main18()
{
	//�߼������
	int a = 10;
	int b = 2;

	//�߼���
	cout << !a << endl;//��C++�� ����0 ��Ϊ��
	cout << !!a << endl;

	//�߼���
	cout << (a && b) << endl;
	cout << (!a && b) << endl;
	cout << (!a && !b) << endl;
	cout << (a && !b) << endl;
	cout << (a and !b) << endl;

	//�߼���
	cout << (a || b) << endl;
	cout << (!a || b) << endl;
	cout << (!a || !b) << endl;
	cout << (a || !b) << endl;
	cout << (a or !b) << endl;


	system("pause");

	return 0;
}