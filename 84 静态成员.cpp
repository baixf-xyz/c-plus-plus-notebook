#include<iostream>
using namespace std;

//��̬��Ա����&&��̬��Ա����
	//��̬��Ա������
	//1.���ж��󶼹���һ������
	//2.����׶ξͷ����ڴ�
	//3.�������� �����ʼ��
	//��̬��Ա������
	//1.���ж�����ͬһ������
	// 2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:
	static int m_A;
	int m_B;

	static void func() {
		cout << "static void func��������" << endl;
	}
	static void func02() {
		int m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200; ��̬��Ա���������Է��ʷǾ�̬��Ա����
		cout << "static void func��������" << endl;
	}

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static int m_B;
	static void func03() {
		cout << "��̬��Ա����" << endl;
	}
};

int Person::m_A=100;
int Person::m_B = 200;

void test01()
{
	Person p;
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << p2.m_A << endl;

	//100��200��->200
	cout << p.m_A << endl;
}
void test02() {
	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ�����ʽ

	//1.ͨ��������з���
	Person p;
	cout << p.m_A << endl;

	//2.ͨ���������з���
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl; private˽�г�Ա���� ���ڿ��Է��� ���ⲻ���Է���

}

//��̬��������Ҳ�����ֵ��÷�ʽ
void test03() {
	//1.ͨ��������з���
	Person p;
	p.func();

	//2.ͨ���������з���
	Person::func();
	//Person::func03(); ���� ˽���������µ� ������ʲ���˽�о�̬��Ա����
}
int main84() {
	test01();
	test02();
	system("pause");
	return 0;
}