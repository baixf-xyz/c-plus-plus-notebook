# include <iostream>
using namespace std;
//ʵ���������ֽ���
void swap01(int num1, int num2)
{
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
	cout << num1 << endl;//20
	cout << num2 << endl;//1
}
void swap02(int *num1, int *num2) //������βζ��巽ʽ����ָ��Ķ���
{
	int tmp = *num1;//���ַΪ����ֵ
	*num1 = *num2;//���ַΪ����ֵ
	*num2 = tmp;
	cout << *num1 << endl;//20
	cout << *num2 << endl;//1
}
int main49()
{
	//ָ��ͺ���
	//1.ֵ���ݣ�����ı�ʵ��
	int a = 1;
	int b = 10;
	swap01(a, b);
	cout << a << endl;//1
	cout << b << endl;//20

	//2.��ַ���ݣ���ı�ʵ��
	//��a��b�����ĵ�ַ���˹�ȥ
	swap02(&a, &b);
	cout << a << endl;//20
	cout << b << endl;//1

	system("pause");

	return 0;
}