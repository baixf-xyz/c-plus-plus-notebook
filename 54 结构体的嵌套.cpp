# include <iostream>
using namespace std;
//�ṹ��Ƕ��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//��ʦ�ṹ�嶨��
struct teacher
{
	//��Ա�б�
	int id; //ְ�����
	string name;  //��ʦ����
	int age;   //��ʦ����
	//��ѧ���Ļ�����ʹ�ýṹ������
	//struct student stu[10];
	struct student stu; //�ӽṹ�� ѧ��
};
int main54()
{
	struct teacher t1;
	t1.id = 10000;
	t1.name = "����";
	t1.age = 40;

	t1.stu.name = "����";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;
	cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;
	cout << "Hello World" << endl;
	system("pause");

	return 0;
}