# include<iostream>
using namespace std;

//访问权限
//三种
//公共权限 public     成员 类内可以访问 类外也可以访问
//保护权限 protected  成员 类内可以访问 类外不可以访问 子类也可以访问
//私有权限 private    成员 类内可以访问 类外不可以访问 子类不可以访问

class Person
{
	//公共权限
public:
	string m_Name;

protected:
	string m_Car;

private:
	string m_Password;

public: //private或者protected定义在Class类内均属于类内成员；但是那样的话类外不可以调用了
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = "123456";
	}
};

int main73()
{
	//实例化一个对象
	Person p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰"; 保护权限不可访问
	//p1.m_Password = "123456789"; 私有权限不可访问

	system("pause");
	return 0;
}