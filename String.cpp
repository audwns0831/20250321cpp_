#include <iostream>

using namespace std;

int main_string() {
	/*
	* 문자열
	*
	* 문자들의 연속적인 모음
	*/

	// <C스타일 문자열>
	// C스타일 문자열은 문자배열을 통해 구현
	// 문자열의 마지막을 나타내기 위해 null('\0')을 사용

	// 기본 사용법
	char charArray1[] = { 'A', 'B', 'C', 'D', '\0', 'E', 'F' };
	cout << "문자배열로 표현한 문자열은 " << charArray1 << endl; // "ABCD"

	// c++ string
	// c++에서 제공하는 문자열을 다루기 위한 기능
	// c스타일의 문자배열보다 쉽고 안전하며 유연함

	// 기본사용법
	string str = "ABCD";
	str = "EFGH";

	// 추가기능
	const char* array = str.c_str(); // string을 c스타일 문자배열로 변환
	cout << str << endl;

	str[0] = 'a'; // 문자열의 n번째 요소 접근
	cout << str << endl; // aFGH

	char t = str.front(); // 문자열 가장 앞 문자
	char t1 = str.back(); // 문자열 가장 뒤 문자

	cout << "문자열 가장 앞 문자 : " << t << endl;
	cout << "문자열 가장 뒤 문자 : " << t1 << endl;

	int count = str.length();
	int count2 = str.size();

	cout << "문자열 사이즈 : " << count << endl;
	cout << "문자열 사이즈 : " << count2 << endl;

	bool b = str.empty(); // 문자열이 빈 문자열인지 확인

	cout << "문자열 유무 : " << b << endl;

	str += "ABC"; // 문자열 붙이기 aFGH + ABC
	cout << "문자열 붙이기 결과 : " << str << endl;
	str.append("DEF");
	cout << "문자열 붙이기 결과 : " << str << endl;
	str.insert(5, "To");
	cout << "문자열 붙이기 결과 : " << str << endl;

	str.replace(1, 3, "D"); // 문자열 대체 string.replace(교체하고 싶은 문자열의 위치, 교체하고싶은 문자열의 길이, 새로운문자열)

	string temp = "ABCDEF";
	string find_temp = "CDE";
	string replace_temp = "XXXX";

	temp.replace(temp.find(find_temp), find_temp.length(), replace_temp);
	cout << "문자열 replace 결과 : " << temp << endl;

	temp.erase(0, 3);

	temp.clear();

	bool b1 = temp == "ABC";
	bool b2 = temp < "ABC";
	bool b3 = temp > "ABC";
	bool b4 = str.compare("ABC");

	cout << "b1:  " << b1 << endl;
	cout << "b2:  " << b2 << endl;
	cout << "b3:  " << b3 << endl;
	cout << "b4:  " << b4 << endl;


	string str1 = "apple";
	string str2 = "banana";
	int result = str1.compare(str2);

	// 사전적인 비교
	if(result == 0) {
		cout << "equal " << endl;
	} else if (result < 0) {
		cout << "str1 is less than str2" << endl;
	} else if (result > 0) {
		cout << "str1 is greater than str2" << endl;
	}else {
	cout << "others" << endl;
	}

	int size1 = str1.length();
	int size2 = str2.length();

	// 사이즈 비교
	if (size1 == size2) {
		cout << "equal" << endl;
	}
	else if (size1 > size2) {
		cout << "size1 less than" << endl;
	}
	else {
		cout << "size greater" << endl;
	}

	return 0;
}