#include <iostream>
using namespace std;
//클래스 = 특성(멤버변수) + 기능, 행위(멤버함수) + '생성자함수'(2교시)

//클래스 선언부 아님
class Circle {	
	int radius;
public:
	
	//생성자함수
	Circle();
	Circle(int r);
	
	//소멸자함수...class와 이름이 같음, 단, 이름앞에 '~'를 붙임, 반환 자체가 없음...'오직 하나만 존재(함수중복X, 매개변수도x)
	~Circle();
	int getRadius();
};

//클래스 구현부
Circle::Circle() {	//생성지정자 '::' 주의
	radius = 1;
	cout << "반지름이" << radius << "인 원 생성" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름이" << radius << "인 원 생성" << endl;
}
Circle::~Circle() {
	cout << "반지름이" << radius << "인 원 제거" << endl;
}
int Circle::getRadius() {
	return radius;
}

int main() {
	
	Circle donut;
	Circle pizza(5);

	cout << donut.getRadius() << endl;
	cout << pizza.getRadius() << endl;

	//출력해보면 들어온 순서의 역순으로 나가는 것을 통해 생성될 때 스택에 할당됨을 알 수 있다...(자료구조!!)
	//malloc()과 freec()...메모리 할당에 관련...

	return 0;
}