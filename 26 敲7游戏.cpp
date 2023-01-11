# include <iostream>
using namespace std;

int main26()
{
	for(int i=1;i<=100;i++)
	{
		int ge = i % 10;
		int shi = i / 10 % 10;
		int bai = i / 100;
		if (ge == 7 || shi == 7 || bai == 7 || i % 7 == 0)
		{
			cout << i << "ÇÃ×À×Ó" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	cout << "Hello World" << endl;
	system("pause");

	return 0;
}