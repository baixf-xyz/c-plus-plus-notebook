# include <iostream>
using namespace std;

int main15()
{
	//�ӡ������ˡ�����ȡģ �Լ� ǰ������ �������ݼ�
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //����������������Ȼ��������0����������
	cout << a1 % b1 << endl; //ȡģ���㣬��������Ϊ0

	//�ܽ᣺ǰ�õ����ȶԱ�������++���ټ�����ʽ�����õ����෴
	cout << "a1++:\t" << a1++ << endl;//���õ���
	cout << "a1:\t" << a1 << endl;
	cout << "++a1:\t" << ++a1 << endl;//ǰ�õ���
	cout << "a1:\t" << a1 << endl;
	cout << "a1--:\t" << a1-- << endl;
	cout << "a1:\t" << a1 << endl;
	cout << "--a1:\t" << --a1 << endl;
	cout << "a1:\t" << a1 << endl;


	double a2 = 0.5;
	double b2 = 0.25;
	double c2 = 0.3;
	cout << a2 / b2 << endl;
	cout << a2 / c2 << endl;
	//cout << a2 % b2 << endl; //����С����������ȡģ���㣬ֻ�����ͱ���������ȡģ����


	cout << "Hello World" << endl;
	system("pause");

	return 0;
}