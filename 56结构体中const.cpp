# include <iostream>
using namespace std;

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ��һ���µĸ���
//constʹ�ó���������ָ�벻���Ը�ֵ�������Ըı�ָ��
void printStudent(const student* stu) //��const��ֹ�������е������
{
	//stu->age = 100; //����ʧ�ܣ���Ϊ����const����
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;

}

int main56() {

	student stu = { "����",18,100 };

	//ֵ���ݿ��У������˷ѿռ�
	printStudent(&stu);

	system("pause");

	return 0;
}