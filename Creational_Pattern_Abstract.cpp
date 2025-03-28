//#include <iostream>
//
//using namespace std;
//
///*
//* ��������
//* 
//* 
//*/
//
////	�߻����丮
////	- �߻����丮 ������ �������� �ִ� ��ü ���� ������ ���� ��� �̵��� ���� �߻�ȭ�ϰ�,
////	� ��ü���� ��Ȳ�� �־����� ���丮 ��ü���� �������� ���� ��ü ���� ����ȭ�ϴ� ���� �����̴�.
////	Ŭ���̾�Ʈ���� Ư�� ��ü�� ����� �� ���丮 Ŭ�������� �����Ͽ� Ư�� ��ü�� ���� �����θ� ���߾� ���Ұ� ������ �и���ų �� �ִ�.
////	��, �߻����丮�� �ٽ��� ��ǰ '��' ������ Ÿ�Ժ��� �� �� �ִٴ� ���� ����Ʈ�̴�
//
////	���� ��� �����, ���콺, Ű���带 ���� ������ǰ���� �ִµ� �̵��� �� �Ｚ��ǰ���̳� ������ǰ���̳� ��������ǰ���̳Ŀ� ����
////	������ �귣�� ������ ���������� ������ �� ��, �����ϰ� ���̴� �̷��� ��ǰ������ ������ Ȯ���ϱ� �����ϰ� ����ȭ�� ���� �߻����丮��.
//
//
//// �߻� ��ǰ Ŭ���� : ����
//class Car {
//public:
//	virtual void drive() = 0;
//	virtual ~Car() {} // ����Ҹ��ڸ� ����ϴ� ������ �Ϲ� �Ҹ��ڸ� ����ϸ� �θ� ���ŵ�
//};
//
//// �߻� ��ǰ Ŭ���� : �����
//class Plane {
//public:
//	virtual void fly() = 0;
//	virtual ~Plane() {}
//};
//
//// ��ü���� ���� Ŭ���� : ������ī
//class SportCar : public Car {
//public:
//	virtual void drive() override {
//		cout << "���� �� : ������ī" << endl;
//	}
//};
//
//// ��ü���� ���� Ŭ���� : SUV
//class SUV : public Car {
//public:
//	virtual void drive() override {
//		cout << "���� �� : SUV" << endl;
//	}
//};
//
//// ��ü���� ����� Ŭ���� : ��Ʈ��
//class JetPlane : public Plane {
//public:
//	virtual void fly() override {
//		cout << "���� �� : ��Ʈ��" << endl;
//	}
//};
//// ��ü���� ����� Ŭ���� : �︮����
//class Helicopter : public Plane {
//public:
//	virtual void fly() override {
//		cout << "���� �� : �︮����" << endl;
//	}
//};
//
//// �߻� ���丮 Ŭ����
//class TransportFactory {
//public:
//	virtual Car* createCar() = 0;
//	virtual Plane* createPlane() = 0;
//	virtual ~TransportFactory() {}
//};
//
//// ������ī�� ��Ʈ�⸦ ����� ��ü���� ���丮
//class SportsFactory : public TransportFactory {
//public:
//	virtual Car* createCar() override {
//		return new SportCar();
//	}
//	virtual Plane* createPlane() override {
//		return new JetPlane();
//	}
//};
//
//// SUV�� �︮���͸� ����� ��ü���� ���丮
//class SUVFactory : public TransportFactory {
//public:
//	virtual Car* createCar() override {
//		return new SUV();
//	}
//	virtual Plane* createPlane() override {
//		return new Helicopter();
//	}
//};
//
//int main() {
//
//	// ������ī�� ��Ʈ�⸦ ����� ���丮
//	TransportFactory* sportsFactory = new SportsFactory();
//	Car* car1 = sportsFactory->createCar();
//	Plane* plane1 = sportsFactory->createPlane();
//
//	car1->drive();
//	plane1->fly();
//
//	delete car1;
//	delete plane1;
//
//	// SUV�� �︮���͸� ����� ���丮
//	TransportFactory* suvFactory = new SUVFactory();
//	Car* car2 = suvFactory->createCar();
//	Plane* plane2 = suvFactory->createPlane();
//
//	car2->drive();
//	plane2->fly();
//
//	delete car2;
//	delete plane2;
//
//
//	return 0;
//}