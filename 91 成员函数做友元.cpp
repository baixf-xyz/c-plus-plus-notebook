# include <iostream>
using namespace std;
class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();//Ŀ�ģ���visit��Ա�������Է���building�е�˽�г�Ա
	void visit02();//�����Է���˽�г�Ա
	Building* building;
};

class Building
{
	//���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������
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
	this->m_SittingRoom = "����";
	this->m_BeddingRoom = "����";

}
GoodGay::GoodGay()
{
	//����һ��������Ķ���
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BeddingRoom << endl;
}

void GoodGay::visit02()
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "�û������ڷ��ʣ�" << building->m_BeddingRoom << endl; ������Ԫ �����Է���
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