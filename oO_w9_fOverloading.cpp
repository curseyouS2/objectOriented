// 20250502 ��ü������1
// static ���
// ���� 296...

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

int Circle::numOfCircles = 0;	//static ���� �ʱ�ȭ

int main()
{
	cout << Circle::numOfCircles << endl;
	Circle pizza;
}