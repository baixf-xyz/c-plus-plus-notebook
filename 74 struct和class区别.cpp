#include<iostream>
using namespace std;

/*
��C++�� struct��classΨһ�� ���� ������ Ĭ�ϵķ���Ȩ�޲�ͬ
*/
class C1 {
	int m_A;//Ĭ��Ȩ����˽��Ȩ��
};

struct C2 {
	int m_B;//Ĭ��Ȩ���ǹ���Ȩ��
};

int main74()
{
	//����
	//struct Ĭ��Ȩ��Ϊ����
	//class  Ĭ��Ȩ��Ϊ˽��

	C1 c1;
	//c1.m_A = 100; //��class��Ĭ����˽��Ȩ�ޣ�������ⲻ���Է���

	C2 c2;
	c2.m_B = 100;//��struct��Ĭ���ǹ���Ȩ�ޣ����������Է���

	system("pause");
	return 0;
}