#include <iostream>
using namespace std;

#include "Exp.h"

Exp::Exp(int b, int e) {
	base = b; exp = e;
}
Exp::Exp(int b) {
	base = b; exp = 1;
}
Exp::Exp() {
	base = 1; exp = 1;
}

int Exp::getBase() {
	return base;
}
int Exp::getExp() {
	return exp;
}
int Exp::getValue() {
	int value = 1;
	for (int r = 0; r < exp; r++) {
		value *= base;
	}
	return value;
}
bool Exp::equals(Exp o) {	//호출하는 주인은 이름 꼭 쓰지않아도 됨...여기서는 .a안 써도 된다는...
	if (getValue() == o.getValue()) {
		return true;
	}
	else {
		return false;
	}
}