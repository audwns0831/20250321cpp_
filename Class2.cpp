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

// <���������>
// �ٸ� �ν��Ͻ��� �����͸� �����Ͽ� ���ο� �ν��Ͻ��� �����ϴ� ������
// ��������ڸ� �������� �ʴ� ��� �ڵ����� �����Ǹ�, �ڵ����� ������ ��������ڴ� �������縦 ����
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
		// <��������, ��������>
		// �������� : ������ ����Ǿ��ִ� ���� �����ϴ� ������ �����ͺ����� ��� ���� ����� ����Ű����
		shallowPtr = other.shallowPtr;
		shallowInt = other.shallowInt;
		shallowInt = other.shallowInt;
		deepInt = other.deepInt;

		// �������� : ������ ����Ǿ��ִ� ���� �ƴ� ������ �����͸� �����ϴ� ������ ���ο� ����� �����Ͽ� ����Ű����
		deepPtr = new int;
		*deepPtr = *(other.deepPtr);
	}
};

int main_Class2() {

	/*Dummy dummy;
	dummy.SetData(100, "���ϰ��Ӿ�ī����");

	dummy.Print();

	Dummy2 dummy2;
	dummy2.SetData(200, "���ϰ��Ӿ�ī����");
	dummy2.Print();*/

	CopyConstructor cc1 = CopyConstructor();

	int target = 0;
	int target1 = 3;
	cc1.shallowPtr = &target;
	*(cc1.deepPtr) = 0;
	cc1.deepInt = target1;

	CopyConstructor cc2 = cc1; // ��������ڸ� ���� ����
	*(cc2.shallowPtr) = 1;
	*(cc2.deepPtr) = 2;
	cc2.deepInt = 4;

	cout << "�������� ���� �� : " << *(cc1.shallowPtr) << endl;
	cout << "�������� ���� �ּ� : " << cc1.shallowPtr << endl;
	cout << "�������� ���� �� : " << *(cc2.shallowPtr) << endl;
	cout << "�������� ���� �ּ� : " << cc2.shallowPtr << endl;

	cout << "�������� ���� �� : " << *(cc1.deepPtr) << endl;
	cout << "�������� ���� �ּ� : " << cc1.deepPtr << endl;
	cout << "�������� ���� �� : " << *(cc2.deepPtr) << endl;
	cout << "�������� ���� �ּ� : " << cc2.deepPtr << endl;

	cout << "���� ���� �� : " << cc1.deepInt << endl;
	cout << "���� ���� �ּ� : " << &cc1.deepInt << endl;
	cout << "���� ���� �� : " << cc2.deepInt << endl;
	cout << "���� ���� �ּ� : " << &cc2.deepInt << endl;

	return 0;
}