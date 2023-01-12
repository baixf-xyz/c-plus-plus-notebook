# include<iostream>
using namespace std;
# include "bubble_sort.h"
//函数的定义
void bubble_sort(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		int ini = 0;
		for (int j = 0; j < len - i - 1; j++)
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
			cout << "在i=" << i << "时跳出" << endl;
			break;
		}
	}
}