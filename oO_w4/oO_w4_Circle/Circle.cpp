//250328 ��ü������1
//3�� Ŭ������ ��ü...

//Ŭ���� ������
#include <iostream>
using namespace std;

#include "Circle.h"		//���� ���̺귯���� <>, ����� ���̺귯���� ""

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}


