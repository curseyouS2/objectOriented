//20250418 ��ü������1 7����
//5.2 �Լ� ȣ��� ��ü �����ϱ�(��, �ּҿ� ���� ����)
//5.4 ���� ���� ��� (231p)
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int Radius) { this->radius = radius; }
};

void increaseCircleValue(Circle c) {
	int r = c.getRadius();	//r�� c�� radius���� ����
	c.setRadius(r + 1);	//c�� radius���� �缳��
}

void increaseCircleAddress(Circle *c) {
	int r = (*c).getRadius();	//'*c': c�� �ּҸ� ���󰡼���~
	(*c).setRadius(r + 1);
	//cout << r;
}

void increaseCircleRef(Circle &c) {
	int r = c.getRadius();
	c.setRadius(r + 1);	//������ ������� �ʰ� ���� ���� ȣ���� ����� �����س� �� �ִ�!!!(C++�� �߰���)
}

int main(void) {
//C++������ ���ο� ���� ���!!!!!!!
//���� ���� ���...���� ������ �Ű������� �ִ� ���(call by reference)
	Circle circle(10);	//circle ����

	//���� ����...������ ���� �����ϴ� ��ó�� &�� ���δ�!
	Circle &refc = circle;	//���� typedef���� �����̴�...
	
	refc.setRadius(20);	//circle�� ������ �ٲ�!!!!
	cout << refc.getRadius() << endl;
	cout << circle.getRadius() << endl;	//���� ���� ����...(�ֳĸ� �׳� �����̴ϱ�!!!

	Circle waffle(30);
	//�� ���� ��� (��� ���� ��ȣ��, �Լ��� ��� �� �� ����, �޸� ����)
	increaseCircleValue(waffle);
	cout << "���� ���� ����..." << waffle.getRadius() << endl;	//30

	//�ּ� ���� ��� (ĸ��ȭ �ı���, �Լ��� ��� �� �� ����, �޸� ����, �迭 ���� �̵�)
	increaseCircleAddress(&waffle);
	cout << "�ּҿ� ���� ����..." << waffle.getRadius() << endl;	//31

	//���� ���� ���
	increaseCircleRef(waffle);
	cout << "������ ���� ����..." << waffle.getRadius() << endl;	//31
	
	return 0;
}
//�Լ� �ʹ� ���� �ɰ��� ����...
//���α׷� ���� �� ��ü ����, �Լ� ����....�����غ� ��...................................