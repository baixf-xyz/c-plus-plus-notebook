# include <iostream>
#include<string>
using namespace std;
/*
�ṹ�������û��Զ�����������ͣ����ʣ�һЩ���ͼ�����ɵ�һ������
�﷨��struct �ṹ���� { �ṹ���Ա�б� }��
*/
//1.����ѧ������
struct Student
{
	//��Ա�б�
	string name;
	int age;
	float score;
}s3;//˳�㴴��һ������

int main51()
{
	//2.ͨ��ѧ�����ʹ�������ѧ��
	//2.1 struct Student s1;//�������� �������� ������
	//struct�Ĺؼ��ֿ���ʡ��
	//struct Student s1;
	Student s1;
	//�ṹ��������õ�(.)���ʳ�Ա����
	s1.name = "����";
	s1.age = 16;
	s1.score = 100;
	cout << "������\t" << s1.name << "���䣺\t" << s1.age << "�ɼ���\t" << s1.score << endl;
	
	//2.2 struct Student s2 = {};
	struct Student s2 = {"����",15,98};
	cout << "������\t" << s2.name << "���䣺\t" << s2.age << "�ɼ���\t" << s2.score << endl;

	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.name = "����";
	s3.age = 14;
	s3.score = 99;
	cout << "������\t" << s3.name << "���䣺\t" << s3.age << "�ɼ���\t" << s3.score << endl;

	cout << "Hello World" << endl;
	system("pause");

	return 0;
}