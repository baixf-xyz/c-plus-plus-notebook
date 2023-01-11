# include <iostream>
using namespace std;

int main37()
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//二维数组名称用途：
	//1.查看二维数组所占内存空间
	cout << "二维数组占用内存空间大小： " << sizeof(arr) << endl;
	cout << "二维数组一行占用内存空间大小： " << sizeof(arr[0]) << endl;
	cout << "二维数组元素占用内存空间大小： " << sizeof(arr[0][0]) << endl;

	cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2.获取二维数组首地址
	cout << "二维数组首地址：" << arr << endl;
	cout << "二维数组第一行地址：" << arr[0] << endl;
	cout << "二维数组第二行地址：" << arr[1] << endl;

	cout << "二维数组第一个元素地址：" << &arr[0][0] << endl;
	cout << "二维数组第二个元素地址：" << &arr[0][1] << endl;

	//总结：
	//1.二维数组名就是这个数组的首地址，也是第一行的地址，也是第一个元素的地址
	//2.对二维数组名进行sizeof时，可以获取 整个二维数组 占用的内存空间大小

	cout << "Hello World" << endl;
	system("pause");

	return 0;
}