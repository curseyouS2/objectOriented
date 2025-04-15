//헤더파일...EXP 정의 되었었는지 체크.
//헤더파일: 선언부.
// 클래스  선언하기...
//클래스에는 멤버 변수, 멤버 함수, 생성자 함수, 소멸자 함수... 
#ifndef EXP_H
#define EXP_H

class Exp {
	int base, exp;
public:
	Exp(int base, int exp);
	Exp(int base);
	Exp();

	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp o);
};
#endif//if문 끝