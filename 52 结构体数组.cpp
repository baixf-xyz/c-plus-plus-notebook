# include <iostream>
using namespace std;

struct Student
{
	//��Ա�б�
	string name;
	int age;
	float score;
};//˳�㴴��һ������

int main52()
{
	struct Student stuarr[] = { {"����",12,100},{"����",16,85},{"����",14,99} };

	stuarr[1] = {"л�ڷ�",18,98};

	for (int i = 0; i < (sizeof(stuarr) / sizeof(stuarr[0]));i++)
	{
		cout << "������ " << stuarr[i].name 
			<< "���䣺 " << stuarr[i].age 
			<< "�ɼ��� " << stuarr[i].score << endl;
	}
	cout << "Hello World" << endl;
	system("pause");

	return 0;
}