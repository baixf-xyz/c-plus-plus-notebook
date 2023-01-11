# include <iostream>
using namespace std;

int main48()
{
	//指针和数组
	//利用指针访问数组中的元素

	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	cout << "通过数组访问第一个元素arr[0]:" << arr[0] << endl;

	int* p = arr;
	//上式等价于int *p;p=arr;
	cout << "通过指针访问第一个元素*p:" << *p << endl;

	//++p本质：将指针向后偏移4个字节
	cout << "通过指针访问第二个元素*(++p):" << *(++p) << endl;

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