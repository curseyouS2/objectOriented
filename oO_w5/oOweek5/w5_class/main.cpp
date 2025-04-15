//250404 객체지향1 5주차
//객체 포인터와 객체 배열 ...2
//동적 객체 생성과 반환

//컴파일 시에 오류가 없으면 메모리 할당...
//코딩 -> 컴파일(정적 메모리 생성) -> 링크 -> 로더 -> 빌드...실행(동적 메모리 생성)
//c에서의 malloc() 과 free ---> c++ 에서는 new 타입 과 delete...
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();	//기본 생성자
	Circle(int r);
	double getArea();
	int getRadius();		//get기능 (리턴값 유)
	void setRadius(int r);	//set기능 (보통 리턴값 무)
};	//클래스 선언시에 세미콜론 붙일 것...

Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}
void Circle::setRadius(int r) {
	radius = r;
}
int Circle::getRadius() {
	return radius;
}


int main() {
	//동적 객체 생성과 반환...
	//이름 X, 주소만...

	Circle* p, q;
	p = new Circle;
	q = new Circle(30);

	cout << p->getRadius() << endl;
	cout << q->getRadius() << endl;

	delete p, q	//소멸자 가동...소멸자 작성할 것...(근데 작성 안해도 자동으로 생성됨 ㅋㅋ)

	return 0;
}