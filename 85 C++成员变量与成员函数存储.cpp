#include<iostream>
using namespace std;
//��Ա�����ͳ�Ա�����Ƿֿ��洢��

class Person
{
	int m_A;//�Ǿ�̬��Ա���� ������Ķ����ϵ�
	static int m_B;//��̬��Ա���� �������������
	void func() {}//�Ǿ�̬��Ա���� ��������Ķ����ϵ�
	static void func02(){} //��̬��Ա���� ��������Ķ����ϵ�
};

void test01() 
{
	Person p;

	//�ն���ռ���ڴ�ռ��С��1�����ֽڣ�
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "sizeof(p):" << sizeof(p) << endl;
}
void test02() {
	Person p;
	//����һ��int���ͱ����Ķ���ռ���ڴ�ռ��С��4�����ֽڣ�
	cout << "sizeof(p):" << sizeof(p) << endl;
}
void test03() {
	Person p;
	//����һ��int���ͱ��� һ��static int���ͱ��� �Ķ���ռ���ڴ�ռ��С��4�����ֽڣ�
	//static int �������������
	cout << "sizeof(p):" << sizeof(p) << endl;
}
void test04() {
	Person p;
	//����һ��int���ͱ��� һ��static int���ͱ���  һ���Ǿ�̬���� �Ķ���ռ���ڴ�ռ��С��4�����ֽڣ�
	//�Ǿ�̬���� �������������
	cout << "sizeof(p):" << sizeof(p) << endl;
}

int main85() {

	system("pause");
	return 0;

}