# include<iostream>
using namespace std;
# include "bubble_sort.h"
#include "print_arrary.h"

//��װһ������������ð������ʵ�ֶ������������������
int main50()
{
	int arr[] = { 1,5,8,9,3,6,7,5,8 };
	int length = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,length);//arr��������ĵ�ַ
	print_arr(arr, length);
	system("pause");

	return 0;
}