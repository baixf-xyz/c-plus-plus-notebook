# include<iostream>
using namespace std;

//����Ȩ��
//����
//����Ȩ�� public     ��Ա ���ڿ��Է��� ����Ҳ���Է���
//����Ȩ�� protected  ��Ա ���ڿ��Է��� ���ⲻ���Է��� ����Ҳ���Է���
//˽��Ȩ�� private    ��Ա ���ڿ��Է��� ���ⲻ���Է��� ���಻���Է���

class Person
{
	//����Ȩ��
public:
	string m_Name;

protected:
	string m_Car;

private:
	string m_Password;

public: //private����protected������Class���ھ��������ڳ�Ա�����������Ļ����ⲻ���Ե�����
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = "123456";
	}
};

int main73()
{
	//ʵ����һ������
	Person p1;
	p1.m_Name = "����";
	//p1.m_Car = "����"; ����Ȩ�޲��ɷ���
	//p1.m_Password = "123456789"; ˽��Ȩ�޲��ɷ���

	system("pause");
	return 0;
}