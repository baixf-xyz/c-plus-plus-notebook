# include <iostream>
#include<ctime>
using namespace std;

int main23()
{
	/*
	����������
	seedû��srand�����޸ģ�����ÿ�ε��ö�����ͬ��seedֵ
	���м���ĵ�һ��α���������˸��������ͬ��
	�����Ҫÿ�ε��ö���һ��������ʹ��rand()֮ǰ
	��srand(time(NULL));�������ڵ�ʱ��������Ϊseed���м���α�������
	*/
	srand((unsigned int)time(NULL));//
	int num = rand() % 100;//����һ��0-99�������
	cout << num << endl;

	int val = 0;
	cout << "���ֵ:" << endl;
	cin >> val;
	while (val != num)
	{
		cout << "���²£�";
		cin >> val;
	}
	cout << "��ϲ�㣬�¶��ˣ�" << endl;
	system("pause");

	return 0;
}