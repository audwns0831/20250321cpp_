#include <iostream>

using namespace std;

// <값에 의한 호출, 주소에 의한 호출>
// 함수의 매개변수로 전달되는 데이터는 변수 자체가 아닌 데이터를 복사하여 전달됨
// 만약 변수를 매개변수로 전달하는 경우 데이터를 복사하여 전달하므로 원본이 변경되지 않음
// 만약 변수의 주소를 매개변수로 전달하는 경우 주소를 복사하여 전달하므로 원본의 주소를 역참조하여 원본이 변경됨
void CallByValue(int Value) { Value = 10; }
void CallByAddress(int* ptr) { *ptr = 10; }

// 참조에 대한 호출
void CallByReference(int& ref) { ref = 10; }

int main_pointer() {
	/*
	* 포인터 (Pointer)
	* 프로그램은 메모리를 사용하며 메모리는 변수를 저장한 주소를 가지고 있음
	* 프로그램의 메모리 주소값을 통한 접근방법으로 다양한 작업이 가능
	*/

	// <주소 연산자>
	// 변수명 앞 &를 붙여 메모리에 할당된 주소를 확인할 수 있음
	int num = 5;
	cout << "num에 저장된 데이터 : " << num << endl;
	cout << "num이 저장된 메모리 주소 : " << &num << endl;

	// <포인터 변수>
	// 포인터 변수는 메모리 주소를 저장하는 변수
	// 자료형 뒤 *를 붙여 포인터 변수를 선언함
	// 포인터 변수의 자료형은 가리키고 있는 변수의 자료형과 동일하게 함
	//int num = 100;
	int* ptr = &num;

	cout << "num이 저장된 메모리 주소 : " << &num << endl;
	cout << "ptr이 가지고 있는 데이터 주소값 : " << ptr << endl;

	// <포인터 역참조>
	// 포인터 변수가 가지는 주소값을 역으로 따라갈 수 있음
	// 포인터 변수 앞 *을 붙여 포인터 변수가 가지고 있는 주소값에 저장된 데이터를 확인
	// 주소값에 저장된 데이터를 변경하는 경우 주소값을 제공한 변수의 원본 데이터를 변경함
	//int num = 10;
	//int* ptr = &num;

	cout << "num에 저장된 데이터 " << num << endl;
	cout << "ptr이 가지는 주소값을 역참조하여 확인한 데이터 " << *ptr << endl;

	*ptr = 20;
	cout << "num에 저장된 데이터 " << num << endl;
	cout << "ptr이 가지는 주소값을 역참조하여 확인한 데이터 " << *ptr << endl;

	// <포인터 변수 사용시 주의사항>
	// 포인터 변수를 초기화 없이 사용하게 된다면 쓰레ㅣ값을 주소값으로 판단하여 프로그램을 손상시킬 수 있음
	// 반드시 포인터 변수가 주소값을 가지고 있지 않은 경우에는 nullptr로 초기화 해주도록 함
	//int* ptr;
	//*ptr = 20; // 주의! 프로그램을 손상시킬 수 있음

	//int* ptr = nullptr;  // 주소값을 가지고 있지 않은 포인터 변수는 nullptr로 초기화하여 안전하게 사용
	//*ptr = 20; // 예외처리 발생

	// <포인터의 크기>
	// 포인터의 크기는 주소값의 크기로 메모리가 주소값을 표현하는 단위가 됨
	// 32비트 프로그램은 포인터 크기를 32비트, 64비트 프로그램은 포인터 크기를 64비트를 사용한다.
	int* iPtr;
	float* fPtr;
	double* dPtr;

	cout << sizeof(iPtr) << endl;
	cout << sizeof(fPtr) << endl;
	cout << sizeof(dPtr) << endl;

	//int num = 0;
	cout << "num 값은 " << num << endl; // 0

	CallByValue(num);
	cout << "num 값은 " << num << endl; // 0

	CallByAddress(&num);
	cout << "num 값은 " << num << endl; // 10

	// 참조자는 내부구현은 포인터를 통해 구현되어 있지만 사용시에 원본을 변수에 가지도록 하는 기법
	//int num = 10;
	int& ref = num;

	ref = 20;

	cout << "num에 저장된 데이터 " << num << endl; // 20
	cout << "ref가 참조하고 있는 데이터 : " << ref << endl; // 20 ref와 num이 같은 주소값을 가지고 있기 때문에


	//int num = 0;
	cout << "num 값 " << num << endl; // 0

	CallByReference(num);
	cout << "num 값 " << num << endl; // 10 num의 주소값을 넘겼기 때문에


	return 0;
}