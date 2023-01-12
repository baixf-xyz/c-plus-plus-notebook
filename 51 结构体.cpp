# include <iostream>
#include<string>
using namespace std;
/*
结构体属于用户自定义的数据类型，本质：一些类型集合组成的一个类型
语法：struct 结构体名 { 结构体成员列表 }；
*/
//1.创建学生类型
struct Student
{
	//成员列表
	string name;
	int age;
	float score;
}s3;//顺便创建一个变量

int main51()
{
	//2.通过学生类型创建具体学生
	//2.1 struct Student s1;//数据类型 变量类型 变量名
	//struct的关键字可以省略
	//struct Student s1;
	Student s1;
	//结构体变量利用点(.)访问成员变量
	s1.name = "张三";
	s1.age = 16;
	s1.score = 100;
	cout << "姓名：\t" << s1.name << "年龄：\t" << s1.age << "成绩：\t" << s1.score << endl;
	
	//2.2 struct Student s2 = {};
	struct Student s2 = {"李四",15,98};
	cout << "姓名：\t" << s2.name << "年龄：\t" << s2.age << "成绩：\t" << s2.score << endl;

	//2.3 在定义结构体时顺便创建结构体变量
	s3.name = "王五";
	s3.age = 14;
	s3.score = 99;
	cout << "姓名：\t" << s3.name << "年龄：\t" << s3.age << "成绩：\t" << s3.score << endl;

	cout << "Hello World" << endl;
	system("pause");

	return 0;
}