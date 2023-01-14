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
	int m_R;//半径
	//在类中 可以用另一个类 当作本类中的成员
	Point m_Center;//圆心
};