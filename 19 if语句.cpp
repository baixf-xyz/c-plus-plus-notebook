# include <iostream>
using namespace std;

int main19()
{
	//选择结构
	//if语句
	int score = 0;
	cout << "请您输入您的高考成绩：" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	//注意事项：if后面不要加分号，加上分号后代表if语句已经执行结束
	if (score > 600)
	{
		cout << "恭喜你考上一本大学" << endl;
	}
	else
	{
		cout << "Hello World" << endl;
	}

	//多条件语句
	int math = 0;
	cout << "请您输入您的数学成绩：" << endl;
	cin >> math;
	cout << "您输入的分数为：" << math << endl;
	//注意事项：if后面不要加分号，加上分号后代表if语句已经执行结束
	if (math > 90)
	{
		cout << "你数学挺好呀！" << endl;
	}
	else if(math>60)
	{
		cout << "你数学还可以" << endl;
	}
	else
	{
		cout << "那你大学要加油了！" << endl;
	}

	//嵌套if语句
	int english = 0;
	cout << "请您输入您的英语成绩：" << endl;
	cin >> english;
	cout << "您输入的分数为：" << english << endl;
	//注意事项：if后面不要加分号，加上分号后代表if语句已经执行结束
	if (english > 100)
	{
		cout << "选英语专业" << endl;
		if (english >110)
		{
			cout << "牛的~" << endl;
		}
	}
	else if(english>80)
	{
		cout << "可以可以" << endl;
	}
	else if (english > 60)
	{
		cout << "那也可以" << endl;
	}
	else
	{
		cout << "行" << endl;
	}


	system("pause");

	return 0;
}