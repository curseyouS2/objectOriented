//�������...EXP ���� �Ǿ������� üũ.
//�������: �����.
// Ŭ����  �����ϱ�...
//Ŭ�������� ��� ����, ��� �Լ�, ������ �Լ�, �Ҹ��� �Լ�... 
#ifndef EXP_H
#define EXP_H

class Exp {
	int base, exp;
public:
	Exp(int base, int exp);
	Exp(int base);
	Exp();

	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp o);
};
#endif//if�� ��