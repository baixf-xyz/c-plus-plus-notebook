# include <iostream>
using namespace std;

int main24()
{
	int num = 100;
	while (num < 1000)
	{
		int bai = num / 100;
		int shi = num / 10 % 10;
		int ge = num % 10;
		if (bai * bai * bai + shi * shi * shi + ge * ge * ge == num)
		{
			cout << num << endl;
		}
		num++;
	}
	cout << "Hello World" << endl;
	system("pause");

	return 0;
}