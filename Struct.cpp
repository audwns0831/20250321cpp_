#include <iostream>

using namespace std;

struct Vector3 {
	float x;
	float y;
	float z;

	// Vector3(){}
};

struct Point {
	int x;
	int y;

	// 생성자를 정의한 경우 기본생성자는 자동으로 생성되지 않음
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}
};
struct Student_ {
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

struct Monster {
	string name;
	int hp;
	int mp;

	Monster() {
		name = "몬스터";
		hp = 100;
		mp = 20;
	}

	Monster(string name, int hp, int mp) {
		this->name = name;
		this->hp = hp;
		this->mp = mp;
	}
};

enum Direction { Up, Down, Left, Right }; // 열거형 정의 : 열거형 이름과 멤버이름을 작성
enum Season { Spring, Summer, Autumn = 10, Winter };
enum class Color { Red, Green, Blue };

int main_struct() {
	/*
	* 구조체 (Struct)
	* 하나 이상의 변수를 그룹지어서 새로운 자료형을 정의
	*/

	// 구조체 선언
	// struct 구조체이름 { 구조체 내용 };
	// 구조체 내용으로는 변수와 함수가 포함 가능
	// 구조체에 포함한 변수를 멤버변수, 구조체에 포함한 함수를 멤버함수라고 함


	//Student hong; // 구조체 선언
	//hong.name = "홍길동";
	//hong.math = 60;
	//hong.english = 10;
	//hong.science = 100;

	//Student* ptr = &hong;
	//ptr->english = 80;
	//ptr->science = 90;
	//

	//cout << "홍길동의 평균점수 : " << hong.Average() << endl;

	//// 파라미터가 없는 생성자
	//Monster monster = Monster();

	//// 파라미터가 있는 생성자로 구조체 선언
	//Monster dragon = Monster("드래곤", 250, 150);
	//Monster slime = Monster("슬라임", 10, 3);

	//cout << "몬스터 이름: " << dragon.name << ", hp : " << dragon.hp << ", mp : " << dragon.mp << endl;
	//cout << "몬스터 이름: " << slime.name << ", hp : " << slime.hp << ", mp : " << slime.mp << endl;

	/*
	* <열거형 선언>
	* 일정 갯수의 여러멤버들을 이름으로 명명하여 정의하는 자료형
	*/

	// <열거형 선언>
	// enum 열거형이름 { 멤버목록 }
	// 열거형은 이름으로 표현하기에 가독성이 좋음
	/*Direction key = Left;
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
	}*/

	/*Season season = (Season)1;
	cout << season << endl;

	int Value = Autumn;
	season = (Season)11;*/

	//int value = Season::Spring; // 묵시적 형변환
	//int value2 = (int)Color::Red; // 명시적 형변환

	//cout << "Spring Index : " << value << endl;
	//cout << "Red Index : " << value2 << endl;

	/*
	* 자료형 재정의
	* 자료형의 별칭을 생성하고 실제 자료형 이름 대신 사용
	*/

	//typedef int myInt_t;					// 자료형 재정의는 _t로 끝내는걸 권장
	//typedef unsigned long long unit64_t;	// 복잡한 자료형의 간소화버전 생성

	//myInt_t value1;
	//unit64_t value2;

	return 0;
}