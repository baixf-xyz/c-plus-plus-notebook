# include <iostream>
using namespace std;
class Building;

//������Ԫ
class GoodGay
{
public:
	GoodGay();
public:
	void visit();//�ιۺ��� ����Building�е�����
	Building* building;

};

class Building
{
	//GoodGay����Building��ĺ����ѣ����Է��ʱ����˽�г�Ա
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
	//����һ��������Ķ���
	building = new Building;
}
void GoodGay::visit()
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BeddingRoom << endl;
}


//����ȥд��Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BeddingRoom = "����";
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