//250314 ��ü����1 2����
//C++ �ǽ��ϱ�

//#include <stdio.h>		//ǥ�� ����� ���̺귯��(�׳� C����)
#include <iostream> //.h  �Ƚᵵ ��
using namespace std;  //���� ������ cout �տ� std �� �ᵵ ok

//��ü ����(Ŭ���� ����)
class Circle {
	//Ư��
	int radius;

	//�Լ�-���
	double getArea(int r) {
		return 3.14 * r * r;
	}
};


double area(int a) {		//�Ҽ���(������) ���ϱ⶧���� ��ȯ double��
	//�ٸ� �����̱⶧���� �����̸� ���Ƶ� �ȴ�...
	//�����ص��Ǵµ� �������� �����ؼ� �ϴ°� ����
	return a * a * 3.14;
}


int main(void) {
	
	int a = 10;

	//����ϱ�
	//printf("hello world!");
	std::cout << "Hello, world" << std::endl;		// std::	�ý����� cout�� endl�� ����;�(c out �̶�� ������ ��!!)
	std::cout << a << ' ' << "hiru" << "		  " << 3.13 << std::endl; //���� %��¼�� �Ⱦ���!!
	cout << true << ' ' << false << endl;		//true/false�� ù ����!!��~
	cout << "���� ������" << area(a) << endl;		//�Լ��� 3���: �Լ��̸�, �Ű�����, ���ϰ�(Ÿ��)(��µǴ��� �ȵǴ���?)

	//�Է��ϱ�

	int w, h;
	cout << "���� �Է�";
	cin >> w;	//���� ������ >>		w�� ���� �ְ�;�!!��� �����ϸ� �ܿ�� ��������...?
	cout << "���� �Է�";
	cin >> h;
	cout << "�簢���� ������..." << w * h << endl;

	//���ڿ� �Է�
	
	cout << "�̸��� �Է��ϼ���: ";

	char name[11];
	cin >> name;		
	cout << "����� �̸��� " << name << "�̱���?";


	//��ü ����

	Circle pizza; //pizza��� ��ü ������

	return 0;
}