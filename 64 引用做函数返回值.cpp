#include<iostream>
using namespace std;

//返回局部变量引用
int& test01() {
	int a = 10; //局部变量 存放在栈区 会随着函数调用结束释放
	return a;
}

//返回静态变量引用
int& test02() {
	static int a = 20;
	return a;
}

int main64() {

	//不能返回局部变量的引用
	int& ref = test01();
	cout << "ref = " << ref << endl;//第一次会输出正确答案，因为编译器做了保留
	cout << "ref = " << ref << endl;//第二次输出错误，是非法操作

	//如果函数做左值，那么必须返回引用
	int& ref2 = test02();//ref是函数返回值a的别名
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;//本质就是对test02的返回值做了一次赋值操作

	//cout << "a = " << a << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}