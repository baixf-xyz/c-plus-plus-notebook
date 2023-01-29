#include<iostream>
using namespace std;
//空指针调用成员函数

class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonAge() 
	{
		//报错原因：传入的指针为空NULL
		if (this == NULL)
		{
			return;
		}//提高代码的健壮性
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