//250328 객체지향언어1
//3장 클래스와 객체...

//메인...객체 생성

#include <iostream>
using namespace std;

#include "Circle.h"


int main() {
	
	//객체 생성
	Circle donut;
	cout << "도넛의 면적: " << donut.getArea() << endl;
	Circle pizza (4);
	cout << "도넛의 면적: " << pizza.getArea() << endl;

}