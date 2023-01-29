#include<iostream>
using namespace std;
//初始化列表
class Person {
public:

	//1.传统初始化操作
	//Person(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}

	//2.初始化列表初始化属性
	Person() : m_A(10), m_B(20), m_C(30)
	{
	}
	//或者：Person(int a,int b,int c) : m_A(a), m_B(b), m_C(c){}
public:
	int m_A;
	int m_B;
	int m_C;
};
void test01(){
	//Person p(10, 20, 30);
	Person p;
	cout << "m_A" << p.m_A;
	cout << "m_B" << p.m_B;
	cout << "m_C" << p.m_C;
}
int main82() {

	test01();

	system("pause");

	return 0;
}