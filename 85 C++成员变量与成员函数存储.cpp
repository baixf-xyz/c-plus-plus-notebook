#include<iostream>
using namespace std;
//成员变量和成员函数是分开存储的

class Person
{
	int m_A;//非静态成员变量 属于类的对象上的
	static int m_B;//静态成员变量 不属于类对象上
	void func() {}//非静态成员函数 不属于类的对象上的
	static void func02(){} //静态成员函数 不属于类的对象上的
};

void test01() 
{
	Person p;

	//空对象占用内存空间大小：1（个字节）
	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "sizeof(p):" << sizeof(p) << endl;
}
void test02() {
	Person p;
	//带有一个int类型变量的对象占用内存空间大小：4（个字节）
	cout << "sizeof(p):" << sizeof(p) << endl;
}
void test03() {
	Person p;
	//带有一个int类型变量 一个static int类型变量 的对象占用内存空间大小：4（个字节）
	//static int 不属于类对象上
	cout << "sizeof(p):" << sizeof(p) << endl;
}
void test04() {
	Person p;
	//带有一个int类型变量 一个static int类型变量  一个非静态函数 的对象占用内存空间大小：4（个字节）
	//非静态函数 不属于类对象上
	cout << "sizeof(p):" << sizeof(p) << endl;
}

int main85() {

	system("pause");
	return 0;

}