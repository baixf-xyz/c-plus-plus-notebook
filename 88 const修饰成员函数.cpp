#include<iostream>
using namespace std;
//常函数
class Person
{
public:
	
	void showPerson() const
	{
		//this指针的本质是一个指针常量 指针的指向是不可以修改的
		//Person * const this;
		//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
		//this->m_A = 100;
		this->m_B = 100;
		//this=NULL;this指针不可以修改指向 但可以修改值
	}
	void func() { this->m_A = 100; }
	
	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值，机上关键字mutable
};
//常对象
void test02() {
	//在对象前面加上const，变成常对象
	const Person p2;
	//p2.m_A = 100;
	p2.m_B = 100;//m_B是一个特殊的值，在常对象下也可以修改

	//常对象只能调用常函数
	p2.showPerson();
	//p2.func();常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性
}

int main()
{
	test02();
	system("pause");
	return 0;
}