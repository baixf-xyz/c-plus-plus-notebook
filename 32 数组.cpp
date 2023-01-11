# include <iostream>
using namespace std;
/*
* 数组的特点：放在一块连续的空间里；数组中每个元素都是相同的数据类型
一维数组定义的三种方式：
1. 数据类型  数组名[ 数组长度 ]; 
2. 数据类型  数组名[ 数组长度 ] = { 值1，值2 ...};
3. 数据类型  数组名[ ] = { 值1，值2 ...};
*/
int main32()
{
	// 1. 数据类型  数组名[数组长度];
	int arrary1[10];
	//2. 数据类型  数组名[ 数组长度 ] = { 值1，值2 ...};
	int arrary2[6] = { 0,1,2,3,4,5 };
	//3. 数据类型  数组名[ ] = { 值1，值2 ...};
	char arrary3[] = { 'a','b','c','d','e' };
	char arrary4[] = "abcdef";
	int arrary5[5] = { 10,20,30 };

	cout << arrary1 << endl;
	cout << arrary2[2] << endl;
	cout << arrary3[3] << endl;
	cout << arrary3 << endl;
	cout << arrary4 << endl;
	cout << arrary4[0] << endl;
	cout << arrary4[5] << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arrary5[i] << endl;//如果并没有完全赋值，则会输出0
	}
	
	system("pause");
	return 0;
}