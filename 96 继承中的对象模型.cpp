#include<iostream>
using namespace std;

//继承中的对象模型
//从父类继承过来的成员，哪些属于子类对象中？

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

//公共继承
class Son :public Base
{
public:
	int m_D;
};

void test01()
{
	//16 = 4*4 ：所有的属性不管什么权限都会继承保留下来
	//父类中所有私有静态成员都会被子类继承下去
	//父类中私有成员属性 是被编译器给隐藏了，因此是访问不到的，但是确实被继承了
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main96() {

	test01();

	system("pause");

	return 0;
}