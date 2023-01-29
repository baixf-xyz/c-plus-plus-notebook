#include<iostream>
using namespace std;
class Person
{
public:
	//形参名age
	Person(int age)
	{
		//this指针指向的是被调用的成员函数所属的对象
		this->age = age;
	}
	//若写为Person PersonAddAge(Person& p) 则为值传递
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;

		//this是指向p2的指针，而*this指向的是p2这个对象
		return *this;
	}
	
	//成员属性age
	int age;
};
//1.解决名称冲突
void test01() {
	Person p1(18);
	cout << "p1的年龄：" << p1.age << endl;
}

//2.返回对象本身用* this
void test02() {
	Person p1(18);
	Person p2(10);
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄：" << p2.age << endl;
}

int main86()
{
	test01();
	test02();
	system("pause");
	return 0;
}