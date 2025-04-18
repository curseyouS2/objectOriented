//250404 객체지향1 5주차
//객체 포인터와 객체 배열 ...
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

	Circle donut;

	cout << "도트 연산자를 이용한 도넛의 면적은..." << donut.getArea() << endl;
	
	//아까 cin을 사용했을 때 안 된 이유는 radius가 private이기 때문...
	//엑세스할 수 없습니다 라고 오류가 뜸... (E0265, C2248)
	//cin >> donut.radius;
	//cout << "도넛의 반지름은..." << donut.radius << endl;
	//변수를 보호하기 위해 캡슐화를 했기 떄문에~ 멤버함수를 작성하는 이유를 생각...

	//객체 포인터 선언...
	//포인터의 타입은 가르키는 대상의 타입과 같다...약속임.여러 이점이 있음...
	Circle* p = &donut; //포인터의 타입, 저장할 주소.
	//이제 donut뿐만 아닌 p로도 호출이 가능하다...
	cout << "포인터(->)를 이용한도넛의 면적은..." << p->getArea() << endl;

	Circle pizza(30);
	Circle* q = &pizza;
	cout << "q->를 이용한 피자의 면적은..." << q->getArea() << endl;	//둘 다 됨...	
	cout << "*q를 이용한 피자의 면적은..." << (*q).getArea() << endl;	//c와 같은 문법...// .이 ->보다 우선순위가 높다...
	//*q에는 이동하라는 것까지(->) 포함이 되어있다... 
	//선언할때는 타입에 *을 붙이고 호출시에는 붙여쓰는 걸로 구분하자. 
	//EX) Circle* p 와 그냥 *p...

	//객체 배열 선언 및 활용...배열: 연속적인 메모리...
	//선언법은 일반 배열과 같다!!!
	Circle circleAr[3]; //Circle() 생성자 (기본 생성자) 호출...

	for (int i=0; i < 3;i++) {
		cout << "circleAr[" << i << "]의 면적은..." << circleAr[i].getArea() << endl;
		//제발 함수 호출할 떄 괄호좀 써!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!11
	}

	//피자 지름 바꾸기...
	circleAr[0].setRadius(50);

	for (int i = 0; i < 3; i++) {
		cout << "변경된 circleAr[" << i << "]의 면적은..." << circleAr[i].getArea()/*진짜 괄호좀제발x100*/ << endl;
	}
	for (int i = 0; i < 3;i++) {
		cout << "circlear[" << i << "]의 반지름은..." << circleAr[i].getRadius() << endl;
	}
	
	//객체 배열과 포인터
	Circle circleB[3] = {Circle(10), Circle(), Circle(30)};
	//배열 초기화 시 생성자 함수 이용 가능...
	Circle* pB = &circleB[0];

	//포인터 변수에 +1을 한다면... 배열 한 칸의 크기만큼 더해짐...  
	//p+1을 하면 배열1의 주소가 된다...
	//좋은점: 클래스, 배열 별로 크기가 각각 다를 때 편하게 지칭할 수 있음...(일일히 계산하지 않아도 된다는 뜻)

	cout << pB->getRadius() << endl;	//0번 배열 pB=(p+0)을 이용해서 for문을 사용하면 좋다...
	cout << (pB + 1)->getRadius() << endl;	//1번 배열의 반지름... (주의! 괄호 써야됨)
	cout << (pB + 2)->getRadius() << endl;	//2q번 배열

	for (int i = 0; i < 3;i++) {
		cout <<"for문을 이용한 반지름은..." << (pB + i)->getRadius() << endl;
	}

	return 0;
}