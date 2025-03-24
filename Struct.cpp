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

	// �����ڸ� ������ ��� �⺻�����ڴ� �ڵ����� �������� ����
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}
};
struct Student_ {
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

struct Monster {
	string name;
	int hp;
	int mp;

	Monster() {
		name = "����";
		hp = 100;
		mp = 20;
	}

	Monster(string name, int hp, int mp) {
		this->name = name;
		this->hp = hp;
		this->mp = mp;
	}
};

enum Direction { Up, Down, Left, Right }; // ������ ���� : ������ �̸��� ����̸��� �ۼ�
enum Season { Spring, Summer, Autumn = 10, Winter };
enum class Color { Red, Green, Blue };

int main_struct() {
	/*
	* ����ü (Struct)
	* �ϳ� �̻��� ������ �׷���� ���ο� �ڷ����� ����
	*/

	// ����ü ����
	// struct ����ü�̸� { ����ü ���� };
	// ����ü �������δ� ������ �Լ��� ���� ����
	// ����ü�� ������ ������ �������, ����ü�� ������ �Լ��� ����Լ���� ��


	//Student hong; // ����ü ����
	//hong.name = "ȫ�浿";
	//hong.math = 60;
	//hong.english = 10;
	//hong.science = 100;

	//Student* ptr = &hong;
	//ptr->english = 80;
	//ptr->science = 90;
	//

	//cout << "ȫ�浿�� ������� : " << hong.Average() << endl;

	//// �Ķ���Ͱ� ���� ������
	//Monster monster = Monster();

	//// �Ķ���Ͱ� �ִ� �����ڷ� ����ü ����
	//Monster dragon = Monster("�巡��", 250, 150);
	//Monster slime = Monster("������", 10, 3);

	//cout << "���� �̸�: " << dragon.name << ", hp : " << dragon.hp << ", mp : " << dragon.mp << endl;
	//cout << "���� �̸�: " << slime.name << ", hp : " << slime.hp << ", mp : " << slime.mp << endl;

	/*
	* <������ ����>
	* ���� ������ ����������� �̸����� ����Ͽ� �����ϴ� �ڷ���
	*/

	// <������ ����>
	// enum �������̸� { ������ }
	// �������� �̸����� ǥ���ϱ⿡ �������� ����
	/*Direction key = Left;
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
	}*/

	/*Season season = (Season)1;
	cout << season << endl;

	int Value = Autumn;
	season = (Season)11;*/

	//int value = Season::Spring; // ������ ����ȯ
	//int value2 = (int)Color::Red; // ����� ����ȯ

	//cout << "Spring Index : " << value << endl;
	//cout << "Red Index : " << value2 << endl;

	/*
	* �ڷ��� ������
	* �ڷ����� ��Ī�� �����ϰ� ���� �ڷ��� �̸� ��� ���
	*/

	//typedef int myInt_t;					// �ڷ��� �����Ǵ� _t�� �����°� ����
	//typedef unsigned long long unit64_t;	// ������ �ڷ����� ����ȭ���� ����

	//myInt_t value1;
	//unit64_t value2;

	return 0;
}