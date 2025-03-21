#include <iostream>

using namespace std;

int main_con() {
	/*
	* 조건문 (Conditional)
	* 조건에 따라 실행이 달라지게 할 때 사용하는 문장
	*/

	/*
	* if 조건문
	* 조건식의 true, false에 따라 실행할 블록을 결정하는 조건문
	*/
	bool bCase = false;

	if (bCase) { // 해당 조건이 true일때 아래 state로 이동
		cout << "실행되는 블록 " << boolalpha << bCase << endl;
	}
	else { // 해당 조건이 false일때 아래 state로 이동
		cout << "실행되는 블록 " << boolalpha << bCase << endl;
	}

	string input = "바위";

	if (input == "가위") {
		cout << "가위를 입력" << endl;
	}
	else if (input == "바위") {
		cout << "바위를 입력" << endl;
	}
	else {
		cout << "보를 입력" << endl;
	}

	/*
	* switch 조건문
	* 조건값에 따라 실행할 시작지점을 결정하는 조건문
	*/

	int command = 2;
	switch (command) { // 조건값 지정
	case 1:
		cout << "값은 1" << endl;
		break;
	case 2:
		cout << "값은 2" << endl;
		break;
	case 3:
		cout << "값은 3" << endl;
		break;
	case 4:
		cout << "값은 4" << endl;
		break;
	case 5:
		cout << "값은 5" << endl;
		break;
	default:
		break;
	}

	char key = 'w';

	switch (key) {
	case 'w':
	case 'W':
		cout << "위쪽으로 이동" << endl;
		break;
	case 's':
	case 'S':
		cout << "아래쪽으로 이동" << endl;
		break;
	case 'a':
	case 'A':
		cout << "좌측으로 이동" << endl;
		break;
	case 'd':
	case 'D':
		cout << "우측으로 이동" << endl;
		break;
	default:
		break;
	}

	/*
	* 삼항연산자
	* 간단한 조건문을 빠르게 작성
	*/
	// 조건식 ? true : false

	int left = 20;
	int right = 10;

	int bigger = left > right ? left : right;

	cout << "bigger value : " << bigger << endl;

	return 0;
}