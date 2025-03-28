#include <iostream>
#include <memory>

using namespace std;

/*
* ����Ʈ ������
* C++���� ����Ʈ������(Smart Pointer)�� �޸� ������ �ڵ�ȭ�ϴ� ����
* �⺻������ C++ ������ �޸𸮸� �������� �Ҵ��ϰ� �����ؾ��ϱ� ������, �߸��� �޸� ������ �޸� �������� ������ �߻��� �� �ֽ��ϴ�.
* ����Ʈ �����ʹ� �̷��� ������ �ذ��ϱ� ���� ��ü�� �����ǰ� �޸� ������ �ڵ����� ó�����ݴϴ�.
* 
* C++11���� ����Ʈ�����ʹ� ǥ�ض��̺귯���� �Ϻη� ���ԵǾ�����,
* ũ�� 'std::unique_ptr', 'std::shared_ptr', 'std::weak_ptr'
* ������ �ֿ� ����Ʈ �����Ͱ� �ֽ��ϴ�.
* 
*/

/*
* 1. std::unique_ptr (���� ������)
* std::unique_ptr�� �������� �� �ϳ��� �����͸� ���� �� �ִ� ����Ʈ �������Դϴ�.
* ��ü�� �� unique_ptr�� �����ϸ�, �ٸ� unique_ptr�� ������ �� �����ϴ�.
* ��ü�� �������� unique_ptr�� �̵�(Move) �� �� �ֽ��ϴ�.
* ��, ��ü�� �������� ���������� ������ ���� �����ϴ�.
* 
* �ֿ�Ư¡
* - ��ü�� �������� �� unique_ptr�� ������ �ִ�.
* - ��ü�� unique_ptr�� �Ҹ�� �� �ڵ����� �����ȴ�
* - ��ü�� �ٸ� unique_ptr�� �̵��� �� �ִ�.(����� �Ұ���)
*/

/*
* 2. std::shared_ptr (���� ������)
* std::shared_ptr�� ���� �����Ͱ� ������ ��ü�� ������ �� �ֵ��� �ϴ� ����Ʈ ������
* ��ü�� ����Ű�� shared_ptr�� ������ ���� �� ������, ��ü�� ���� ī��Ʈ�� ����
* ��ü�� ������ share_ptr�� �Ҹ�� �� �ڵ����� ����
* 
* �ֿ�Ư¡
* - ���� 'shared_ptr'�� ������ ��ü�� ����ų �� �ִ�.
* - ���� ī��Ʈ ������� �����Ǿ�, ��ü�� ���̻� �ʿ� ������ �ڵ����� ����
* - ������ �� ������, ����ī��Ʈ�� ����
*/

/*
* 3. std::weak_ptr
* std::weak_ptr�� shared_ptr�� �Բ� ���Ǵ� �����ͷ�
* ��ü�� �������� ������ ������ ����ī��Ʈ�� ������Ű�� �ʽ��ϴ�.
* �ַ� ��ȯ����(Circular Reference)�� �����ϱ� ���� ���
* weak_ptr�� ��ü�� �Ҹ�Ǿ����� Ȯ���� �� ������, ��ü�� �����ֱ⸦ �������� �ʽ��ϴ�.
* 
* �ֿ�Ư¡
* - shared_ptr ��ü�� ���������� ����ī��Ʈ�� ������Ű�� �ʽ��ϴ�.
* - ��ü�� �Ҹ�Ǿ����� ���θ� Ȯ���� �� �ֽ��ϴ�.
* - shared_ptr�� �Բ� ����Ͽ� ��ȯ������ ������ �� �ֽ��ϴ�.
* 
* ��ȯ������ ���� Ŭ���� �ν��Ͻ��� ���ΰ��� ���� ��������(Strong Reference)�� ������ �߻��ϰ�
* ��ȯ������ �߻��ϰ� �Ǹ� ���ΰ��� ������ �������� �ʱ⋚���� �޸� ����(Leak)�� �߻��� �� �ִ�.
*/

class MyClass {
public:
	void Hello() {
		cout << "Hello from MyClass" << endl;
	}
};

class Pointer {
private:
	int* numArray;

public:
	Pointer() :numArray(new int[100]) {
		for (int i = 0; i < 100; i++) {
			numArray[i] = i;
		}
	}
	~Pointer() {
		cout << "�Ҹ��� ȣ��" << endl;
		delete[] numArray;
	}
	
	int* ReturnArray() {
		return numArray;
	}
};

int* FuncPoint() {
	Pointer* ptrClass = new Pointer();
	int* pArray = ptrClass->ReturnArray();

	cout << pArray[10] << endl;
	return pArray;
}

