#include<iostream>
using namespace std;

//继承中同名成员(静态非静态)的处理方式
class Base
{
public:
	Base()
	{
		m_A = 100;
		m_B = 100;
	}
	void func()
	{
		cout << "Base的成员函数" << endl;
	}
	void func(int a)
	{
		cout << "Base的有参成员函数" << endl;
	}
	void static func02()
	{
		cout << "Base的静态成员函数" << endl;
	}

	int m_A;
	static int m_B;
};
int Base::m_B = 200;

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son的成员函数" << endl;
	}
	void static func02()
	{
		cout << "Son的静态成员函数" << endl;
	}

	int m_A;
	static int m_B;
};
int Son::m_B = 200;

//同名的成员属性的处理方式
void test01()
{
	Son s;
	cout << "Son下的m_A:" << s.m_A << endl;//200
	//如果通过子类对象 访问到父类的同名成员属性，需要加作用域
	cout << "Base下的m_A:" << s.Base::m_A << endl;//100
}
//同名的成员函数处理方式
void test02()
{
	Son s;

	//当出现同名的时候 直接调用的是子类中的成员重名属性或者函数
	s.func();
	//如果通过子类对象 访问到父类的同名成员函数，需要加作用域
	s.Base::func();
	//当存在子类父类同名函数的时候，函数的重载就会报错；
	//原因：当存在子类父类同名函数的时候，子类的同名成员会隐藏掉父类中所有同名成员函数
	//如果想访问到父类被隐藏的同名成员函数，需要加作用域
	s.Base::func(100);
}
void test03() 
{
	Son s;

	//1.通过对象来访问
	// 
	//默认访问方式访问的是子类的同名属性
	cout << "子类的静态成员变量：" << s.m_B << endl;
	//访问父类的同名属性
	cout << "父类的静态成员变量：" << s.Base::m_B << endl;

	//2.通过类名来访问
	cout << "子类的静态成员变量：" << Son::m_B << endl;
	//代表通过类名方式来访问
	cout << "父类的静态成员变量：" << Base::m_B << endl;
	//代表访问父类作用域下
	cout << "父类的静态成员变量：" << Son::Base::m_B << endl;
}
void test04()
{
	Son s;

	//1.通过对象来访问
	// 
	//默认访问方式访问的是子类的同名函数
	s.func02();
	//访问父类的同名属性
	s.Base::func02();

	//2.通过类名来访问
	Son::func02();
	//代表通过类名方式来访问
	Base::func02();
	//子类出现和父类同名的静态成员函数，也会隐藏父类中所有同名成员函数
	//代表访问父类作用域下，需要加作用域
	Son::Base::func02();
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}