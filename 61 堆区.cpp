#include<iostream>
using namespace std;
int* func()
{
	//����new�ؼ��� ���Խ����ݿ��ٵ�����
	// new���ص��� ���������͵�ָ��
	//ָ�� ����Ҳ�Ǿֲ��������ɷ���ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int* a = new int(10);
	return a;
}

//�ڶ���new����һ������
int *test02(){
	//�ڶ���������10��Ԫ���������ݵ�����
	int *arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i+ 100;
	}
	return arr;
	//�ͷŶ������� delete[]
	delete[] arr;
}

int main61() {

	//�ڶ�����������
	int* p = func();

	cout << *p << endl;//������
	cout << *p << endl;//��û���ͷţ������������ɳ���Ա�����ͷ�
	//�ͷŶ��������� ���ùؼ���delete 
	delete p;
	//cout << *p << endl;//�ڴ��Ѿ��ͷ��ˣ��ٴη��ʻᱨ��
	int* q = test02();
	for (int i = 0; i < 10; i++)
	{
		cout << *(q++) << endl;
	}


	//�ܽ�:
	//���������ɳ���Ա�����ٺ��ͷ�
	//������������new�ؼ��ֽ��п����ڴ�

	system("pause");

	return 0;
}