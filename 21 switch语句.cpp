# include <iostream>
using namespace std;

//switch语句 四个关键字：switch、case、break、default
//作用：执行多条分支语句
//缺点：判断的时候只能是整型或者字符型，不可以是一个区间
//优点：结构清晰，执行效率高

int main21()
{
		//请给电影评分 
		int score = 0;
		cout << "请给电影打分（10进制）：" << endl;
		cin >> score;

		switch (score)
		{
		case 10:
		case 9:
			cout << "经典" << endl;
			break;//退出当前分支
		case 8:
			cout << "非常好" << endl;
			break;
		case 7:
		case 6:
			cout << "一般" << endl;
			break;
		default:
			cout << "烂片" << endl;
			break;
		}

	system("pause");

	return 0;
}