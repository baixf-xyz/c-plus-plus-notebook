# include <iostream>
# include <string>
using namespace std;

int main14()
{
	//1.����
	int a = 0;
	cout << "���������a��ֵ��" << endl;
	cin >> a;
	cout << "������a��ֵ����:" << a << endl;

	//2.������
	float b = 3.14f;
	cout << "�����������a��ֵ��" << endl;
	cin >> b;
	cout << "������b��ֵ����:" << b << endl;

	//3.�ַ���
	char c = 'z';
	cout << "����ַ�����c��ֵ��" << endl;
	cin >> c;
	cout << "�ַ���c��ֵ����:" << c << endl;

	//4.�ַ�����
	string d = "abcdefg";
	cout << "����ַ�������d��ֵ��" << endl;
	cin >> d;
	cout << "�ַ���d��ֵ����:" << d << endl;

	//5.��������
	bool e = false;
	cout << "�����������e��ֵ��" << endl;
	cin >> e; //bool���� ֻҪ�Ƿ�0��ֵ��������
	cout << "������e��ֵ����:" << e << endl;

	cout << "Hello World" << endl;
	system("pause");

	return 0;
}