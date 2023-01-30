#include<iostream>
using namespace std;

//动物类
class Annimal
{
public:
	int m_Age;
};

//利用虚继承可以解决菱形继承的问题
//继承之前 加上关键字 virtual 变成虚继承
//Animal类称为 虚基类
//羊类
class Sheep :virtual public Annimal{};

//驼类
class Alpaca:virtual public Annimal{};

//羊驼类
class CNM :public Sheep, public Alpaca{};

void test01() {
	CNM cnm;
	//cnm.m_Age = 18; 不明确错误
	cnm.Sheep::m_Age = 18;
	cnm.Alpaca::m_Age = 28;

	//1.当出现菱形继承时 两个父类拥有相同的属性 需要添加作用域来区分
	cout << cnm.Sheep::m_Age << endl;
	cout << cnm.Alpaca::m_Age << endl;
	//虚继承可以解决数据不明确的问题
	cout << cnm.m_Age << endl;

	//2.这份数据我们知道孙子只需要继承一份就可以，但是菱形继承有两份，会造成资源浪费

}

int main100()
{

	system("pause");
	return 0;
}