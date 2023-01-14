# include <iostream>
using namespace std;
//1.设计英雄结构体
struct hero {
	string name;
	int age;
	string sex;
};
//地址传递
void bubblesort(struct hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int ini = 0;
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				int flag = arr[j].age;
				arr[j].age = arr[j + 1].age;
				arr[j + 1].age = flag;
				ini = 1;
			}
		}
		if (ini == 0)
		{
			cout << "在i=" << i << "时跳出" << endl;
			break;
		}
	}
}
//地址传递，打印数组
void printHeros(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名： " << arr[i].name << " 性别： " << arr[i].sex << " 年龄： " << arr[i].age << endl;
	}
}
int main58()
{
	//2.创建数组存放五名英雄
	struct hero harray[] = { {"刘备",22,"男"},{"关羽",22,"男"} ,{"张飞",20,"男"} ,{"赵云",21,"男"} ,{"貂蝉",19,"女"} };
	int length = sizeof(harray) / sizeof(harray[0]);
	//3.冒泡排序
	bubblesort(harray, length);
	//4.打印排序后数组信息
	printHeros(harray, length); 
	
	cout << "Hello World" << endl;
	system("pause");

	return 0;
}