#include <iostream>

using namespace std;

int main_iter() {

	/*
	* 반복문 (Iteration)
	* 블록을 반복적으로 실행하는 문장
	*/

	/*
	* while 반복문
	* 조건식의 true, false에 따라 블록을 반복하는 반복문
	*/

	// while(true){} // 무한루프

	int currentStep = 0; // 현재 계단 위치
	int goal = 10; // 목표 층수
	while (currentStep < goal) {
		int step;
		cout << "오를 계단 수를 입력하세요. (1~3) : ";
		cin >> step;

		if (step < 1 || step > 3) {
			cout << "잘못된 입력입니다." << endl;
		}
		currentStep += step;
		cout << step << "칸 올라감. 현재위치 : " << currentStep << "층 " << endl;

		if (currentStep >= goal) {
			cout << "축하합니다! 목표층에 도착했습니다 " << endl;
		}
	}

	/*
	* do while
	* 블록을 한번 실행한 후 조건식의 true, false를 따라 블록을 반복
	*/

	int input;
	do {
		cout << "1에서 9까지의 수를 입력하세요 ";
		cin >> input;
	} while (input < 1 || 9 < input);

	/*
	* for 반복문
	* 초기화, 조건식, 증감연산으로 구성된 반복문
	*/

	for (int i = 0; i < 5; i++) {
		cout << "for문 반복횟수 : " << i << endl;
	}

	/*
	* 제어문
	* 프로그램의 순차적인 실행 중 다른 문으로 제어를 전송
	*/

	/*
	* break; 제어문
	* 가장 가까운 반복문을 종료
	*/

	int num = 35;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			cout << num << "을 나눌 수 있는 가장 작은 수는 " << i << "입니다";
			break;
		}
	}

	/*
	* continue 제어문
	* 가장 가까운 반복문의 새 반복을 시작
	*/

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) continue;
		if (i % 3 == 0) continue;

		cout << i << "은 2의 배수와 3의 배수가 아닙니다." << endl;
	}















	return 0;

}