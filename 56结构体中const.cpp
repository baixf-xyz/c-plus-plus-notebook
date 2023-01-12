# include <iostream>
using namespace std;

//学生结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制一个新的副本
//const使用场景：常量指针不可以改值，但可以改变指向
void printStudent(const student* stu) //加const防止函数体中的误操作
{
	//stu->age = 100; //操作失败，因为加了const修饰
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

}

int main56() {

	student stu = { "张三",18,100 };

	//值传递可行，但是浪费空间
	printStudent(&stu);

	system("pause");

	return 0;
}