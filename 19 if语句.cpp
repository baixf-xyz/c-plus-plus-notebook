# include <iostream>
using namespace std;

int main19()
{
	//ѡ��ṹ
	//if���
	int score = 0;
	cout << "�����������ĸ߿��ɼ���" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;
	//ע�����if���治Ҫ�ӷֺţ����Ϸֺź����if����Ѿ�ִ�н���
	if (score > 600)
	{
		cout << "��ϲ�㿼��һ����ѧ" << endl;
	}
	else
	{
		cout << "Hello World" << endl;
	}

	//���������
	int math = 0;
	cout << "��������������ѧ�ɼ���" << endl;
	cin >> math;
	cout << "������ķ���Ϊ��" << math << endl;
	//ע�����if���治Ҫ�ӷֺţ����Ϸֺź����if����Ѿ�ִ�н���
	if (math > 90)
	{
		cout << "����ѧͦ��ѽ��" << endl;
	}
	else if(math>60)
	{
		cout << "����ѧ������" << endl;
	}
	else
	{
		cout << "�����ѧҪ�����ˣ�" << endl;
	}

	//Ƕ��if���
	int english = 0;
	cout << "������������Ӣ��ɼ���" << endl;
	cin >> english;
	cout << "������ķ���Ϊ��" << english << endl;
	//ע�����if���治Ҫ�ӷֺţ����Ϸֺź����if����Ѿ�ִ�н���
	if (english > 100)
	{
		cout << "ѡӢ��רҵ" << endl;
		if (english >110)
		{
			cout << "ţ��~" << endl;
		}
	}
	else if(english>80)
	{
		cout << "���Կ���" << endl;
	}
	else if (english > 60)
	{
		cout << "��Ҳ����" << endl;
	}
	else
	{
		cout << "��" << endl;
	}


	system("pause");

	return 0;
}