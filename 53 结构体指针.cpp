# include <iostream>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};
int main53()
{
	//1.����ѧ���ṹ�����
	struct student s1 = {"����",16,100};

	//2.ͨ��ָ��ָ��ṹ�����
	struct student* p = &s1;
	
	//3.ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����ԣ���Ҫ����"->"
	cout << "ѧ�������� "<< p->name<< " ѧ�����䣺 " << p->age <<" ѧ���ɼ��� "<< p->score << endl;
	system("pause");

	return 0;
}