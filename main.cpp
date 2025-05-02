// 20250502 객체지향언어1
// 복사 생성자
// 교재 246p...

/*시험문제->자동으로 삽입되는 복사생성자를 쓰시오...
기말 시험 범위... 복사 생정자부터!!*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class Person 
{
	char* name;
	int id;
	
public:
	Person(int id, const char* name);//매개변수 문자열 앞에 const 써주는게 좋음
	Person(const Person& person);	 //기본 복사 생성자 
	//참조자 person을 매개변수를 받음...
	~Person();
	void changeName(const char* name);
	void show() {
		cout << id << "," << name << endl;
	}
};

Person::Person(int id, const char* name) 
{
	this->id = id;
	int len = strlen(name);			// 널값 전까지의
	this->name = new char[len + 1];	// 객체(this)의 name에 문자열+1만큼 공간할당(널값때문에)
									// 객체의 포인터 name에 할당된 메모리의 시작주소 할당
	strcpy(this->name, name);		// 할당된 메모리에 객체의 name 복사
}

/*Person::Person(const Person& person)	//자동으로 생성되는 기본 복사 생성자...얕은 복사가 됨.
{
	this->id = person.id;
	this->name = person.name;
}*/

Person::Person(const Person& person)
{
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];	// 새로운 메모리를 만들어 포인터 충돌하지 않게 함
	strcpy(this->name, person.name);	//this는 포인터임
	cout << "복사 완료!" << endl;
}

Person::~Person()	//동적으로 메모리 할당했기 때문에 소멸자 호출해서 제거해야함
{
	if (name)
	{
		delete[] name;
	}
}

void Person::changeName(const char* name) 
{
	if (strlen(this->name) < strlen(name)) //새 문자열이 기존 문자열에 할당된 길이보다 길다면
	{
		return;
	}
	strcpy(this->name, name);
}

int main() 
{
	Person father(1, "Kitae");	// 쌍따옴표: 문자열에 메모리 할당할게^^ 그리고 끝에 \0도 넣을게
								// == 문자열은 첫번째 주소만 알면 되겠구나~
	Person daughter(father);	//복사생성자 호출됨

	father.show(); daughter.show();
	daughter.changeName("Grace");
}												