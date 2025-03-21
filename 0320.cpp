#include <iostream>
#include <ctime>

using namespace std;

int Subtract(int left, int right) { return left - right; }
int Multiply(int left, int right) { return left * right; }
float Multiply(float left, float right) { return left * right; }
double Multiply(double left, double right) { return left * right; }

int AddNumbers(int a, int b = 10) { return a + b; }

void UpdateValue(int* ptr) { *ptr += 50; }
void UpdateValue2(int* ptr) { *ptr = 500; }
void ModifyValue(int& ref) { ref += 100; }

int randomGame(int num, int* ptr) {
	return num > *ptr ? 1 : (num < *ptr ? -1 : 0);
}
int main_0320() {
	
	/*int num;
	cout << "숫자를 입력하세요 :";
	cin  >> num;

	if (num > 0) {
		cout << "양수입니다" << endl;
	}
	else if (num < 0) {
		cout << "음수입니다" << endl;
	}


	else {
		cout << "0입니다" << endl;
	}

	int day;
	cout << "요일 번호를 입력하세요 (1-7) :";
	cin >> day;

	switch (day) {
	case 1:
		cout << "월요일입니다." << endl;
		break;
	case 2:
		cout << "화요일입니다." << endl;
		break;
	case 3:
		cout << "수요일입니다." << endl;
		break;
	case 4:
		cout << "목요일입니다." << endl;
		break;
	case 5:
		cout << "금요일입니다." << endl;
		break;
	case 6:
		cout << "토요일입니다." << endl;
		break;
	case 7:
		cout << "일요일입니다." << endl;
		break;
	default:
		break;
	}

	int num1, num2;
	
	cout << "첫번째 숫자:";
	cin >> num1;

	cout << "두번째 숫자:";
	cin >> num2;
	
	int bigger = num1 > num2 ? num1 : num2;
	cout << "더 큰 숫자는 " << bigger << "입니다" << endl;*/


	/*int coin, coin500 = 0, coin100 = 0;

	cout << "금액을 입력하세요 :";
	cin >> coin;

	while (coin > 0) {
		if (coin >= 500) {
			cout << "500원 동전을 꺼냅니다" << endl;
			coin500++;
			coin -= 500;
		}
		else if (coin >= 100){
			cout << "100원 동전을 꺼냅니다" << endl;
			coin100++;
			coin -= 100;
		}
		else {
			cout << "나머지 금액은 동전으로 꺼낼 수 없습니다."; 
			break;
		}
	}
	cout << "500원 동전 개수 " << coin500 << endl;
	cout << "100원 동전 개수 " << coin100 << endl;

	int num;

	do {
		cout << "1에서 9 사이의 수를 입력하세요 ";
		cin >> num;
	} while (num < 1 || num > 9);


	for (int i = 0; i < 7; i++) {
		cout << "값을 입력하세요 : ";
		cin >> num;
		if (num % 2 == 0 || num % 3 == 0) continue;
		else {
			cout << num << "은 2의 배수와 3의 배수가 아닙니다." << endl;
		}
	}*/

	cout << Subtract(15, 8) << endl;

	cout << Multiply(3, 5) << endl;
	cout << Multiply(3.2f, 4.5f) << endl;
	cout << Multiply(3.5, 4.0) << endl;

	cout << AddNumbers(5) << endl;
	cout << AddNumbers(5, 20) << endl;


	int num = 100;
	cout << "변경 전 : " << num << endl;
	
	UpdateValue(&num);

	cout << "변경 후 : " << num << endl;

	int num2 = 100;
	cout << "변경 전 : " << num2 << endl;
	UpdateValue2(&num2);
	cout << "변경 후 : " << num2 << endl;

	int num3 = 200;
	cout << "변경 전 : " << num3 << endl;
	ModifyValue(num3);
	cout << "변경 후 : " << num3 << endl;


	srand(time(0));
	int RandNum = rand() % 100 + 1; // 1 ~ 100 난수 설정
	int guess, result;
	bool flag = true;
	while (flag) {
		cout << "숫자를 맞혀보세요 (1 ~ 100) : ";
		cin >> guess;
		result = randomGame(RandNum, &guess);
		switch (result) {
		case 1:
			cout << "Up!" << endl;
			break;
		case -1:
			cout << "Down!" << endl;
			break;
		case 0:
			cout << "정답입니다 !";
			flag = false;
			break; 
		}
	}


	return 0;
}

//int AddNumbers(int a, int b = 10) { return a + b; }