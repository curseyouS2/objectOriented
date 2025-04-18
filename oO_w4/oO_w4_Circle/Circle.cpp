//250328 객체지향언어1
//3장 클래스와 객체...

//클래스 구현부
#include <iostream>
using namespace std;

#include "Circle.h"		//내장 라이브러리는 <>, 사용자 라이브러리는 ""

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}


