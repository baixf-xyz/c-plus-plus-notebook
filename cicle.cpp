#include<iostream>
#include"point.h"
#include"cicle.h"
using namespace std;

void Cicle::set_R(int r) {
	m_R = r;
}
int Cicle::get_R() {
	return m_R;
}
void Cicle::set_Center(Point center) {
	m_Center = center;
}
Point Cicle::get_Center() {
	return m_Center;
}

