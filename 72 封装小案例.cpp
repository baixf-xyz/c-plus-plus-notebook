#include<iostream>
using namespace std;
//ѧ����
class Student {

	//���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա���� ��Ա����

public: //����Ȩ��
	void setName(string name) {
		m_name = name;
	}
	void setID(int id) {
		m_id = id;
	}

	void showStudent() {
		cout << "name:" << m_name << " ID:" << m_id << endl;
	}

public://����Ȩ��
	//����
	string m_name;
	int m_id;
};

int main72() {

	//ʵ���� ����һ������Ķ���
	Student stu;
	stu.setName("��������");
	stu.setID(250);
	stu.showStudent();

	system("pause");

	return 0;
}
