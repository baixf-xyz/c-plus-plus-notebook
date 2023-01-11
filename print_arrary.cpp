#include<iostream>
#include "print_arrary.h"
using namespace std;

void print_arr(int *arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}