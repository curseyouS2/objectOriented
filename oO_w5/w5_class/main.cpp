//250404 ��ü����1 5����
//��ü �����Ϳ� ��ü �迭 ...2
//���� ��ü ������ ��ȯ

//������ �ÿ� ������ ������ �޸� �Ҵ�...
//�ڵ� -> ������(���� �޸� ����) -> ��ũ -> �δ� -> ����...����(���� �޸� ����)
//c������ malloc() �� free ---> c++ ������ new Ÿ�� �� delete...
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();	//�⺻ ������
	Circle(int r);
	double getArea();
	int getRadius();		//get��� (���ϰ� ��)
	void setRadius(int r);	//set��� (���� ���ϰ� ��)
};	//Ŭ���� ����ÿ� �����ݷ� ���� ��...

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
	//���� ��ü ������ ��ȯ...
	//�̸� X, �ּҸ�...

	Circle* p, q;
	p = new Circle;
	q = new Circle(30);

	cout << p->getRadius() << endl;
	cout << q->getRadius() << endl;

	delete p, q	//�Ҹ��� ����...�Ҹ��� �ۼ��� ��...(�ٵ� �ۼ� ���ص� �ڵ����� ������ ����)

	return 0;
}