#include<iostream>
using namespace std;
//学生类
class Student {

	//类中的属性和行为 我们统一称为 成员
	//属性 成员属性 成员变量
	//行为 成员函数 成员方法

public: //公共权限
	void setName(string name) {
		m_name = name;
	}
	void setID(int id) {
		m_id = id;
	}

	void showStudent() {
		cout << "name:" << m_name << " ID:" << m_id << endl;
	}

public://公共权限
	//属性
	string m_name;
	int m_id;
};

int main72() {

	//实例化 创建一个具体的对象
	Student stu;
	stu.setName("德玛西亚");
	stu.setID(250);
	stu.showStudent();

	system("pause");

	return 0;
}
