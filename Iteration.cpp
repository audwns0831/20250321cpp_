#include <iostream>

using namespace std;

int main_iter() {

	/*
	* �ݺ��� (Iteration)
	* ����� �ݺ������� �����ϴ� ����
	*/

	/*
	* while �ݺ���
	* ���ǽ��� true, false�� ���� ����� �ݺ��ϴ� �ݺ���
	*/

	// while(true){} // ���ѷ���

	int currentStep = 0; // ���� ��� ��ġ
	int goal = 10; // ��ǥ ����
	while (currentStep < goal) {
		int step;
		cout << "���� ��� ���� �Է��ϼ���. (1~3) : ";
		cin >> step;

		if (step < 1 || step > 3) {
			cout << "�߸��� �Է��Դϴ�." << endl;
		}
		currentStep += step;
		cout << step << "ĭ �ö�. ������ġ : " << currentStep << "�� " << endl;

		if (currentStep >= goal) {
			cout << "�����մϴ�! ��ǥ���� �����߽��ϴ� " << endl;
		}
	}

	/*
	* do while
	* ����� �ѹ� ������ �� ���ǽ��� true, false�� ���� ����� �ݺ�
	*/

	int input;
	do {
		cout << "1���� 9������ ���� �Է��ϼ��� ";
		cin >> input;
	} while (input < 1 || 9 < input);

	/*
	* for �ݺ���
	* �ʱ�ȭ, ���ǽ�, ������������ ������ �ݺ���
	*/

	for (int i = 0; i < 5; i++) {
		cout << "for�� �ݺ�Ƚ�� : " << i << endl;
	}

	/*
	* ���
	* ���α׷��� �������� ���� �� �ٸ� ������ ��� ����
	*/

	/*
	* break; ���
	* ���� ����� �ݺ����� ����
	*/

	int num = 35;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			cout << num << "�� ���� �� �ִ� ���� ���� ���� " << i << "�Դϴ�";
			break;
		}
	}

	/*
	* continue ���
	* ���� ����� �ݺ����� �� �ݺ��� ����
	*/

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) continue;
		if (i % 3 == 0) continue;

		cout << i << "�� 2�� ����� 3�� ����� �ƴմϴ�." << endl;
	}















	return 0;

}