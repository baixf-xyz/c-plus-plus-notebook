# include <iostream>
using namespace std;

int main37()
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//��ά����������;��
	//1.�鿴��ά������ռ�ڴ�ռ�
	cout << "��ά����ռ���ڴ�ռ��С�� " << sizeof(arr) << endl;
	cout << "��ά����һ��ռ���ڴ�ռ��С�� " << sizeof(arr[0]) << endl;
	cout << "��ά����Ԫ��ռ���ڴ�ռ��С�� " << sizeof(arr[0][0]) << endl;

	cout << "��ά���������� " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2.��ȡ��ά�����׵�ַ
	cout << "��ά�����׵�ַ��" << arr << endl;
	cout << "��ά�����һ�е�ַ��" << arr[0] << endl;
	cout << "��ά����ڶ��е�ַ��" << arr[1] << endl;

	cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ�ص�ַ��" << &arr[0][1] << endl;

	//�ܽ᣺
	//1.��ά�������������������׵�ַ��Ҳ�ǵ�һ�еĵ�ַ��Ҳ�ǵ�һ��Ԫ�صĵ�ַ
	//2.�Զ�ά����������sizeofʱ�����Ի�ȡ ������ά���� ռ�õ��ڴ�ռ��С

	cout << "Hello World" << endl;
	system("pause");

	return 0;
}