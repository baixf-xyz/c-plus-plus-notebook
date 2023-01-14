#include<iostream>
using namespace std;
int* func()
{
	//利用new关键字 可以将数据开辟到堆区
	// new返回的是 该数据类型的指针
	//指针 本质也是局部变量，可放在栈上，指针保存的数据是放在堆区
	int* a = new int(10);
	return a;
}

//在堆区new开辟一个数组
int *test02(){
	//在堆区创建有10个元素整形数据的数组
	int *arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i+ 100;
	}
	return arr;
	//释放堆区数组 delete[]
	delete[] arr;
}

int main61() {

	//在堆区开辟数据
	int* p = func();

	cout << *p << endl;//解引用
	cout << *p << endl;//并没有释放，堆区的数据由程序员管理释放
	//释放堆区的数据 利用关键字delete 
	delete p;
	//cout << *p << endl;//内存已经释放了，再次访问会报错
	int* q = test02();
	for (int i = 0; i < 10; i++)
	{
		cout << *(q++) << endl;
	}


	//总结:
	//堆区数据由程序员管理开辟和释放
	//堆区数据利用new关键字进行开辟内存

	system("pause");

	return 0;
}