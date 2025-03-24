//#include <iostream>
//
//using namespace std;
//
///*
//* �߻�ȭ (Abstraction)
//* Ŭ������ ������ ��� ��üȭ ��ų �� ���� ����� �߻��� ǥ������ ����
//*/
//
//// <�߻�Ŭ���� (abstract class)>
//// �ϳ� �̻��� ���������Լ��� �����ϴ� Ŭ����
//// Ŭ������ �߻����� ǥ���� �����ϴ� ��� �ڽĿ��� ��üȭ���� ������ ���� �����ϰ� �߻�ȭ ��Ŵ
//// �߻�Ŭ�������� ������ ��üȭ �� �� ���� ���������Լ��� ������ �������� ����
//// �߻�Ŭ������ ����ϴ� �ڽ�Ŭ������ ���������Լ��� �������Ͽ� ��üȭ�� ��� ��밡��
//
//class Item abstract{
//public:
//	virtual void Use() = 0; // ���������Լ� : Ŭ�������� ������ ���� �ʰ� �߻�ȭ ��Ŵ
//};
//
//// �θ�Ŭ������ Item�� ��ӹ޾� ������ �ڽ� Ŭ����
//class Potion : public Item {
//public:
//	void Use() override { // �������̵� : �����Լ��� �������Ͽ� ��üȭ��Ų �Լ�
//		cout << "������ ����Ͽ� ü���� ȸ���մϴ�." << endl;
//	}
//};
//
//class Herb : public Item {
//public:
//	void Use() override {
//		cout << "�ص��ʸ� ����Ͽ� �����¸� �����մϴ�." << endl;
//	}
//};
//
//class Animal abstract {
//public:
//	virtual void Cry() = 0;
//};
//
//class Cat : public Animal {
//	void Cry() override {
//		cout << "�߿�" << endl;
//	}
//};
//
//class Dog : public Animal {
//	void Cry() override {
//		cout << "�۸�" << endl;
//	}
//};
//
//int main() {
//
//	//Item* item = new Item(); // error: �߻�Ŭ������ �ν��Ͻ� �Ұ�
//	
//	// �߻�Ŭ������ ��üȭ�� �ڽ�Ŭ������ �ν��Ͻ� ������ �����ϸ�, ���� ����� ��� ����
//	Item* potion = new Potion();
//	potion->Use();
//
//	Item* herb = new Herb();
//	herb->Use();
//
//	delete potion;
//	delete herb;
//
//	Animal* dog = new Dog();
//	dog->Cry();
//
//	Animal* cat = new Cat();
//	cat->Cry();
//	delete dog;
//	delete cat;
//
//	return 0;
//}