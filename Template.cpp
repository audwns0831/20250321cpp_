//#include <iostream>
//#include <string>
//
//using namespace std;
//
///*
//* ���ø� (Template)
//* ����ڰ� ������ �ڷ����� �Լ�, Ŭ������ ������ �ð��� �����ϴ� ����
//*/
//
//// <�Լ� ���ø�>
//// �Լ��� �ʿ��� �ڷ����� �����ϰ� �Լ��� ȣ�� �� �ڷ����� �������־� ���
//// ���ø����� �ۼ��� �Լ��� ȣ���ϴ� ���� �ڷ����� �´� �Լ��� ��� | ������� ���
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
//// <Ŭ���� ���ø�>
//// Ŭ������ �ʿ��� �ڷ����� �����ϰ� Ŭ���� �ڷ����� �������־� ���
//// ���ø����� �ۼ��� Ŭ������ ȣ���ϴ� ���� �ڷ����� �´� Ŭ������ �����Ͽ� ���
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
//// <�Լ� ���ø��� ����� Ư��ȭ>
//// ���ø��� Ư�� ���Ŀ� ���� Ư���� ������ ������ ����
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
//	//Swap(dLeft, dRight); // �Ű������� ���ø� �ڷ����� ���������� ��� ���� ����;
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