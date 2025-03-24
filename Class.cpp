#include <iostream>

using namespace std;

class Student {
public:
	string name;
	int math;
	int english;
	int science;

private:
	int data;

protected:
	int data2;

	float Average() {
		return (math + english + science) / 3.0f;
	}
};

struct Student2 {
	string name;
	int math;
	int english;
	int science;

	float Average() {
		return (math + english + science) / 3.0f;
	}
};

class Constructor {
	int value1;
	int value2;
	int value3;

public:
	Constructor() {
		this->value1 = 0;
		this->value2 = 0;
		this->value3 = 0;
	}
	Constructor(int value) {
		this->value1 = value1;
		this->value2 = 0;
		this->value3 = 0;
	}
	Constructor(int value1, int value2, int value3) {
		this->value1 = value1;
		this->value2 = value2;
		this->value3 = value3;
	}
};

// �Ҹ���
class Destructor {
	int* ptr;

public:
	Destructor() {
		ptr = new int;
	}

	virtual ~Destructor() {
		delete ptr;
	}
};

int main_Class() {
	/*
	* Ŭ���� (class)
	* ��ü���� ���α׷��ֿ� ��ü�� ����� ���� ����
	* Ŭ������ ��ü�� ����� ���� ���赵�̸�, ������� ��ü�� �ν��Ͻ��� ��
	*/

	// <Ŭ���� ����>
	// class Ŭ�����̸� { Ŭ�������� };
	// Ŭ���� �������δ� ������ �Լ��� ���� ����
	// Ŭ������ ������ ������ �������, Ŭ������ ������ �Լ��� ����Լ���� ��

	// <����ü�� Ŭ������ ����>
	// C++���� Ŭ������ ����ü�� ���������� ����
	// �������� Ŭ������ �⺻���������ڴ� private, ����ü�� �⺻���������ڴ� public
	Student student;
	student.name = "ȫ�浿";
	student.math = 100;
	student.english = 100;
	student.science = 100;
	

	Student2 student2;
	student2.name = "�̼���";
	student2.math = 90;
	student2.english = 90;
	student2.science = 90;

	Constructor c();
	Constructor c1(1);
	Constructor c2(1, 2, 3);
	

	return 0;
}