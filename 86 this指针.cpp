#include<iostream>
using namespace std;
class Person
{
public:
	//�β���age
	Person(int age)
	{
		//thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
		this->age = age;
	}
	//��дΪPerson PersonAddAge(Person& p) ��Ϊֵ����
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;

		//this��ָ��p2��ָ�룬��*thisָ�����p2�������
		return *this;
	}
	
	//��Ա����age
	int age;
};
//1.������Ƴ�ͻ
void test01() {
	Person p1(18);
	cout << "p1�����䣺" << p1.age << endl;
}

//2.���ض�������* this
void test02() {
	Person p1(18);
	Person p2(10);
	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2�����䣺" << p2.age << endl;
}

int main86()
{
	test01();
	test02();
	system("pause");
	return 0;
}