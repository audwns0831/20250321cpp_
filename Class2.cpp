#include <iostream>
#include "Dummy.h"

using namespace std;

class Dummy2 {
	int num;
	string name;

public:
	void Print() {
		cout << "num = " << num << ", name = " << name << endl;
	};
	void SetData(int idx, string n) {
		num = idx;
		name = n;
	};
};

// <복사생성자>
// 다른 인스턴스의 데이터를 복사하여 새로운 인스턴스를 생성하는 생성자
// 복사생성자를 구현하지 않는 경우 자동으로 생성되며, 자동으로 생성된 복사생성자는 얇은복사를 진행
class CopyConstructor {
public:
	int* shallowPtr;
	int* deepPtr;
	int shallowInt;
	int deepInt;

	CopyConstructor() {
		shallowPtr = nullptr;
		deepPtr = new int;
		shallowInt = 0;
		deepInt = 0;
	}
	virtual ~CopyConstructor() {
		delete deepPtr;
	}
	CopyConstructor(const CopyConstructor& other) {
		// <얇은복사, 깊은복사>
		// 얇은복사 : 변수에 저장되어있는 값을 복사하는 것으로 포인터변수인 경우 같은 대상을 가리키게함
		shallowPtr = other.shallowPtr;
		shallowInt = other.shallowInt;
		shallowInt = other.shallowInt;
		deepInt = other.deepInt;

		// 깊은복사 : 변수에 저장되어있는 값이 아닌 원본의 데이터를 복사하는 것으로 새로운 대상을 생성하여 가리키게함
		deepPtr = new int;
		*deepPtr = *(other.deepPtr);
	}
};

int main_Class2() {

	/*Dummy dummy;
	dummy.SetData(100, "경일게임아카데미");

	dummy.Print();

	Dummy2 dummy2;
	dummy2.SetData(200, "경일게임아카데미");
	dummy2.Print();*/

	CopyConstructor cc1 = CopyConstructor();

	int target = 0;
	int target1 = 3;
	cc1.shallowPtr = &target;
	*(cc1.deepPtr) = 0;
	cc1.deepInt = target1;

	CopyConstructor cc2 = cc1; // 복사생성자를 통한 복사
	*(cc2.shallowPtr) = 1;
	*(cc2.deepPtr) = 2;
	cc2.deepInt = 4;

	cout << "얇은복사 원본 값 : " << *(cc1.shallowPtr) << endl;
	cout << "얇은복사 원본 주소 : " << cc1.shallowPtr << endl;
	cout << "얇은복사 원본 값 : " << *(cc2.shallowPtr) << endl;
	cout << "얇은복사 원본 주소 : " << cc2.shallowPtr << endl;

	cout << "깊은복사 원본 값 : " << *(cc1.deepPtr) << endl;
	cout << "깊은복사 원본 주소 : " << cc1.deepPtr << endl;
	cout << "깊은복사 원본 값 : " << *(cc2.deepPtr) << endl;
	cout << "깊은복사 원본 주소 : " << cc2.deepPtr << endl;

	cout << "복사 원본 값 : " << cc1.deepInt << endl;
	cout << "복사 원본 주소 : " << &cc1.deepInt << endl;
	cout << "복사 원본 값 : " << cc2.deepInt << endl;
	cout << "복사 원본 주소 : " << &cc2.deepInt << endl;

	return 0;
}