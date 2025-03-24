#include <iostream>

using namespace std;

int main() {

	string str1 = "Hello";
	string str2 = "World";

	// 1. 연결
	string str3 = str1 + str2;	
	cout << "연결된 문자열 : " << str3 << endl;

	// 2. 비교(사전순)
	cout << "str1 은 str2보다 앞선다 : " << (str1 < str2) << endl;

	// 3. 같음
	cout << "str1과 str2는 같음 : " << (str1 == str2) << endl;
	return 0;
}