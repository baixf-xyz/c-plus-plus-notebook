# include <iostream>
using namespace std;
//函数常见样式
//1、 无参无返
void test01()
{
	//void a = 10; //无类型不可以创建变量,原因无法分配内存
	cout << "this is test01" << endl;
	//test01(); 函数调用
}

//2、 有参无返
void test02(int a)
{
	cout << "this is test02" << endl;
	cout << "a = " << a << endl;
}

//3、无参有返
int test03()
{
	cout << "this is test03 " << endl;
	return 10;
}

//4、有参有返
int test04(int a, int b)
{
	cout << "this is test04 " << endl;
	int sum = a + b;
	return sum;
}
int main41()
{
	//无参无返
	test01();
	//有参无返
	test02(100);
	//无参有返
	int a = test03();
	//有参有返
	int b = test04(10, 20);

	cout << "Hello World" << endl;
	system("pause");

	return 0;
}