#include<iostream>
using namespace std;
//������
class Person
{
public:
	
	void showPerson() const
	{
		//thisָ��ı�����һ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
		//Person * const this;
		//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
		//this->m_A = 100;
		this->m_B = 100;
		//this=NULL;thisָ�벻�����޸�ָ�� �������޸�ֵ
	}
	void func() { this->m_A = 100; }
	
	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ�����Ϲؼ���mutable
};
//������
void test02() {
	//�ڶ���ǰ�����const����ɳ�����
	const Person p2;
	//p2.m_A = 100;
	p2.m_B = 100;//m_B��һ�������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p2.showPerson();
	//p2.func();������ �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
}

int main()
{
	test02();
	system("pause");
	return 0;
}