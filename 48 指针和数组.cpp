# include <iostream>
using namespace std;

int main48()
{
	//ָ�������
	//����ָ����������е�Ԫ��

	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	cout << "ͨ��������ʵ�һ��Ԫ��arr[0]:" << arr[0] << endl;

	int* p = arr;
	//��ʽ�ȼ���int *p;p=arr;
	cout << "ͨ��ָ����ʵ�һ��Ԫ��*p:" << *p << endl;

	//++p���ʣ���ָ�����ƫ��4���ֽ�
	cout << "ͨ��ָ����ʵڶ���Ԫ��*(++p):" << *(++p) << endl;

	p--;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
		cout << *(p++) << endl;
	}

	cout << "Hello World" << endl;
	system("pause");

	return 0;
}