#include<iostream>
using namespace std;

//对象的初始化和清理
//1.构造函数 进行初始化操作
class Person
{
public:
	//1.1、构造函数
	//没有返回值，不用写void
	//函数名 与类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象的时候，构造函数会自动调用，而且只调用一次
	Person()
	{
		cout << "Person的构造函数调用" << endl;
	}
	//1.2、析构函数 进行清理操作
	//没有返回值 不写void
	//函数名和类名相同 在名称前面加 ~
	//析构函数不可以有参数的，不可以发生重载
	//对象在销毁前 会自动调用析构函数，而且只会调用一次
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

};

void test03()
{
	Person person;
}

int main78() {

	//test03(); 构造函数 析构函数均会出现 原因是因为在main函数调用了并且释放销毁了对象
	//Person p; 只出现构造函数 原因是因为main函数并未结束 创建的对象还未销毁 在return0的那一刻 终端会显示析构

	system("pause");

	return 0;
}