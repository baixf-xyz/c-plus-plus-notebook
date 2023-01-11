# include <iostream>
using namespace std;
/*
continue语句
作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
*/
int main30()
{

	for (int i = 0; i < 100; i++)
	{
		//奇数输出，偶数不输出
		if (i % 2 == 0)
		{
			continue;//可以筛选条件，执行到此就不再向下执行，执行下一次循环
			//break; break会直接终止整个循环
		}
		cout << i << endl;
	}
	//continue并没有使整个循环终止，只是在当前停止本次循环，继续下一次的循环
	//而break会跳出循环

	system("pause");

	return 0;
}