int* FuncSmartPointer() {
	unique_ptr<Pointer> uniquePtr = make_unique<Pointer>();
	int* pArray = uniquePtr->ReturnArray();

	cout << pArray[10] << endl;
	return uniquePtr->ReturnArray();
}

class MyClass1 {
private:
	int count;

public:
	void Hello() {
		count++;
		cout << "Hello from MyClass1 : CallCount : " << count << endl;
	}
};
class MyClass2 {
public:
	void Hello() {
		
		cout << "Hello from MyClass1 : CallCount : " << endl;
	}
};

int main() {
	//unique_ptr<MyClass> ptr1 = make_unique<MyClass>();
	//ptr1->Hello();

	//// ptr2�� ptr1�� �������� �̵��޴´�.
	//unique_ptr<MyClass> ptr2 = move(ptr1);
	//ptr2->Hello();

	//// ptr1�� ���� nullptr�̹Ƿ�, ptr1->Hello()�� ȣ���ϸ� ������ �߻��Ѵ�
	////ptr1->Hello(); // nullptr
	
	//int* ptr1 = FuncPoint();
	//cout << ptr1[10] << endl;
	
	//int* ptr2 = FuncSmartPointer();

	//shared_ptr<MyClass1> ptr1 = make_shared<MyClass1>();
	//ptr1->Hello();

	//shared_ptr<MyClass1> ptr2 = ptr1;
	//ptr2->Hello();

	//cout << "ptr1 use count : " << ptr1.use_count() << endl;

	shared_ptr<MyClass2> ptr1 = make_shared<MyClass2>();
	shared_ptr<MyClass2> ptr2 = make_shared<MyClass2>();
	int useCount1 = ptr1.use_count();
	cout << "1. use count : " << useCount1 << endl;

	weak_ptr<MyClass2> weakPtr = ptr1;
	int useCount2 = ptr1.use_count();
	cout << "2. use count : " << useCount2 << endl;

	ptr2 = ptr1;
	int useCount3 = ptr1.use_count();
	cout << "3. use count : " << useCount3 << endl;

	// weakPtr�� shared_ptr�� ��� ��ȯ�ؼ� ���
	if (auto lockedPtr = weakPtr.lock()) {
		lockedPtr->Hello();
	}
	else {
		cout << "The Object is no longer valid " << endl;
	}

	ptr1.reset(); // ptr1�� �Ҹ�Ǹ� ��ü�� ������
	if (auto lockedPtr = weakPtr.lock()) {
		lockedPtr->Hello(); // ��ü�� �����Ǿ��� ������ �� �ڵ�� ������� ����
	}
	else {
		cout << "���� ������ ���� " << endl;
	}


	return 0;
}
/*
* ����Ʈ �������� ����
* 
* 1. �ڵ� �޸� ����
* - ����Ʈ �����ʹ� ��ü�� �����ֱ⸦ �ڵ����� �����ϹǷ�, �����ڰ� �޸� ������ �Ű� �� �ʿ䰡 ����. ��ü�� ���̻� ������ ������ �ڵ����� ����
* 
* 2. �޸� ���� ����
* - ����Ʈ �����͸� ����ϸ� ��ü�� ���̻� �ʿ����� ���� �� �ڵ����� �����Ǳ� ������ �޸� ������ ����
* 
* 3. ���� ī����
* - shared_ptr�� ���� ī��Ʈ�� ����Ͽ� �������� �����Ͱ� ���� ��ü�� ��������. ������ �����Ͱ� �Ҹ�ɶ� ��ü ����
* 
* 4. ��ü�� �̵�:
* - unique_ptr�� ��ü�� �������� �����ϰ� �̵�. ��ü�� ����� ������� ������, �������� �ٸ� unique_ptr�� �̵� ����
* 
* 5. ��ȯ ���� ����
* - weak_ptr�� shared_ptr�� ��ȯ���� ������ �ذ� ����. weak_ptr�� ���� ī��Ʈ�� ������Ű�� �����Ƿ�, ��ȯ ������ �߻����� ����.
* 
* ����Ʈ �������� ����
* 
* 1. ���� �������
* - ����Ʈ �����ʹ� ��ü�� ���� ī��Ʈ�� �����ϰ�, �޸� ������ �ڵ����� ó���ϹǷ� �ణ�� ���� ������尡 �߻� ����
* - Ư�� shared_ptr�� ���� ī��Ʈ�� �����ϴ� �� ����� ��
* 
* 2. ������ ���������� ����
* - ������ ��ü �������� ���� ����Ʈ �����͸� ����ϴ� ���, ��ü ���� ������ �� ���� �ֱ⸦ ��Ȯ�� �����ϰ� �����ؾ� ��.
* - �߸��� ����� ���� ���ϳ� �޸� ������ ����ų �� ����.
*/
