//#include <iostream>
//#include <string>
//#include <cassert>
//
//using namespace std;
//
///*
//* ����ó�� (Exception Handling)
//* ���α׷� ���� ���� �߻��ϴ� �ǵ����� ���� ��Ȳ�� ó���ϴ� ���
//*/
//
//// <���ǹ��� ���� ����ó��>
//// ���α׷��� �ߴܵ� �� �������� ó���� ���ǹ��� ���� ������ �� ������ ����
//// ���� ���� ����ó�� ����� ó������ ���ܰ� �߻��� �� ������ �����ϴ� ��
//
//void Main1() {
//	cout << "�� ���� �Է��ϼ���. : ";
//	int value1;
//	int value2;
//	cin >> value1 >> value2;
//
//	// ���� value2�� 0�ΰ�� ����ó���� �������� ������ ���α׷��� �ߴܵ�
//	// �Ʒ��� ���ǹ��� ���� ���α׷��� �ߴܵǴ� ��Ȳ�� ���� ����ó���� ����
//	if (value2 != 0) {
//		cout << "����� " << value1 / value2 << endl;
//	}
//	else {
//		cout << "0���� ���� �� �����ϴ�." << endl;
//	}
//}
//
//// <try catch ����ó��>
//// C++���� ���������� ���ܸ� ó���� �� �ִ� ����
//// try		: ���ܹ߻��� ���� �˻��� ������ �����ϴ� ���
//// catch	: �߻��� ���ܸ� ó���ϴ� ���
//// throw	: �߻��� ���ܿ� ���� ������ �����ϴ� ����
//
//void Main2() {
//	cout << "���� �Է��ϼ��� : ";
//	int value;
//	cin >> value;
//
//	try {
//		if (value < 0)
//			throw 5;
//		else if (value < 10)
//			throw "AAA";
//		cout << "����ó�� ���� ������" << endl;
//	}
//	catch (int ex) {
//		// throw 5�� catch
//		cout << "throw " << ex << "�� catch" << endl;
//	}
//	catch (const char* ex) {
//		// throw AAA�� catch
//		cout << "trhow " << ex << "�� catch" << endl;
//	}
//}
//
//// ���� Ǯ��
//// �Լ����� ���ܰ� �߻��� ��� catch������ �߰��� ������ ȣ��� ������ Ǯ�
//
//void eFunc3() {
//	cout << "3��";
//	throw 0;
//	cout << "3��";
//}
//void eFunc2() {
//	cout << "2��";
//	eFunc3();
//	cout << "2��";
//}
//void eFunc1() {
//	cout << "1��";
//	eFunc2();
//	cout << "1��";
//}
//
//// <exception ����>
//// exception Ŭ������ ���ܸ޼����� �����Ͽ� ���� ����
//void eFunc5() {
//	try {
//		throw exception("����ó�� �޼���");
//	}
//	catch (exception e) {
//		cout << "����ó�� : " << e.what() << endl;
//	}
//}
//
//// <assert �Լ�>
//// ���α׷����� ġ������ �� �ִ� �������� ���α׷��� �ߴ��ϰ� ������ ǥ��
//// ���α׷��� �ߴܽ�Ű�� ������ ǥ���ϱ� ������ �������� ����뿡 ������
//// assert�� false�� ��� ������ ó���Ͽ� && �� �޼����� �Է��Ͽ� Ȯ���ϴ� ���� �Ϲ���
//void Main6() {
//	cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
//	int size;
//	cin >> size;
//
//	assert(!(size <= 0) && "�迭�� 0�� ���Ϸ� ������ �� �����ϴ�.");
//
//	int* array = new int[size];
//	/// ...
//	delete[] array;
//}
//
//// ����
//void eFunc6() {
//	cout << "���ڸ� �Է��ϼ��� : " << endl;
//	string s;
//	cin >> s;
//
//	try {
//		int value = stoi(s);
//		cout << "��ȯ�� �� : " << value;
//	}
//	catch (const exception& e) {
//		cout << "����ó�� : " << e.what() << endl;
//	}
//}
//
//int main() {
//	
//	//try {
//	//	eFunc1();
//	//}
//	//catch (int ex) {
//	//	cout << "����ó��" << endl;
//	//}
//	
//	eFunc6();
//	return 0;
//}