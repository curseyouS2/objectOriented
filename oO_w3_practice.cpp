#include <iostream>
using namespace std;
//Ŭ���� = Ư��(�������) + ���, ����(����Լ�) + '�������Լ�'(2����)

//Ŭ���� ����� �ƴ�
class Circle {	
	int radius;
public:
	
	//�������Լ�
	Circle();
	Circle(int r);
	
	//�Ҹ����Լ�...class�� �̸��� ����, ��, �̸��տ� '~'�� ����, ��ȯ ��ü�� ����...'���� �ϳ��� ����(�Լ��ߺ�X, �Ű�������x)
	~Circle();
	int getRadius();
};

//Ŭ���� ������
Circle::Circle() {	//���������� '::' ����
	radius = 1;
	cout << "��������" << radius << "�� �� ����" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "��������" << radius << "�� �� ����" << endl;
}
Circle::~Circle() {
	cout << "��������" << radius << "�� �� ����" << endl;
}
int Circle::getRadius() {
	return radius;
}

int main() {
	
	Circle donut;
	Circle pizza(5);

	cout << donut.getRadius() << endl;
	cout << pizza.getRadius() << endl;

	//����غ��� ���� ������ �������� ������ ���� ���� ������ �� ���ÿ� �Ҵ���� �� �� �ִ�...(�ڷᱸ��!!)
	//malloc()�� freec()...�޸� �Ҵ翡 ����...

	return 0;
}