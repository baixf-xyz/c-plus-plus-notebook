# include <iostream>
using namespace std;

struct Student
{
	//成员列表
	string name;
	int age;
	float score;
};//顺便创建一个变量

int main52()
{
	struct Student stuarr[] = { {"张三",12,100},{"李四",16,85},{"王五",14,99} };

	stuarr[1] = {"谢腾飞",18,98};

	for (int i = 0; i < (sizeof(stuarr) / sizeof(stuarr[0]));i++)
	{
		cout << "姓名： " << stuarr[i].name 
			<< "年龄： " << stuarr[i].age 
			<< "成绩： " << stuarr[i].score << endl;
	}
	cout << "Hello World" << endl;
	system("pause");

	return 0;
}