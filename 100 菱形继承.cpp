#include<iostream>
using namespace std;

//������
class Annimal
{
public:
	int m_Age;
};

//������̳п��Խ�����μ̳е�����
//�̳�֮ǰ ���Ϲؼ��� virtual �����̳�
//Animal���Ϊ �����
//����
class Sheep :virtual public Annimal{};

//����
class Alpaca:virtual public Annimal{};

//������
class CNM :public Sheep, public Alpaca{};

void test01() {
	CNM cnm;
	//cnm.m_Age = 18; ����ȷ����
	cnm.Sheep::m_Age = 18;
	cnm.Alpaca::m_Age = 28;

	//1.���������μ̳�ʱ ��������ӵ����ͬ������ ��Ҫ���������������
	cout << cnm.Sheep::m_Age << endl;
	cout << cnm.Alpaca::m_Age << endl;
	//��̳п��Խ�����ݲ���ȷ������
	cout << cnm.m_Age << endl;

	//2.�����������֪������ֻ��Ҫ�̳�һ�ݾͿ��ԣ��������μ̳������ݣ��������Դ�˷�

}

int main100()
{

	system("pause");
	return 0;
}