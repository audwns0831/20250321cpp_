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
	cout << "���ڸ� �Է��ϼ��� :";
	cin  >> num;

	if (num > 0) {
		cout << "����Դϴ�" << endl;
	}
	else if (num < 0) {
		cout << "�����Դϴ�" << endl;
	}


	else {
		cout << "0�Դϴ�" << endl;
	}

	int day;
	cout << "���� ��ȣ�� �Է��ϼ��� (1-7) :";
	cin >> day;

	switch (day) {
	case 1:
		cout << "�������Դϴ�." << endl;
		break;
	case 2:
		cout << "ȭ�����Դϴ�." << endl;
		break;
	case 3:
		cout << "�������Դϴ�." << endl;
		break;
	case 4:
		cout << "������Դϴ�." << endl;
		break;
	case 5:
		cout << "�ݿ����Դϴ�." << endl;
		break;
	case 6:
		cout << "������Դϴ�." << endl;
		break;
	case 7:
		cout << "�Ͽ����Դϴ�." << endl;
		break;
	default:
		break;
	}

	int num1, num2;
	
	cout << "ù��° ����:";
	cin >> num1;

	cout << "�ι�° ����:";
	cin >> num2;
	
	int bigger = num1 > num2 ? num1 : num2;
	cout << "�� ū ���ڴ� " << bigger << "�Դϴ�" << endl;*/


	/*int coin, coin500 = 0, coin100 = 0;

	cout << "�ݾ��� �Է��ϼ��� :";
	cin >> coin;

	while (coin > 0) {
		if (coin >= 500) {
			cout << "500�� ������ �����ϴ�" << endl;
			coin500++;
			coin -= 500;
		}
		else if (coin >= 100){
			cout << "100�� ������ �����ϴ�" << endl;
			coin100++;
			coin -= 100;
		}
		else {
			cout << "������ �ݾ��� �������� ���� �� �����ϴ�."; 
			break;
		}
	}
	cout << "500�� ���� ���� " << coin500 << endl;
	cout << "100�� ���� ���� " << coin100 << endl;

	int num;

	do {
		cout << "1���� 9 ������ ���� �Է��ϼ��� ";
		cin >> num;
	} while (num < 1 || num > 9);


	for (int i = 0; i < 7; i++) {
		cout << "���� �Է��ϼ��� : ";
		cin >> num;
		if (num % 2 == 0 || num % 3 == 0) continue;
		else {
			cout << num << "�� 2�� ����� 3�� ����� �ƴմϴ�." << endl;
		}
	}*/

	cout << Subtract(15, 8) << endl;

	cout << Multiply(3, 5) << endl;
	cout << Multiply(3.2f, 4.5f) << endl;
	cout << Multiply(3.5, 4.0) << endl;

	cout << AddNumbers(5) << endl;
	cout << AddNumbers(5, 20) << endl;


	int num = 100;
	cout << "���� �� : " << num << endl;
	
	UpdateValue(&num);

	cout << "���� �� : " << num << endl;

	int num2 = 100;
	cout << "���� �� : " << num2 << endl;
	UpdateValue2(&num2);
	cout << "���� �� : " << num2 << endl;

	int num3 = 200;
	cout << "���� �� : " << num3 << endl;
	ModifyValue(num3);
	cout << "���� �� : " << num3 << endl;


	srand(time(0));
	int RandNum = rand() % 100 + 1; // 1 ~ 100 ���� ����
	int guess, result;
	bool flag = true;
	while (flag) {
		cout << "���ڸ� ���������� (1 ~ 100) : ";
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
			cout << "�����Դϴ� !";
			flag = false;
			break; 
		}
	}


	return 0;
}

//int AddNumbers(int a, int b = 10) { return a + b; }