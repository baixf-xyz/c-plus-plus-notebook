#include<iostream>
using namespace std;

//�̳з�ʽ

//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1
{
public:
	void func() 
	{
		m_A = 10; //�����еĹ���Ȩ�޳�Ա����������Ȼ�ǹ���Ȩ��
		m_B = 20;//�����еı���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
		//m_C = 30;//�����е�˽��Ȩ�޳�Ա�������з��ʲ���
	}
};
void test01()
{
	Son1 s1;
	cout << s1.m_A << endl;
	//cout << s1.m_B << endl;//����son1���Ǳ���Ȩ�� ���ⲻ���Է���
}
//�����̳�
class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 10; //�����еĹ���Ȩ�޳�Ա���������Ǳ���Ȩ��
		m_B = 20;//�����еı���Ȩ�޳�Ա��������Ҳ�Ǳ���Ȩ��
		//m_C = 30;//�����е�˽��Ȩ�޳�Ա�������з��ʲ���
	}
};
void test02()
{
	Son2 s2;
	//cout << s2.m_A << endl;//����son2���Ǳ���Ȩ�� ���ⲻ���Է���
	//cout << s1.m_B << endl;//����son2���Ǳ���Ȩ�� ���ⲻ���Է���
}
//�����̳�
class Son3 :private Base1
{
public:
	void func()
	{
		m_A = 10; //�����еĹ���Ȩ�޳�Ա����������˽��Ȩ��
		m_B = 20;//�����еı���Ȩ�޳�Ա��������Ҳ��˽��Ȩ��
		//m_C = 30;//�����е�˽��Ȩ�޳�Ա�������з��ʲ���
	}
};
void test03()
{
	Son3 s3;
	//cout << s3.m_A << endl;//����son2����˽�г�Ա ���ⲻ���Է���
	//cout << s3.m_B << endl;//����son2����˽�г�Ա ���ⲻ���Է���
}
class GrandSon3 :public Son3
{
public:
	void func() {
		//m_A = 1000;//��Son3���Ѿ������˽�г�Ա ���಻���Է���
		//m_B = 1000;
	}
};

int main95()
{
	system("pause");
	return 0;
}