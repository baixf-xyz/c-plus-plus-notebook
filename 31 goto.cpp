# include <iostream>
using namespace std;
/*
goto���
���ã�������������ת���
�﷨��goto �������
���ͣ������ǵ����ƴ��ڣ�ִ�е�goto���ʱ������ת����ǵ�λ��
*/
int main31()
{
	cout << "1" << endl;
	//�ڳ����в�����ʹ��goto��䣬������ɳ������̻���
	goto FLAG;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
FLAG:
	cout << "5" << endl;
	system("pause");
	return 0;
}