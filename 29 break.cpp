# include <iostream>
using namespace std;
/*
break���
����:�������� ѡ��ṹ ���� ѭ���ṹ
breakʹ�õ�ʱ����
1.������switch��������У���������ֹcase������switch
2.������ѭ������У�������������ǰ��ѭ�����
3.������Ƕ��ѭ���У�����������ڲ�ѭ�����
*/
int main29()
{

	//1����switch �����ʹ��break
	cout << "��ѡ������ս�������Ѷȣ�" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;

	int num = 0;

	cin >> num;

	switch (num)
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	}

	//2����ѭ����䣨while��for������break
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			cout << "i=5������ѭ�����" << endl;
			break; //����ѭ�����
		}
		cout << i << endl;
	}

	//3.��Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ��
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "*" << " "; //10��5��
		}
		cout << endl;
	}

	system("pause");

	return 0;
}