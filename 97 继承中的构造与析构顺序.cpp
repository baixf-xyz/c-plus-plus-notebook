#include<iostream>
using namespace std;

//�̳��й����������˳��
class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base()
	{
		cout << "Base����������" << endl;
	}
};
class Son:public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ��캯��" << endl;
	}
	~Son()
	{
		cout << "Son����������" << endl;
	}
};
void test01() {
	//Base b;

	//�������������˹��졢����˳��base->son  ->  son->base
	Son s;
}
int main97()
{
	system("pause");
	return 0;
}