//#include<iostream>
//using namespace std;
//
////函数重载注意事项
////1、引用作为重载条件
//
//void func4(int& a) //引用必须是一个合法的内存空间
//{
//	cout << "func (int &a) 调用 " << endl;
//}
//
//void func4(const int& a)//const int &a=10是合法的
//{
//	cout << "func (const int &a) 调用 " << endl;
//}
//
//
////2、函数重载碰到函数默认参数
//
//void func5(int a, int b = 10)
//{
//	cout << "func2(int a, int b = 10) 调用" << endl;
//}
//
//void func5(int a)
//{
//	cout << "func2(int a) 调用" << endl;
//}
//
//int main70() {
//
//	int a = 10;
//	func4(a); //调用无const:func (int &a) 调用
//	func4(10);//调用有const:func (const int &a) 调用
//
//
//	//func5(10); //碰到默认参数产生歧义，二义性，需要避免
//
//	system("pause");
//
//	return 0;
//}