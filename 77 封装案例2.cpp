#include<iostream>
using namespace std;
#include"point.h"
#include"cicle.h"

////���Բ�Ĺ�ϵ
//// ����
//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX() 
//	{
//		return m_X;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
////Բ��
//class Cicle
//{
//public:
//	void set_R(int r) {
//		m_R = r;
//	}
//	int get_R() {
//		return m_R;
//	}
//	void set_Center(Point center) {
//		m_Center = center;
//	}
//	Point get_Center() {
//		return m_Center;
//	}
//
//private:
//	int m_R;//�뾶
//	//������ ��������һ���� ���������еĳ�Ա
//	Point m_Center;//Բ��
//};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Cicle& c, Point& p)
{
	int distance =
		(c.get_Center().getX() - p.getX()) * (c.get_Center().getX() - p.getX())
		+ (c.get_Center().getY() - p.getY()) * (c.get_Center().getY() - p.getY());
	int rdistance = c.get_R() * c.get_R();
	if (distance == rdistance) {
		cout << "����Բ��" << endl;
	}
	else if(distance>rdistance){
		cout << "����Բ��" << endl;
	}
	else {
		cout << "����Բ��" << endl;
	}
}

int main77()
{
	Cicle c;
	c.set_R(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.set_Center(center);

	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(c, p);

	system("pause");
	return 0;
}