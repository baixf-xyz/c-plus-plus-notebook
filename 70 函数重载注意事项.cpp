//#include<iostream>
//using namespace std;
//
////��������ע������
////1��������Ϊ��������
//
//void func4(int& a) //���ñ�����һ���Ϸ����ڴ�ռ�
//{
//	cout << "func (int &a) ���� " << endl;
//}
//
//void func4(const int& a)//const int &a=10�ǺϷ���
//{
//	cout << "func (const int &a) ���� " << endl;
//}
//
//
////2������������������Ĭ�ϲ���
//
//void func5(int a, int b = 10)
//{
//	cout << "func2(int a, int b = 10) ����" << endl;
//}
//
//void func5(int a)
//{
//	cout << "func2(int a) ����" << endl;
//}
//
//int main70() {
//
//	int a = 10;
//	func4(a); //������const:func (int &a) ����
//	func4(10);//������const:func (const int &a) ����
//
//
//	//func5(10); //����Ĭ�ϲ����������壬�����ԣ���Ҫ����
//
//	system("pause");
//
//	return 0;
//}