//250404 ��ü����1 5����
//��ü �����Ϳ� ��ü �迭 ...
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

	Circle donut;

	cout << "��Ʈ �����ڸ� �̿��� ������ ������..." << donut.getArea() << endl;
	
	//�Ʊ� cin�� ������� �� �� �� ������ radius�� private�̱� ����...
	//�������� �� �����ϴ� ��� ������ ��... (E0265, C2248)
	//cin >> donut.radius;
	//cout << "������ ��������..." << donut.radius << endl;
	//������ ��ȣ�ϱ� ���� ĸ��ȭ�� �߱� ������~ ����Լ��� �ۼ��ϴ� ������ ����...

	//��ü ������ ����...
	//�������� Ÿ���� ����Ű�� ����� Ÿ�԰� ����...�����.���� ������ ����...
	Circle* p = &donut; //�������� Ÿ��, ������ �ּ�.
	//���� donut�Ӹ� �ƴ� p�ε� ȣ���� �����ϴ�...
	cout << "������(->)�� �̿��ѵ����� ������..." << p->getArea() << endl;

	Circle pizza(30);
	Circle* q = &pizza;
	cout << "q->�� �̿��� ������ ������..." << q->getArea() << endl;	//�� �� ��...	
	cout << "*q�� �̿��� ������ ������..." << (*q).getArea() << endl;	//c�� ���� ����...// .�� ->���� �켱������ ����...
	//*q���� �̵��϶�� �ͱ���(->) ������ �Ǿ��ִ�... 
	//�����Ҷ��� Ÿ�Կ� *�� ���̰� ȣ��ÿ��� �ٿ����� �ɷ� ��������. 
	//EX) Circle* p �� �׳� *p...

	//��ü �迭 ���� �� Ȱ��...�迭: �������� �޸�...
	//������� �Ϲ� �迭�� ����!!!
	Circle circleAr[3]; //Circle() ������ (�⺻ ������) ȣ��...

	for (int i=0; i < 3;i++) {
		cout << "circleAr[" << i << "]�� ������..." << circleAr[i].getArea() << endl;
		//���� �Լ� ȣ���� �� ��ȣ�� ��!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!11
	}

	//���� ���� �ٲٱ�...
	circleAr[0].setRadius(50);

	for (int i = 0; i < 3; i++) {
		cout << "����� circleAr[" << i << "]�� ������..." << circleAr[i].getArea()/*��¥ ��ȣ������x100*/ << endl;
	}
	for (int i = 0; i < 3;i++) {
		cout << "circlear[" << i << "]�� ��������..." << circleAr[i].getRadius() << endl;
	}
	
	//��ü �迭�� ������
	Circle circleB[3] = {Circle(10), Circle(), Circle(30)};
	//�迭 �ʱ�ȭ �� ������ �Լ� �̿� ����...
	Circle* pB = &circleB[0];

	//������ ������ +1�� �Ѵٸ�... �迭 �� ĭ�� ũ�⸸ŭ ������...  
	//p+1�� �ϸ� �迭1�� �ּҰ� �ȴ�...
	//������: Ŭ����, �迭 ���� ũ�Ⱑ ���� �ٸ� �� ���ϰ� ��Ī�� �� ����...(������ ������� �ʾƵ� �ȴٴ� ��)

	cout << pB->getRadius() << endl;	//0�� �迭 pB=(p+0)�� �̿��ؼ� for���� ����ϸ� ����...
	cout << (pB + 1)->getRadius() << endl;	//1�� �迭�� ������... (����! ��ȣ ��ߵ�)
	cout << (pB + 2)->getRadius() << endl;	//2q�� �迭

	for (int i = 0; i < 3;i++) {
		cout <<"for���� �̿��� ��������..." << (pB + i)->getRadius() << endl;
	}

	return 0;
}