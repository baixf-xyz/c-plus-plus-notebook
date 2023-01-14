#include<iostream>
using namespace std;

/*
在C++中 struct和class唯一的 区别 就在于 默认的访问权限不同
*/
class C1 {
	int m_A;//默认权限是私有权限
};

struct C2 {
	int m_B;//默认权限是公共权限
};

int main74()
{
	//区别：
	//struct 默认权限为公共
	//class  默认权限为私有

	C1 c1;
	//c1.m_A = 100; //在class中默认是私有权限，因此类外不可以访问

	C2 c2;
	c2.m_B = 100;//在struct中默认是公共权限，因此类外可以访问

	system("pause");
	return 0;
}