# include <iostream>
using namespace std;
/*
二维数组定义的四种方式：第二种更加直观，提高代码的可读性
1.数据类型  数组名[ 行数 ][ 列数 ]; 
2.数据类型  数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };
3.数据类型  数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};
4.数据类型  数组名[  ][ 列数 ] = { 数据1，数据2，数据3，数据4};
*/
int main36()
{

	//方式1  
	//数组类型 数组名 [行数][列数]
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	//外层打印行数
	for (int i = 0; i < 2; i++)
	{
		//内层打印列数
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	//方式2 
	//数据类型 数组名[行数][列数] = { {数据1，数据2 } ，{数据3，数据4 } };
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	//方式3
	//数据类型 数组名[行数][列数] = { 数据1，数据2 ,数据3，数据4  };
	int arr3[2][3] = { 1,2,3,4,5,6 };

	//方式4 
	//数据类型 数组名[][列数] = { 数据1，数据2 ,数据3，数据4  };
	int arr4[][3] = { 1,2,3,4,5,6 };

	//int arr4[][] = { 1,2,3,4,5,6 }; //至少得有列数
	//int arr4[2][] = { 1,2,3,4,5,6 };//如果只有行数，没有列数也是会报错的

	system("pause");

	return 0;
}