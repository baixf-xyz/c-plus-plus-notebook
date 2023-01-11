# include <iostream>
#include<ctime>
using namespace std;

int main23()
{
	/*
	添加随机种子
	seed没用srand进行修改，所以每次调用都是相同的seed值
	进行计算的第一个伪随机数，因此该随机数相同。
	如果需要每次调用都不一样，则在使用rand()之前
	加srand(time(NULL));即以现在的时间秒数作为seed进行计算伪随机数。
	*/
	srand((unsigned int)time(NULL));//
	int num = rand() % 100;//生成一个0-99的随机数
	cout << num << endl;

	int val = 0;
	cout << "请猜值:" << endl;
	cin >> val;
	while (val != num)
	{
		cout << "重新猜：";
		cin >> val;
	}
	cout << "恭喜你，猜对了！" << endl;
	system("pause");

	return 0;
}