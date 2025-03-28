//#include <iostream>
//#include <string>
//
//using namespace std;
//
///*
//* 템플릿 (Template)
//* 사용자가 지정한 자료형의 함수, 클래스를 컴파일 시간에 생성하는 구문
//*/
//
//// <함수 템플릿>
//// 함수에 필요한 자료형을 선언하고 함수의 호출 시 자료형을 지정해주어 사용
//// 템플릿으로 작성한 함수를 호출하는 때에 자료형에 맞는 함수를 사용 | 헤더에서 사용
//template <typename T>
//void Swap(T& left, T& right) {
//	T temp = left;
//	left = right;
//	right = temp;
//}
//template <typename T>
//T Multi(T left, T right) {
//	return left + right;
//}
//
//// <클래스 템플릿>
//// 클래스에 필요한 자료형을 선언하고 클래스 자료형을 지정해주어 사용
//// 템플릿으로 작성한 클래스를 호출하는 떄에 자료형에 맞는 클래스를 생성하여 사용
//template <typename T>
//class SafeArray {
//	T* arrayPtr;
//	int size;
//
//public:
//	SafeArray(int size) {
//		this->size = size;
//		arrayPtr = new T[size];
//
//	}
//	virtual ~SafeArray() {
//		delete[] arrayPtr;
//	}
//
//	void Set(int index, T value) {
//		if (index < 0 || index >= size) {
//			return;
//		}
//
//		arrayPtr[index] = value;
//	}
//
//	T Get(int index) {
//		if (index < 0 || index >= this->size) {
//			return NULL;
//		}
//		return arrayPtr[index];
//	}
//};
//
//// <함수 템플릿의 명시적 특수화>
//// 템플릿의 특정 형식에 대한 특별한 동작을 별개로 정의
//template <typename T>
//string ToString(T value) {
//	
//	return to_string(value);
//}
//
//template <>
//string ToString(char c) {
//	return string(1, c);
//}
//
//template <>
//string ToString(bool value) {
//	return value ? "true" : "false";
//}
//
//template <typename T>
//T Max(T left, T right) {
//	return left >= right ? left : right;
//}
//
//template <>
//int Max(int left, int right) {
//	return left >= right ? left : right;
//}
//
//double Max(double left, double right) {
//	return left >= right ? left : right;
//}
//
//char Max(char left, char right) {
//	return left >= right ? left : right;
//}
//
//int main() {
//
//	//int iLeft = 10;
//	//int iRight = 20;
//	//Swap<int>(iLeft, iRight);
//
//	//cout << "iLeft : " << iLeft << " iRight : " << iRight << endl;
//
//	//double dLeft = 2.3;
//	//double dRight = 3.2;
//	//Swap(dLeft, dRight); // 매개변수로 템플릿 자료형을 추측가능한 경우 생략 가능;
//
//	//cout << "dLeft : " << dLeft << " dRight : " << dRight << endl;
//
//	//int number = Multi(iLeft, iRight);
//	//cout << "number : " << number << endl;
//
//	//SafeArray<int> intArray = SafeArray<int>(10);
//	//intArray.Set(0, 20);
//	//cout << intArray.Get(0) << endl;
//
//	//SafeArray<double> dArray = SafeArray<double>(5);
//	//dArray.Set(1, 2.5);
//	//cout << dArray.Get(1) << endl;
//
//	//cout << ToString(1) << endl;
//	//cout << ToString('a') << endl;
//	//cout << ToString(false) << endl;
//
//	int iLeft = 10;
//	int iRight = 20;
//
//	double dLeft = 2.3;
//	double dRight = 3.2;
//	
//	char cLeft = 'a';
//	char cRight = 'z';
//
//	cout << Max(iLeft, iRight) << endl;
//	cout << Max(dLeft, dRight) << endl;
//	cout << Max(cLeft, cRight) << endl;
//
//	return 0;
//}