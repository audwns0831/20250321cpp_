//#include <iostream>
//
//using namespace std;
//
///*
//* ĸ��ȭ (Encapsulation)
//* ��ü�� ������ ������� ���� ���� �ǹ�
//* ��ü�� ���� ���¿� ����� �����, ����� ���¿� ��ɸ��� �׼��� ���
//*/
//
//// <ĸ��ȭ>
//// ��ü�� ������ ������� ���� ��, ��ü�� ������ ����� ������ ǥ����
//// ���Ǽ����� ��ü�� ǥ���ϱ� ���� ��ü�� ������ ������ �ൿ�� ���� �����ϸ� �̸� ���� ��ü�� ��ȣ�ۿ�
//
//class Capsule {
//	int variable;		// ������� : ��ü�� ������ ǥ��
//	void Function() {}	// ����Լ� : ��ü�� ����� ǥ��
//};
//
//// <����������>
//// �ܺο��� ������ ������ ��������� ����Լ��� �����ϴ� ���
//
//// public		: �ܺο����� ���ٰ���
//// private		: ���ο����� ���ٰ���
//// protected	: �ܺ������� private, ����� Ŭ������ public
//
//// <��������>
//// ��ü ������ �־ �ܺο��� ����ϱ� ���ϴ� ��ɰ� ����ϱ� ������ �ʴ� ����� �����ϱ� ���� ���
//// ����ڰ� ��ü�� ����ϴµ� �־ �ʿ��� ��ɸ��� Ȯ���ϱ� ���� �뵵�̸�
//// �ܺο� ���� ������ ���� �ʱ� ���ϴ� ����� ���߱� ���� �뵵�̱⵵ ��
//
//class Bank {
//private:
//	int balance;
//public:
//	void Save(int money) {
//		balance += money;
//	}
//	void Load(int money) {
//		balance -= money;
//	}
//};
//
//class IntArray {
//	int array[10];
//public:
//	void SetValue(int index, int value) {
//		if (index < 0 || index >= 10)  return;
//
//		array[index] = value;
//	}
//};
//
//class AccessSpecifier {
//public:
//	int publicValue;
//
//private:
//	int privateValue;
//
//	void Function() {
//		publicValue;	// ���ٰ���
//		privateValue;	// ���ٰ���
//	}
//
//public:
//	void SetPrivateValue(int set) {
//		privateValue = set;
//	}
//};
//
//int main() {
//
//	AccessSpecifier instance;
//	instance.publicValue;	// ���ٰ���
//	// instance.privatValue;	// ���ٺҰ���
//
//	instance.SetPrivateValue(10); // Setter�� Ȱ���ؼ� Private Value ���� ����
//
//	Bank bank;
//
//	//bank.balance = 0;
//
//	// �ܺο��� Bank���� �ǵ��� Save�� Load�� ���� �̿��ϴ°��� ����
//	bank.Save(20000);
//	bank.Load(10000);
//	return 0;
//}