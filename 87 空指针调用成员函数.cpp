#include<iostream>
using namespace std;
//��ָ����ó�Ա����

class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonAge() 
	{
		//����ԭ�򣺴����ָ��Ϊ��NULL
		if (this == NULL)
		{
			return;
		}//��ߴ���Ľ�׳��
		cout << "age=" << this->m_Age << endl;
	}

	int m_Age;
};
void test01() 
{
	Person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}

int main87()
{
	test01();
	system("pause");
	return 0;
}