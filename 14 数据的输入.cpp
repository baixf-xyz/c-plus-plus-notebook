# include <iostream>
# include <string>
using namespace std;

int main14()
{
	//1.整型
	int a = 0;
	cout << "请给整型量a赋值：" << endl;
	cin >> a;
	cout << "整型量a赋值后结果:" << a << endl;

	//2.浮点型
	float b = 3.14f;
	cout << "请给浮点型量a赋值：" << endl;
	cin >> b;
	cout << "浮点型b赋值后结果:" << b << endl;

	//3.字符型
	char c = 'z';
	cout << "请给字符型量c赋值：" << endl;
	cin >> c;
	cout << "字符型c赋值后结果:" << c << endl;

	//4.字符串型
	string d = "abcdefg";
	cout << "请给字符串型量d赋值：" << endl;
	cin >> d;
	cout << "字符型d赋值后结果:" << d << endl;

	//5.布尔类型
	bool e = false;
	cout << "请给布尔型量e赋值：" << endl;
	cin >> e; //bool类型 只要是非0的值都代表真
	cout << "布尔型e赋值后结果:" << e << endl;

	cout << "Hello World" << endl;
	system("pause");

	return 0;
}