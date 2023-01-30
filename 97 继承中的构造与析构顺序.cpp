#include<iostream>
using namespace std;

//继承中构造和析构的顺序
class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
};
class Son:public Base
{
public:
	Son()
	{
		cout << "Son的构造函数" << endl;
	}
	~Son()
	{
		cout << "Son的析构函数" << endl;
	}
};
void test01() {
	//Base b;

	//创建子类对象，因此构造、析构顺序：base->son  ->  son->base
	Son s;
}
int main97()
{
	system("pause");
	return 0;
}