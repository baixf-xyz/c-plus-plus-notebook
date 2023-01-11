# include <iostream>
# include <string>
using namespace std;

int main38()
{
	int scores[][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};

	string name[3] = { "张三","李四","王五" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << "第" << i+1 << "个同学:" << name[i] << "的总成绩是" << sum << endl;
	}
	system("pause");

	return 0;
}