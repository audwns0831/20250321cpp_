//#include <iostream>
//#include <string>
//#include <cassert>
//
//using namespace std;
//
///*
//* 예외처리 (Exception Handling)
//* 프로그램 동작 도중 발생하는 의도하지 않은 상황을 처리하는 방법
//*/
//
//// <조건문을 통한 예외처리>
//// 프로그램이 중단될 수 있을만한 처리를 조건문을 통해 진행할 수 없도록 제한
//// 가장 좋은 예외처리 방법은 처음부터 예외가 발생할 수 없도록 설계하는 것
//
//void Main1() {
//	cout << "두 수를 입력하세요. : ";
//	int value1;
//	int value2;
//	cin >> value1 >> value2;
//
//	// 만약 value2가 0인경우 예외처리를 진행하지 않으면 프로그램이 중단됨
//	// 아래의 조건문을 통해 프로그램이 중단되는 상황에 대한 예외처리를 진행
//	if (value2 != 0) {
//		cout << "결과는 " << value1 / value2 << endl;
//	}
//	else {
//		cout << "0으로 나눌 수 없습니다." << endl;
//	}
//}
//
//// <try catch 예외처리>
//// C++에서 구조적으로 예외를 처리할 수 있는 구문
//// try		: 예외발생에 대한 검사의 범위를 지정하는 블록
//// catch	: 발생한 예외를 처리하는 블록
//// throw	: 발생한 예외에 대한 정보를 전달하는 구문
//
//void Main2() {
//	cout << "수를 입력하세요 : ";
//	int value;
//	cin >> value;
//
//	try {
//		if (value < 0)
//			throw 5;
//		else if (value < 10)
//			throw "AAA";
//		cout << "예외처리 없이 도달함" << endl;
//	}
//	catch (int ex) {
//		// throw 5를 catch
//		cout << "throw " << ex << "를 catch" << endl;
//	}
//	catch (const char* ex) {
//		// throw AAA를 catch
//		cout << "trhow " << ex << "를 catch" << endl;
//	}
//}
//
//// 스택 풀기
//// 함수에서 예외가 발생한 경우 catch문들을 발견할 때까지 호출된 스택을 풀어냄
//
//void eFunc3() {
//	cout << "3전";
//	throw 0;
//	cout << "3후";
//}
//void eFunc2() {
//	cout << "2전";
//	eFunc3();
//	cout << "2후";
//}
//void eFunc1() {
//	cout << "1전";
//	eFunc2();
//	cout << "1후";
//}
//
//// <exception 생성>
//// exception 클래스는 예외메세지를 생성하여 전달 가능
//void eFunc5() {
//	try {
//		throw exception("예외처리 메세지");
//	}
//	catch (exception e) {
//		cout << "예외처리 : " << e.what() << endl;
//	}
//}
//
//// <assert 함수>
//// 프로그램에서 치명적일 수 있는 문제에서 프로그램을 중단하고 오류를 표시
//// 프로그램을 중단시키고 오류를 표시하기 때문에 개발자의 디버깅에 용이함
//// assert는 false인 경우 오류를 처리하여 && 후 메세지를 입력하여 확인하는 것이 일반적
//void Main6() {
//	cout << "배열의 크기를 입력하세요 : ";
//	int size;
//	cin >> size;
//
//	assert(!(size <= 0) && "배열은 0개 이하로 생성할 수 없습니다.");
//
//	int* array = new int[size];
//	/// ...
//	delete[] array;
//}
//
//// 예제
//void eFunc6() {
//	cout << "숫자를 입력하세요 : " << endl;
//	string s;
//	cin >> s;
//
//	try {
//		int value = stoi(s);
//		cout << "변환된 값 : " << value;
//	}
//	catch (const exception& e) {
//		cout << "예외처리 : " << e.what() << endl;
//	}
//}
//
//int main() {
//	
//	//try {
//	//	eFunc1();
//	//}
//	//catch (int ex) {
//	//	cout << "예외처리" << endl;
//	//}
//	
//	eFunc6();
//	return 0;
//}