# include <iostream>
using namespace std;
/*
* ������ص㣺����һ�������Ŀռ��������ÿ��Ԫ�ض�����ͬ����������
һά���鶨������ַ�ʽ��
1. ��������  ������[ ���鳤�� ]; 
2. ��������  ������[ ���鳤�� ] = { ֵ1��ֵ2 ...};
3. ��������  ������[ ] = { ֵ1��ֵ2 ...};
*/
int main32()
{
	// 1. ��������  ������[���鳤��];
	int arrary1[10];
	//2. ��������  ������[ ���鳤�� ] = { ֵ1��ֵ2 ...};
	int arrary2[6] = { 0,1,2,3,4,5 };
	//3. ��������  ������[ ] = { ֵ1��ֵ2 ...};
	char arrary3[] = { 'a','b','c','d','e' };
	char arrary4[] = "abcdef";
	int arrary5[5] = { 10,20,30 };

	cout << arrary1 << endl;
	cout << arrary2[2] << endl;
	cout << arrary3[3] << endl;
	cout << arrary3 << endl;
	cout << arrary4 << endl;
	cout << arrary4[0] << endl;
	cout << arrary4[5] << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arrary5[i] << endl;//�����û����ȫ��ֵ��������0
	}
	
	system("pause");
	return 0;
}