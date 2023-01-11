# include <iostream>
using namespace std;

//打印10行10列*

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
			cout << i << "*\t"; //各自局部变量，互不影响并不会报错，就近原则
		}
		cout << endl;
	}



	cout << "Hello World" << endl;
	system("pause");

	return 0;
}