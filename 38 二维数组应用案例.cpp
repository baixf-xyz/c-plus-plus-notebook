# include <iostream>
# include <string>
using namespace std;

int main38()
{
	int scores[][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};

	string name[3] = { "����","����","����" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << "��" << i+1 << "��ͬѧ:" << name[i] << "���ܳɼ���" << sum << endl;
	}
	system("pause");

	return 0;
}