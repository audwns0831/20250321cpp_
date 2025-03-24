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

// 소멸자
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
	* 클래스 (class)
	* 객체지향 프로그래밍에 객체를 만들기 위한 형식
	* 클래스는 객체를 만들기 위한 설계도이며, 만들어진 객체는 인스턴스라 함
	*/

	// <클래스 선언>
	// class 클래스이름 { 클래스내용 };
	// 클래스 내용으로는 변수와 함수가 포함 가능
	// 클래스에 포함한 변수를 멤버변수, 클래스에 포함한 함수를 멤버함수라고 함

	// <구조체와 클래스의 차이>
	// C++에서 클래스와 구조체는 본질적으로 같음
	// 차이점은 클래스의 기본접근제한자는 private, 구조체의 기본접근제한자는 public
	Student student;
	student.name = "홍길동";
	student.math = 100;
	student.english = 100;
	student.science = 100;
	

	Student2 student2;
	student2.name = "이순신";
	student2.math = 90;
	student2.english = 90;
	student2.science = 90;

	Constructor c();
	Constructor c1(1);
	Constructor c2(1, 2, 3);
	

	return 0;
}