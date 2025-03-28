//250328 객체지향언어1
//3장 클래스와 객체...

//클래스 선언부-조건부 컴파일

#ifndef CIRCLE_H	//만약 def한적 없다면... if n(ot) def(ine)
#define CIRCLE_H

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

#endif	//if절 끝~

