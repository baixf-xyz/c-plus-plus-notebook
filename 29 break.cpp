# include <iostream>
using namespace std;
/*
break语句
作用:用于跳出 选择结构 或者 循环结构
break使用的时机：
1.出现在switch条件语句中，作用是终止case并跳出switch
2.出现在循环语句中，作用是跳出当前的循环语句
3.出现在嵌套循环中，跳出最近的内层循环语句
*/
int main29()
{

	//1、在switch 语句中使用break
	cout << "请选择您挑战副本的难度：" << endl;
	cout << "1、普通" << endl;
	cout << "2、中等" << endl;
	cout << "3、困难" << endl;

	int num = 0;

	cin >> num;

	switch (num)
	{
	case 1:
		cout << "您选择的是普通难度" << endl;
		break;
	case 2:
		cout << "您选择的是中等难度" << endl;
		break;
	case 3:
		cout << "您选择的是困难难度" << endl;
		break;
	}

	//2、在循环语句（while、for）中用break
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			cout << "i=5，跳出循环语句" << endl;
			break; //跳出循环语句
		}
		cout << i << endl;
	}

	//3.在嵌套循环语句中使用break，退出内层循环
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "*" << " "; //10行5列
		}
		cout << endl;
	}

	system("pause");

	return 0;
}