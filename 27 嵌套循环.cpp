# include <iostream>
using namespace std;

//��ӡ10��10��*

int main27()
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*\t";
		}
		cout << endl;
	}

	cout << "--------------" << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << i << "*\t"; //���Ծֲ�����������Ӱ�첢���ᱨ���ͽ�ԭ��
		}
		cout << endl;
	}



	cout << "Hello World" << endl;
	system("pause");

	return 0;
}