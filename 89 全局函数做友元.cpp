#include <iostream>
using namespace std;

//建筑物类
class Building
{
	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问building类中的私有成员
	friend void goodGay(Building* building);

public:

	Building()
	{
		this->m_SittingRoom = "客厅";
		this->m_BedRoom = "卧室";
	}


public:
	string m_SittingRoom; //客厅

private:
	string m_BedRoom; //卧室
};


void goodGay(Building* building)
{
	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
	//当没有设置友元时会报错，因为m_BedRoom是私有属性
	cout << "好基友正在访问： " << building->m_BedRoom << endl;
}


void test01()
{
	Building b;
	goodGay(&b);
}

int main() {

	test01();

	system("pause");
	return 0;
}