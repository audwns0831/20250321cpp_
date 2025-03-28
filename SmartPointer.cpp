#include <iostream>
#include <memory>

using namespace std;

/*
* 스마트 포인터
* C++에서 스마트포인터(Smart Pointer)는 메모리 관리를 자동화하는 도구
* 기본적으로 C++ 에서는 메모리를 수동으로 할당하고 해제해야하기 떄문에, 잘못된 메모리 해제나 메모리 누수등의 문제가 발생할 수 있습니다.
* 스마트 포인터는 이러한 문제를 해결하기 위해 객체의 소유권과 메모리 관리를 자동으로 처리해줍니다.
* 
* C++11부터 스마트포인터는 표준라이브러리의 일부로 도입되었으며,
* 크게 'std::unique_ptr', 'std::shared_ptr', 'std::weak_ptr'
* 세가지 주요 스마트 포인터가 있습니다.
* 
*/

/*
* 1. std::unique_ptr (유일 포인터)
* std::unique_ptr은 소유권이 단 하나의 포인터만 가질 수 있는 스마트 포인터입니다.
* 객체를 한 unique_ptr만 소유하며, 다른 unique_ptr에 복사할 수 없습니다.
* 객체의 소유권은 unique_ptr을 이동(Move) 할 수 있습니다.
* 즉, 객체의 소유권이 이전되지만 복사할 수는 없습니다.
* 
* 주요특징
* - 객체의 소유권은 한 unique_ptr만 가질수 있다.
* - 객체는 unique_ptr이 소멸될 떄 자동으로 해제된다
* - 객체를 다른 unique_ptr로 이동할 수 있다.(복사는 불가능)
*/

/*
* 2. std::shared_ptr (공유 포인터)
* std::shared_ptr은 여러 포인터가 동일한 객체를 공유할 수 있도록 하는 스마트 포인터
* 객체를 가리키는 shared_ptr이 여러개 있을 수 있으며, 객체의 참조 카운트를 추적
* 객체는 마지막 share_ptr이 소멸될 때 자동으로 해제
* 
* 주요특징
* - 여러 'shared_ptr'이 동일한 객체를 가리킬 수 있다.
* - 참조 카운트 방식으로 관리되어, 객체가 더이상 필요 없을때 자동으로 해제
* - 복사할 수 있으며, 참조카운트가 증가
*/

/*
* 3. std::weak_ptr
* std::weak_ptr은 shared_ptr과 함께 사용되는 포인터로
* 객체의 소유권을 가지지 않으며 참조카운트를 증가시키지 않습니다.
* 주로 순환참조(Circular Reference)를 방지하기 위해 사용
* weak_ptr은 객체가 소멸되었는지 확인할 수 있지만, 객체의 생명주기를 관리하지 않습니다.
* 
* 주요특징
* - shared_ptr 객체를 참조하지만 참조카운트를 증가시키지 않습니다.
* - 객체가 소멸되었는지 여부를 확인할 수 있습니다.
* - shared_ptr과 함께 사용하여 순환참조를 방지할 수 있습니다.
* 
* 순환참조란 여러 클래스 인스턴스가 서로간에 강한 참조상태(Strong Reference)를 가질때 발생하고
* 순환참조가 발생하게 되면 서로간의 참조가 해제되지 않기떄문에 메모리 누수(Leak)가 발생할 수 있다.
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
		cout << "소멸자 호출" << endl;
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

	//// ptr2는 ptr1의 소유권을 이동받는다.
	//unique_ptr<MyClass> ptr2 = move(ptr1);
	//ptr2->Hello();

	//// ptr1은 이제 nullptr이므로, ptr1->Hello()를 호출하면 오류가 발생한다
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

	// weakPtr을 shared_ptr로 잠깐 변환해서 사용
	if (auto lockedPtr = weakPtr.lock()) {
		lockedPtr->Hello();
	}
	else {
		cout << "The Object is no longer valid " << endl;
	}

	ptr1.reset(); // ptr1이 소멸되면 객체도 삭제됨
	if (auto lockedPtr = weakPtr.lock()) {
		lockedPtr->Hello(); // 객체가 삭제되었기 때문에 이 코드는 실행되지 않음
	}
	else {
		cout << "약한 포인터 없음 " << endl;
	}


	return 0;
}
/*
* 스마트 포인터의 장점
* 
* 1. 자동 메모리 관리
* - 스마트 포인터는 객체의 생명주기를 자동으로 관리하므로, 개발자가 메모리 해제에 신경 쓸 필요가 없다. 객체는 더이상 사용되지 않으면 자동으로 삭제
* 
* 2. 메모리 누수 방지
* - 스마트 포인터를 사용하면 객체가 더이상 필요하지 않을 때 자동으로 해제되기 떄문에 메모리 누수를 방지
* 
* 3. 참조 카운팅
* - shared_ptr은 참조 카운트를 사용하여 여러개의 포인터가 같은 객체를 공유가능. 마지막 포인터가 소멸될때 객체 삭제
* 
* 4. 객체의 이동:
* - unique_ptr은 객체의 소유권을 안전하게 이동. 객체의 복사는 허용하지 않으며, 소유권을 다른 unique_ptr로 이동 가능
* 
* 5. 순환 참조 방지
* - weak_ptr은 shared_ptr의 순환참조 문제를 해결 가능. weak_ptr은 참조 카운트를 증가시키지 않으므로, 순환 참조가 발생하지 않음.
* 
* 스마트 포인터의 단점
* 
* 1. 성능 오버헤드
* - 스마트 포인터는 객체의 참조 카운트를 추적하고, 메모리 관리를 자동으로 처리하므로 약간의 성능 오버헤드가 발생 가능
* - 특히 shared_ptr은 참조 카운트를 수정하는 데 비용이 듬
* 
* 2. 복잡한 구조에서의 관리
* - 복잡한 객체 구조에서 여러 스마트 포인터를 사용하는 경우, 객체 간의 소유권 및 생명 주기를 명확히 이해하고 관리해야 함.
* - 잘못된 사용은 성능 저하나 메모리 누수를 일으킬 수 있음.
*/
