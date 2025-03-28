#include <iostream>
using namespace std;

//클래스 = 특성(멤버변수) + 기능, 행위(멤버함수) + '생성자함수'(2교시)
//예) 무언가 = 특징 + 동작

//클래스 정의하기 -> 아직 메모리 할당되지 않은 상태...
class Circle {
//public:	//내 멤버 public하게 할게요!
private: //캡슐화... 생략가능!
	//원의 특성: 반지름
	int radius;	
public: //중간에 넣을 수도 있어요...이 줄 이하 캡슐내 멤버는 모두 public이라는 뜻
	
	//생성자 함수-객체가 생성될 떄 초기값을 지정하는 등...의 초기 동작을 함...(그래서 리턴을 안 하는구나?)
	//특: 클래스와 이름이 같음, 리턴 하지않음(리턴이라는 개념 자체가 없음...그래서 void도 안씀), 
	// 객체 생성시(선언시) 자동으로 호출됨...
	//여러개를 만들 수 있음 => 함수중복(overloading)...단, 매개변수의 '타입과 수'를 달리 해야함.
	Circle() {
		radius = 10; //내 멤버에 바로 접근 가능
	}

	Circle(int r) {
		radius = r;
	}

	//main은 안되지만 getArea는 radius에 접근할 수 있음을 이용하자
	//set기능 만들기
	void setRadius(int r) {
		radius = r;
	}
	int getRadius() {
		return radius;
	}
	//원으로 하는 행위: 면적을 구한다
	//기능: 면적을 구하다
	//함수의 요소: 리턴값(데이터타입), 이름(보통 동사로지음), 매개변수
	double getArea() {
		return 3.14 * radius * radius;
	}
};
int main() {
	//선언: 메모리할당해줘!!
	//circle이라는 공간안에 radius의 공간과 getArea의 공간이 있다
	Circle donut; //여기서 Circle은 클래스고 donut은 객체?... //Circle 생성자 함수를 자동으로 호출함...
	//donut.radius = 10; //error: raidus는 private임
	//donut.setRadius(10);	//radius를 10으로 만드는 함수 //생성자 함수에서 초기값 지정했기 때문에 굳이 필요하지않음
	double result = donut.getArea();	//왜 안돼!!!!!!??? -> 각각 캡슐화되어있기 떄문에 main에서 circle의 멤버 사용 할 수 없음 -> public 있어야함
	cout << "도넛의 면적은..." << result << endl;

	//다른 Circle만들기
	//Circle pizza;	//여기서도 생성자 호출 했습니다요...pizza.radius=10
	Circle pizza(5); //매개변수 존재하는 생성자함수 바로 호출 가능
	cout << "초기 피자의 반지름은..." << pizza.getRadius() << endl;
	pizza.setRadius(25);	//괄호 써야돼요...이제 이 함수는 중간에 반지름을 바꾸고 싶을 떄 사용하면 되는거임 ㅋㅋ
	cout << "피자의 면적은..." << pizza.getArea() << endl;	//함수에 괄호 빼먹지 말랬지!!!!!!!!!!!!!!!!!!!!!!!1
	
	//get~: public타입의 함수를 만들어서 값을 반환하자...

	cout << "도넛의 반지름은..." << donut.getRadius() << endl;
	cout << "피자의 반지름은..." << pizza.getRadius() << endl;

	//class를 주고 set, get기능 함수를 작성하는 문제를 출제할 수도 있어요...

	//다양한 반지름을 가진 객체도 만들고싶어요!******
	//set기능의 함수에 매개변수를 설정하면 됩니다요(하하하)



	return 0;
}