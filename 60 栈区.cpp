#include<iostream>
using namespace std;

//栈区注意事项：不要返回局部变量的地址,程序结束时由操作系统回收
//战区的数据由编译器管理开辟和释放

int* func(int b)//形参数据也会放在栈区
{
	b = 100;
	int a = 10;//局部变量 存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;//返回局部变量的地址
}

int main60() {

	//接受func函数的返回值
	int* p = func(1);

	cout << *p << endl; //解引用操作，第一次可以打印正确的数据，是因为编译器做了保留
	cout << *p << endl; //一般情况 第二次就不会保留了~ 因为内存已经被释放了

	system("pause");

	return 0;
}