# include <iostream>
using namespace std;
class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();//目的：让visit成员函数可以访问building中的私有成员
	void visit02();//不可以访问私有成员
	Building* building;
};

class Building
{
	//告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
	friend void GoodGay::visit();

public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BeddingRoom;
};

Building::Building()
{
	this->m_SittingRoom = "客厅";
	this->m_BeddingRoom = "卧室";

}
GoodGay::GoodGay()
{
	//创建一个建筑物的对象
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问：" << building->m_BeddingRoom << endl;
}

void GoodGay::visit02()
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	//cout << "好基友正在访问：" << building->m_BeddingRoom << endl; 不是友元 不可以访问
}

void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit02();
}

int main91()
{
	test01();
	system("pause");

	return 0;
}