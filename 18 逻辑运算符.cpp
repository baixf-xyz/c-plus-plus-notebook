# include <iostream>
using namespace std;

int main18()
{
	//逻辑运算符
	int a = 10;
	int b = 2;

	//逻辑非
	cout << !a << endl;//在C++中 除了0 都为真
	cout << !!a << endl;

	//逻辑与
	cout << (a && b) << endl;
	cout << (!a && b) << endl;
	cout << (!a && !b) << endl;
	cout << (a && !b) << endl;
	cout << (a and !b) << endl;

	//逻辑或
	cout << (a || b) << endl;
	cout << (!a || b) << endl;
	cout << (!a || !b) << endl;
	cout << (a || !b) << endl;
	cout << (a or !b) << endl;


	system("pause");

	return 0;
}