#include <iostream>

using namespace std;

struct Student {
	// 멤버변수
	string name;
	int math;
	int english;
	int science;

	// 멤버함수
	float Average() {
		return (math + english + science) / 3.0f;
	}
};

enum Direction { Up, Down, Left, Right }; // 열거형 정의 : 열거형 이름과 멤버이름을 작성

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

	Student hong;
	hong.name = "홍길동";
	hong.math = 50;
	hong.english = 60;
	hong.science = 70;

	Student kim;
	kim.name = "김철수";
	kim.math = 55;
	kim.english = 55;
	kim.science = 30;

	Student lee;
	lee.name = "이영철";
	lee.math = 60;
	lee.english = 80;
	lee.science = 100;

	cout << "학생 이름: " << hong.name << ", 평균 점수 : " << hong.Average() << ", " << (hong.Average() >= 60 ? "합격" : "불합격") << endl;
	cout << "학생 이름: " << kim.name << ", 평균 점수 : " << kim.Average() << ", " << (kim.Average() >= 60 ? "합격" : "불합격") << endl;
	cout << "학생 이름: " << lee.name << ", 평균 점수 : " << lee.Average() << ", " << (lee.Average() >= 60 ? "합격" : "불합격") << endl;


	Direction key;
	string key_;
	cout << "방향을 입력하세요 (Up, Down, Left, Right) : ";
	cin >> key_;

	switch (key)
	{
	case Up:
		cout << "위쪽으로 이동" << endl;
		break;
	case Down:
		cout << "아래쪽으로 이동" << endl;
		break;
	case Left:
		cout << "왼쪽으로 이동" << endl;
		break;
	case Right:
		cout << "오른쪽으로 이동" << endl;
		break;
	default:
		break;
	}

	return 0;
}