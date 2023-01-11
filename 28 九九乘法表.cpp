# include <iostream>
using namespace std;

int main28()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << j * i << "\t";
		}
		cout << endl;
	}
	cout << "Hello World" << endl;
	system("pause");

	return 0;
}