#include<iostream>
using namespace std;

//静态成员变量&&静态成员函数
	//静态成员变量：
	//1.所有对象都共享一份数据
	//2.编译阶段就分配内存
	//3.类内声明 类外初始化
	//静态成员函数：
	//1.所有对象共享同一个函数
	// 2.静态成员函数只能访问静态成员变量
class Person
{
public:
	static int m_A;
	int m_B;

	static void func() {
		cout << "static void func函数调用" << endl;
	}
	static void func02() {
		int m_A = 100;//静态成员函数可以访问静态成员变量
		//m_B = 200; 静态成员函数不可以访问非静态成员变量
		cout << "static void func函数调用" << endl;
	}

	//静态成员变量也是有访问权限的
private:
	static int m_B;
	static void func03() {
		cout << "静态成员函数" << endl;
	}
};

int Person::m_A=100;
int Person::m_B = 200;

void test01()
{
	Person p;
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << p2.m_A << endl;

	//100？200？->200
	cout << p.m_A << endl;
}
void test02() {
	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问形式

	//1.通过对象进行访问
	Person p;
	cout << p.m_A << endl;

	//2.通过类名进行访问
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl; private私有成员变量 类内可以访问 类外不可以访问

}

//静态变量函数也是两种调用方式
void test03() {
	//1.通过对象进行访问
	Person p;
	p.func();

	//2.通过类名进行访问
	Person::func();
	//Person::func03(); 报错 私有作用域下的 类外访问不到私有静态成员函数
}
int main84() {
	test01();
	test02();
	system("pause");
	return 0;
}