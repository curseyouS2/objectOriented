//250314 객체지향1 2주차
//C++ 실습하기

//#include <stdio.h>		//표준 입출력 라이브러리(그냥 C에서)
#include <iostream> //.h  안써도 됨
using namespace std;  //이제 앞으로 cout 앞에 std 안 써도 ok

//객체 생성(클래스 생성)
class Circle {
	//특성
	int radius;

	//함수-기능
	double getArea(int r) {
		return 3.14 * r * r;
	}
};


double area(int a) {		//소수점(원주율) 곱하기때문에 반환 double로
	//다른 지역이기때문에 변수이름 같아도 된다...
	//일케해도되는데 지역변수 선언해서 하는게 좋음
	return a * a * 3.14;
}


int main(void) {
	
	int a = 10;

	//출력하기
	//printf("hello world!");
	std::cout << "Hello, world" << std::endl;		// std::	시스템의 cout와 endl을 쓰고싶어(c out 이라고 읽으면 됨!!)
	std::cout << a << ' ' << "hiru" << "		  " << 3.13 << std::endl; //이제 %어쩌구 안쓴다!!
	cout << true << ' ' << false << endl;		//true/false의 첫 등장!!와~
	cout << "원의 면적은" << area(a) << endl;		//함수의 3요소: 함수이름, 매개변수, 리턴값(타입)(출력되는지 안되는지?)

	//입력하기

	int w, h;
	cout << "가로 입력";
	cin >> w;	//추출 연산자 >>		w에 값을 넣고싶어!!라고 생각하면 외우기 쉬울지도...?
	cout << "세로 입력";
	cin >> h;
	cout << "사각형의 면적은..." << w * h << endl;

	//문자열 입력
	
	cout << "이름을 입력하세요: ";

	char name[11];
	cin >> name;		
	cout << "당신의 이름은 " << name << "이군요?";


	//객체 생성

	Circle pizza; //pizza라는 객체 생성됨

	return 0;
}