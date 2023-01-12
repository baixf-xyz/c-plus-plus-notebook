# include<iostream>
using namespace std;
# include "bubble_sort.h"
#include "print_arrary.h"

//封装一个函数，利用冒泡排序，实现对整型数组的升序排序
int main50()
{
	int arr[] = { 1,5,8,9,3,6,7,5,8 };
	int length = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,length);//arr就是数组的地址
	print_arr(arr, length);
	system("pause");

	return 0;
}