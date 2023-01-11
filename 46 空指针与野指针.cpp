# include <iostream>
using namespace std;

int main46()
{
	//空指针
	//1.用于给指针变量进行初始化，指针变量指向内存中编号为0的空间
	int* p = NULL;
	//2.空指针不可以进行访问
	//原因：0~255编号的内存是系统占用的，因此不可以访问
	//cout << *p << endl;
	//*p = 100; 
	//cout << *p << endl; 

	//野指针
	//int* p = (int*)0x1000; 
	//cout << *p << endl; //引发异常，读取访问冲突，该地址并未申请，非常危险！！
	


	cout << "Hello World" << endl;
	system("pause");

	return 0;
}