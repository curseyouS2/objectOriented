//메인함수...
//선언부와 구현부에서 작성한 코드를 실제로 사용!!
#include <iostream>
using namespace std;

#include "Exp.h"

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스" << a.getBase() << ',' << "지수" << a.getExp() << endl;

	if (a.equals(b)) {
		cout << "same" << endl;
	}
	else {
		cout << "not same" << endl;
	}
}