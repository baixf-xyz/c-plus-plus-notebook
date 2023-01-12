# include <iostream>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};
int main53()
{
	//1.创建学生结构体变量
	struct student s1 = {"张三",16,100};

	//2.通过指针指向结构体变量
	struct student* p = &s1;
	
	//3.通过指针访问结构体变量中的数据
	//通过结构体指针 访问结构体中的属性，需要利用"->"
	cout << "学生姓名： "<< p->name<< " 学生年龄： " << p->age <<" 学生成绩： "<< p->score << endl;
	system("pause");

	return 0;
}