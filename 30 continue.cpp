# include <iostream>
using namespace std;
/*
continue���
���ã���ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
*/
int main30()
{

	for (int i = 0; i < 100; i++)
	{
		//���������ż�������
		if (i % 2 == 0)
		{
			continue;//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
			//break; break��ֱ����ֹ����ѭ��
		}
		cout << i << endl;
	}
	//continue��û��ʹ����ѭ����ֹ��ֻ���ڵ�ǰֹͣ����ѭ����������һ�ε�ѭ��
	//��break������ѭ��

	system("pause");

	return 0;
}