# include <iostream>
using namespace std;
//������������
//��������ǰ���߱����������Ĵ��ڣ��������ú���������
int max(int a, int b);

int main42() {
	int a = 100;
	int b = 200;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}
//����
int max(int a, int b)
{
	return a > b ? a : b;
}
//�ܽ᣺�������Զ�Σ�����ֻ��һ��