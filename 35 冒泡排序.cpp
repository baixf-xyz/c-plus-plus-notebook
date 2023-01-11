# include <iostream>
using namespace std;

int main35()
{
	int arr[] = { 68,58,64,21,53,46,95,64,82,35 };
	//int arr[] = { 10,2,3,4,5,6,7,8,9 };

	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		int ini = 0;
		for (int j = 0; j < length-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int flag = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = flag;
				ini = 1;
			}
		}
		if (ini == 0)
		{
			cout << "ÔÚi=" << i << "Ê±Ìø³ö" << endl;
			break;
		}
	}
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "Hello World" << endl;
	system("pause");

	return 0;
}