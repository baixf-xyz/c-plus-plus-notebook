# include <iostream>
using namespace std;

int main22()
{
	//while基本语法
	int num1 = 0;
	while (num1 < 10)//while(1)将会无限循环，写代码要避免死循环
	{
		cout << "num1 = " << num1 << endl;
		num1++;
	}
	cout << num1 << endl;


	//do…while循环语句
	//与while循环区别在于，do...while先执行一次循环语句，再判断循环条件
	int num2 = 0;
	do
	{
		cout << num2 << endl;
		num2++;

	} while (num2 < 10);//do…while这里需要注意while后面有一个 分号(;)
	cout << num2 << endl;



	return 0;
}