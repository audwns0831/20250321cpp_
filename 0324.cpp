#include <iostream>

using namespace std;

struct Student {
	// �������
	string name;
	int math;
	int english;
	int science;

	// ����Լ�
	float Average() {
		return (math + english + science) / 3.0f;
	}
};

enum Direction { Up, Down, Left, Right }; // ������ ���� : ������ �̸��� ����̸��� �ۼ�

int main() {

	string str1 = "Hello";
	string str2 = "World";

	// 1. ����
	string str3 = str1 + str2;	
	cout << "����� ���ڿ� : " << str3 << endl;

	// 2. ��(������)
	cout << "str1 �� str2���� �ռ��� : " << (str1 < str2) << endl;

	// 3. ����
	cout << "str1�� str2�� ���� : " << (str1 == str2) << endl;

	Student hong;
	hong.name = "ȫ�浿";
	hong.math = 50;
	hong.english = 60;
	hong.science = 70;

	Student kim;
	kim.name = "��ö��";
	kim.math = 55;
	kim.english = 55;
	kim.science = 30;

	Student lee;
	lee.name = "�̿�ö";
	lee.math = 60;
	lee.english = 80;
	lee.science = 100;

	cout << "�л� �̸�: " << hong.name << ", ��� ���� : " << hong.Average() << ", " << (hong.Average() >= 60 ? "�հ�" : "���հ�") << endl;
	cout << "�л� �̸�: " << kim.name << ", ��� ���� : " << kim.Average() << ", " << (kim.Average() >= 60 ? "�հ�" : "���հ�") << endl;
	cout << "�л� �̸�: " << lee.name << ", ��� ���� : " << lee.Average() << ", " << (lee.Average() >= 60 ? "�հ�" : "���հ�") << endl;


	Direction key;
	string key_;
	cout << "������ �Է��ϼ��� (Up, Down, Left, Right) : ";
	cin >> key_;

	switch (key)
	{
	case Up:
		cout << "�������� �̵�" << endl;
		break;
	case Down:
		cout << "�Ʒ������� �̵�" << endl;
		break;
	case Left:
		cout << "�������� �̵�" << endl;
		break;
	case Right:
		cout << "���������� �̵�" << endl;
		break;
	default:
		break;
	}

	return 0;
}