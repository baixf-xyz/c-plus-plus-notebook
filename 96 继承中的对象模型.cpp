#include<iostream>
using namespace std;

//�̳��еĶ���ģ��
//�Ӹ���̳й����ĳ�Ա����Щ������������У�

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //˽�г�Աֻ�Ǳ������ˣ����ǻ��ǻ�̳���ȥ
};

//�����̳�
class Son :public Base
{
public:
	int m_D;
};

void test01()
{
	//16 = 4*4 �����е����Բ���ʲôȨ�޶���̳б�������
	//����������˽�о�̬��Ա���ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ��������������ˣ�����Ƿ��ʲ����ģ�����ȷʵ���̳���
	cout << "sizeof Son = " << sizeof(Son) << endl;
}

int main96() {

	test01();

	system("pause");

	return 0;
}