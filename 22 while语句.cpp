# include <iostream>
using namespace std;

int main22()
{
	//while�����﷨
	int num1 = 0;
	while (num1 < 10)//while(1)��������ѭ����д����Ҫ������ѭ��
	{
		cout << "num1 = " << num1 << endl;
		num1++;
	}
	cout << num1 << endl;


	//do��whileѭ�����
	//��whileѭ���������ڣ�do...while��ִ��һ��ѭ����䣬���ж�ѭ������
	int num2 = 0;
	do
	{
		cout << num2 << endl;
		num2++;

	} while (num2 < 10);//do��while������Ҫע��while������һ�� �ֺ�(;)
	cout << num2 << endl;



	return 0;
}