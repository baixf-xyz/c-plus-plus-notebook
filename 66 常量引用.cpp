#include<iostream>
using namespace std;
//引用使用的场景，通常用来修饰形参,防止误操作

//打印数据函数，并不希望被修改，保护 常量引用参数 不被修改（值传递占空间）
void showValue(const int& v) {
	//v += 10;v=1000;//错误，常量不可以修改
	cout << v << endl;
}

int main66() {

	//int& ref = 10; //错误，引用本身需要一个合法的内存空间
	
	//加入const就可以了，编译器优化代码【编译器立大功】
	//int temp = 10; const int& ref = temp;
	const int& ref = 10;

	//ref = 100;  //加入const后不可以修改变量
	cout << ref << endl;

	//函数中利用常量引用防止误操作修改实参
	int a = 10;
	showValue(a);

	system("pause");

	return 0;
}