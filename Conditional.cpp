#include <iostream>

using namespace std;

int main_con() {
	/*
	* ���ǹ� (Conditional)
	* ���ǿ� ���� ������ �޶����� �� �� ����ϴ� ����
	*/

	/*
	* if ���ǹ�
	* ���ǽ��� true, false�� ���� ������ ����� �����ϴ� ���ǹ�
	*/
	bool bCase = false;

	if (bCase) { // �ش� ������ true�϶� �Ʒ� state�� �̵�
		cout << "����Ǵ� ��� " << boolalpha << bCase << endl;
	}
	else { // �ش� ������ false�϶� �Ʒ� state�� �̵�
		cout << "����Ǵ� ��� " << boolalpha << bCase << endl;
	}

	string input = "����";

	if (input == "����") {
		cout << "������ �Է�" << endl;
	}
	else if (input == "����") {
		cout << "������ �Է�" << endl;
	}
	else {
		cout << "���� �Է�" << endl;
	}

	/*
	* switch ���ǹ�
	* ���ǰ��� ���� ������ ���������� �����ϴ� ���ǹ�
	*/

	int command = 2;
	switch (command) { // ���ǰ� ����
	case 1:
		cout << "���� 1" << endl;
		break;
	case 2:
		cout << "���� 2" << endl;
		break;
	case 3:
		cout << "���� 3" << endl;
		break;
	case 4:
		cout << "���� 4" << endl;
		break;
	case 5:
		cout << "���� 5" << endl;
		break;
	default:
		break;
	}

	char key = 'w';

	switch (key) {
	case 'w':
	case 'W':
		cout << "�������� �̵�" << endl;
		break;
	case 's':
	case 'S':
		cout << "�Ʒ������� �̵�" << endl;
		break;
	case 'a':
	case 'A':
		cout << "�������� �̵�" << endl;
		break;
	case 'd':
	case 'D':
		cout << "�������� �̵�" << endl;
		break;
	default:
		break;
	}

	/*
	* ���׿�����
	* ������ ���ǹ��� ������ �ۼ�
	*/
	// ���ǽ� ? true : false

	int left = 20;
	int right = 10;

	int bigger = left > right ? left : right;

	cout << "bigger value : " << bigger << endl;

	return 0;
}