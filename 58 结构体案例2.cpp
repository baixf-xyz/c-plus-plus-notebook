# include <iostream>
using namespace std;
//1.���Ӣ�۽ṹ��
struct hero {
	string name;
	int age;
	string sex;
};
//��ַ����
void bubblesort(struct hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int ini = 0;
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				int flag = arr[j].age;
				arr[j].age = arr[j + 1].age;
				arr[j + 1].age = flag;
				ini = 1;
			}
		}
		if (ini == 0)
		{
			cout << "��i=" << i << "ʱ����" << endl;
			break;
		}
	}
}
//��ַ���ݣ���ӡ����
void printHeros(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������ " << arr[i].name << " �Ա� " << arr[i].sex << " ���䣺 " << arr[i].age << endl;
	}
}
int main58()
{
	//2.��������������Ӣ��
	struct hero harray[] = { {"����",22,"��"},{"����",22,"��"} ,{"�ŷ�",20,"��"} ,{"����",21,"��"} ,{"����",19,"Ů"} };
	int length = sizeof(harray) / sizeof(harray[0]);
	//3.ð������
	bubblesort(harray, length);
	//4.��ӡ�����������Ϣ
	printHeros(harray, length); 
	
	cout << "Hello World" << endl;
	system("pause");

	return 0;
}