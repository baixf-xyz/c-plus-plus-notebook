# include <iostream>
using namespace std;

int main34()
{
	int arr[7] = {1,2,3,4,5,6,7};
	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "length���ȣ�" << length << endl;
	cout << "����ǰ��";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	for (int i = 0; i < length/2; i++)
	{
		int flag = 0;
		flag=arr[i];
		arr[i] = arr[length -1 - i];
		arr[length-1 - i] = flag;
		//cout << arr[i] << endl;
	}
	cout << "���ú�";
	for (int i = 0; i < length; i++)
	{
		cout  << arr[i];
	}
	cout << endl;
	system("pause");

	return 0;
}