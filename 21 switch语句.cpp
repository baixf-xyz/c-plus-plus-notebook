# include <iostream>
using namespace std;

//switch��� �ĸ��ؼ��֣�switch��case��break��default
//���ã�ִ�ж�����֧���
//ȱ�㣺�жϵ�ʱ��ֻ�������ͻ����ַ��ͣ���������һ������
//�ŵ㣺�ṹ������ִ��Ч�ʸ�

int main21()
{
		//�����Ӱ���� 
		int score = 0;
		cout << "�����Ӱ��֣�10���ƣ���" << endl;
		cin >> score;

		switch (score)
		{
		case 10:
		case 9:
			cout << "����" << endl;
			break;//�˳���ǰ��֧
		case 8:
			cout << "�ǳ���" << endl;
			break;
		case 7:
		case 6:
			cout << "һ��" << endl;
			break;
		default:
			cout << "��Ƭ" << endl;
			break;
		}

	system("pause");

	return 0;
}