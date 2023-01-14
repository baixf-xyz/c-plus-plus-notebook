#include<iostream>
using namespace std;
class Cube {

public:
	void set_m_L(int l)
	{
		m_L = l;
	}
	void set_m_H(int h)
	{
		m_H = h;
	}
	void set_m_W(int w)
	{
		m_W = w;
	}
	int get_L()
	{
		return m_L;
	}
	int get_W()
	{
		return m_W;
	}
	int get_H()
	{
		return m_H;
	}
	int calculateS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
	int calculateV()
	{
		return m_H * m_L * m_W;
	}
	bool isSamebyclass(Cube& c)
	{
		if (get_L() == c.get_L() && get_H() == c.get_H() && get_W() == c.get_W())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

private:
	int m_L;
	int m_H;
	int m_W;
};
//����ȫ�ֺ����ж� �����������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.get_L() == c2.get_L() && c1.get_H() == c2.get_H() && c1.get_W() == c2.get_W())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main76()
{
	Cube c1;
	c1.set_m_H (10);
	c1.set_m_L (5);
	c1.set_m_W (6);
	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
	cout << "c1�����Ϊ��" << c1.calculateV() << endl;

	//�����ڶ���������
	Cube c2;
	c2.set_m_H(10);
	c2.set_m_L(10);
	c2.set_m_W(10);

	//���ó�Ա�����ж�
	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "c1��c2����ȵ�" << endl;
	}
	else {
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}

	//����ȫ�ֺ����ж�
	ret = c1.isSamebyclass(c2);
	if (ret) {
		cout << "c1��c2����ȵ�" << endl;
	}
	else {
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}

	system("pause");
	return 0;
}