#include<iostream>
using namespace std;

//�̳���ͬ����Ա(��̬�Ǿ�̬)�Ĵ���ʽ
class Base
{
public:
	Base()
	{
		m_A = 100;
		m_B = 100;
	}
	void func()
	{
		cout << "Base�ĳ�Ա����" << endl;
	}
	void func(int a)
	{
		cout << "Base���вγ�Ա����" << endl;
	}
	void static func02()
	{
		cout << "Base�ľ�̬��Ա����" << endl;
	}

	int m_A;
	static int m_B;
};
int Base::m_B = 200;

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son�ĳ�Ա����" << endl;
	}
	void static func02()
	{
		cout << "Son�ľ�̬��Ա����" << endl;
	}

	int m_A;
	static int m_B;
};
int Son::m_B = 200;

//ͬ���ĳ�Ա���ԵĴ���ʽ
void test01()
{
	Son s;
	cout << "Son�µ�m_A:" << s.m_A << endl;//200
	//���ͨ��������� ���ʵ������ͬ����Ա���ԣ���Ҫ��������
	cout << "Base�µ�m_A:" << s.Base::m_A << endl;//100
}
//ͬ���ĳ�Ա��������ʽ
void test02()
{
	Son s;

	//������ͬ����ʱ�� ֱ�ӵ��õ��������еĳ�Ա�������Ի��ߺ���
	s.func();
	//���ͨ��������� ���ʵ������ͬ����Ա��������Ҫ��������
	s.Base::func();
	//���������ุ��ͬ��������ʱ�򣬺��������ؾͻᱨ��
	//ԭ�򣺵��������ุ��ͬ��������ʱ�������ͬ����Ա�����ص�����������ͬ����Ա����
	//�������ʵ����౻���ص�ͬ����Ա��������Ҫ��������
	s.Base::func(100);
}
void test03() 
{
	Son s;

	//1.ͨ������������
	// 
	//Ĭ�Ϸ��ʷ�ʽ���ʵ��������ͬ������
	cout << "����ľ�̬��Ա������" << s.m_B << endl;
	//���ʸ����ͬ������
	cout << "����ľ�̬��Ա������" << s.Base::m_B << endl;

	//2.ͨ������������
	cout << "����ľ�̬��Ա������" << Son::m_B << endl;
	//����ͨ��������ʽ������
	cout << "����ľ�̬��Ա������" << Base::m_B << endl;
	//������ʸ�����������
	cout << "����ľ�̬��Ա������" << Son::Base::m_B << endl;
}
void test04()
{
	Son s;

	//1.ͨ������������
	// 
	//Ĭ�Ϸ��ʷ�ʽ���ʵ��������ͬ������
	s.func02();
	//���ʸ����ͬ������
	s.Base::func02();

	//2.ͨ������������
	Son::func02();
	//����ͨ��������ʽ������
	Base::func02();
	//������ֺ͸���ͬ���ľ�̬��Ա������Ҳ�����ظ���������ͬ����Ա����
	//������ʸ����������£���Ҫ��������
	Son::Base::func02();
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}