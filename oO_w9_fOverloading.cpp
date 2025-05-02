// 20250502 객체지향언어1
// static 멤버
// 교재 296...

#include <iostream>
using namespace std;

class Circle {
	int radius;
	static int numOfCircles;
public:
	Circle(int r = 1)
	{
		radius = r;
		numOfCircles++;
	}
	int getRadius()
	{
		return radius;
	}
};

int Circle::numOfCircles = 0;	//static 변수 초기화

int main()
{
	cout << Circle::numOfCircles << endl;
	Circle pizza;
}