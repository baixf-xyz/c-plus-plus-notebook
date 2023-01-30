#include<iostream>
using namespace std;

//继承方式

//公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1
{
public:
	void func() 
	{
		m_A = 10; //父类中的公共权限成员到子类中依然是公共权限
		m_B = 20;//父类中的保护权限成员到子类中依然是保护权限
		//m_C = 30;//父类中的私有权限成员到子类中访问不到
	}
};
void test01()
{
	Son1 s1;
	cout << s1.m_A << endl;
	//cout << s1.m_B << endl;//到了son1中是保护权限 类外不可以访问
}
//保护继承
class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 10; //父类中的公共权限成员到子类中是保护权限
		m_B = 20;//父类中的保护权限成员到子类中也是保护权限
		//m_C = 30;//父类中的私有权限成员到子类中访问不到
	}
};
void test02()
{
	Son2 s2;
	//cout << s2.m_A << endl;//到了son2中是保护权限 类外不可以访问
	//cout << s1.m_B << endl;//到了son2中是保护权限 类外不可以访问
}
//保护继承
class Son3 :private Base1
{
public:
	void func()
	{
		m_A = 10; //父类中的公共权限成员到子类中是私有权限
		m_B = 20;//父类中的保护权限成员到子类中也是私有权限
		//m_C = 30;//父类中的私有权限成员到子类中访问不到
	}
};
void test03()
{
	Son3 s3;
	//cout << s3.m_A << endl;//到了son2中是私有成员 类外不可以访问
	//cout << s3.m_B << endl;//到了son2中是私有成员 类外不可以访问
}
class GrandSon3 :public Son3
{
public:
	void func() {
		//m_A = 1000;//在Son3中已经变成了私有成员 子类不可以访问
		//m_B = 1000;
	}
};

int main95()
{
	system("pause");
	return 0;
}