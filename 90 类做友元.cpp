# include <iostream>
using namespace std;
class Building;

//类做友元
class GoodGay
{
public:
	GoodGay();
public:
	void visit();//参观函数 访问Building中的属性
	Building* building;

};

class Building
{
	//GoodGay类是Building类的好朋友，可以访问本类的私有成员
	friend class GoodGay;

public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BeddingRoom;

};

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


//类外去写成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BeddingRoom = "卧室";
}
void test01() {
	GoodGay gg;
	gg.visit();
}
int main90()
{
	test01();
	cout << "Hello World" << endl;
	system("pause");

	return 0;
}