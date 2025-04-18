//20250418 객체지향언어1 7주차
//5.1 값에 의한 호출과 주소에 의한 호출

#include <iostream>
using namespace std;

void swap_value(int m, int n)	//값 전달 기법
{
	int temp;
	temp = m;
	m = n;
	n = temp;
	cout << "swap_value가 작동된 결과..." << "m은 " << m << ", n은 " << n << endl;
}

void swap_address(int* a, int* b) 
{
	int temp;	
	//temp = m 이라고 한다면 두 변수의 타입이 다르기 때문에 오류... temp: 정수형 변수, 그냥 m: 주소값
	temp = *a;	//a를 역참조...temp에 저장 
	*a = *b;
	*b = temp;
	cout << "swap_address가 작동된 결과...함수 내 출력: " << "m은 " << *m << ", n은 " << *n << endl;
}

int main(void) {

	int m = 2, n = 9;
	cout << "m은 " << m << ", n은 " << n << endl;


	swap_value(m, n);	//m,n의 값을 교환하는 함수... main에서는 변경 안됨...
	// 값 전달 기법(call by value) 
	// 값을 복사해서 메모리가 추가로 요구됨...->지역변수 함수 끝나면 메모리 사라짐...(스택에 지역변수 생성됨)
	//일종의 캡슐화... 변수를 보호할 수 있음(실제 값은 변하지 않으니까)
	//캡슐화=정보보호=c언어에서의 값전달기법, c++에서는 클래스.(private)
	//전달 방식마다 장점과 단점이 있기 때문에 자료구조를 배우는 것
	//메모리측면: 단점... 함수 호출 시 메모리 추가로 필요함
	

	swap_address(&m, &n);
	cout << "swap_address가 작동된 결과..." << "m은 " << m << ", n은 " << n << endl;


	//주소 전달 기법 (call by address)
	//장점: 함수 간 변수 공유됨, 메모리 면에서 장점(메모리 공유)
	//단점: 정보보호 안됨 -> 함수가 많아질 경우 추적하기 힘듦... 

	//cout << m << n << endl;
	return 0;
}