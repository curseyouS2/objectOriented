//20250418 객체지향언어1 7주차
//5.2 함수 호출시 객체 전달하기(값, 주소에 의한 전달)
//5.4 참조 전달 기법 (231p)
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int Radius) { this->radius = radius; }
};

void increaseCircleValue(Circle c) {
	int r = c.getRadius();	//r에 c의 radius값을 저장
	c.setRadius(r + 1);	//c의 radius값을 재설정
}

void increaseCircleAddress(Circle *c) {
	int r = (*c).getRadius();	//'*c': c의 주소를 따라가세요~
	(*c).setRadius(r + 1);
	//cout << r;
}

void increaseCircleRef(Circle &c) {
	int r = c.getRadius();
	c.setRadius(r + 1);	//포인터 사용하지 않고도 값의 의한 호출의 결과를 도출해낼 수 있다!!!(C++에 추가됨)
}

int main(void) {
//C++에서의 새로운 전달 기법!!!!!!!
//참조 전달 기법...참조 변수를 매개변수로 넣는 방법(call by reference)
	Circle circle(10);	//circle 선언

	//참조 변수...포인터 변수 선언하는 것처럼 &를 붙인다!
	Circle &refc = circle;	//뭔가 typedef같은 느낌이다...
	
	refc.setRadius(20);	//circle의 반지름 바뀜!!!!
	cout << refc.getRadius() << endl;
	cout << circle.getRadius() << endl;	//둘의 값은 같다...(왜냐면 그냥 별명이니까!!!

	Circle waffle(30);
	//값 전달 방식 (멤버 변수 보호됨, 함수의 결과 알 수 없음, 메모리 낭비)
	increaseCircleValue(waffle);
	cout << "값에 의한 전달..." << waffle.getRadius() << endl;	//30

	//주소 전달 방식 (캡슐화 파괴됨, 함수의 결과 알 수 있음, 메모리 절약, 배열 사용시 이득)
	increaseCircleAddress(&waffle);
	cout << "주소에 의한 전달..." << waffle.getRadius() << endl;	//31

	//참조 전달 방식
	increaseCircleRef(waffle);
	cout << "참조에 의한 전달..." << waffle.getRadius() << endl;	//31
	
	return 0;
}
//함수 너무 많이 쪼개지 말것...
//프로그램 구상 시 객체 개수, 함수 개수....생각해볼 것...................................