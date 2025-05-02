// 20250502 ��ü������1
// ���� ������
// ���� 246p...

/*���蹮��->�ڵ����� ���ԵǴ� ��������ڸ� ���ÿ�...
�⸻ ���� ����... ���� �����ں���!!*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class Person 
{
	char* name;
	int id;
	
public:
	Person(int id, const char* name);//�Ű����� ���ڿ� �տ� const ���ִ°� ����
	Person(const Person& person);	 //�⺻ ���� ������ 
	//������ person�� �Ű������� ����...
	~Person();
	void changeName(const char* name);
	void show() {
		cout << id << "," << name << endl;
	}
};

Person::Person(int id, const char* name) 
{
	this->id = id;
	int len = strlen(name);			// �ΰ� ��������
	this->name = new char[len + 1];	// ��ü(this)�� name�� ���ڿ�+1��ŭ �����Ҵ�(�ΰ�������)
									// ��ü�� ������ name�� �Ҵ�� �޸��� �����ּ� �Ҵ�
	strcpy(this->name, name);		// �Ҵ�� �޸𸮿� ��ü�� name ����
}

/*Person::Person(const Person& person)	//�ڵ����� �����Ǵ� �⺻ ���� ������...���� ���簡 ��.
{
	this->id = person.id;
	this->name = person.name;
}*/

Person::Person(const Person& person)
{
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];	// ���ο� �޸𸮸� ����� ������ �浹���� �ʰ� ��
	strcpy(this->name, person.name);	//this�� ��������
	cout << "���� �Ϸ�!" << endl;
}

Person::~Person()	//�������� �޸� �Ҵ��߱� ������ �Ҹ��� ȣ���ؼ� �����ؾ���
{
	if (name)
	{
		delete[] name;
	}
}

void Person::changeName(const char* name) 
{
	if (strlen(this->name) < strlen(name)) //�� ���ڿ��� ���� ���ڿ��� �Ҵ�� ���̺��� ��ٸ�
	{
		return;
	}
	strcpy(this->name, name);
}

int main() 
{
	Person father(1, "Kitae");	// �ֵ���ǥ: ���ڿ��� �޸� �Ҵ��Ұ�^^ �׸��� ���� \0�� ������
								// == ���ڿ��� ù��° �ּҸ� �˸� �ǰڱ���~
	Person daughter(father);	//��������� ȣ���

	father.show(); daughter.show();
	daughter.changeName("Grace");
}												