#pragma once
#include<iostream>
#include"point.h"
using namespace std;


class Cicle
{
public:
	void set_R(int r);
	int get_R();
	void set_Center(Point center);
	Point get_Center();

private:
	int m_R;//�뾶
	//������ ��������һ���� ���������еĳ�Ա
	Point m_Center;//Բ��
};