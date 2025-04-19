#include <iostream>
using namespace std;

int main(void) {
	int a = 0, b = 0;
	cout << "두 수를 입력하라>>";
	cin >> a >> b;	//여러 수 입력하기
	if (a > b) 
	{
		cout << "큰 수 = " << a;
	}
	else
	{
		cout << "큰 수 = " << b;
	}

	return 0;
}