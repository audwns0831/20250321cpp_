#include <iostream>

using namespace std;

int main() {

	string str1 = "Hello";
	string str2 = "World";

	// 1. ����
	string str3 = str1 + str2;	
	cout << "����� ���ڿ� : " << str3 << endl;

	// 2. ��(������)
	cout << "str1 �� str2���� �ռ��� : " << (str1 < str2) << endl;

	// 3. ����
	cout << "str1�� str2�� ���� : " << (str1 == str2) << endl;
	return 0;
}