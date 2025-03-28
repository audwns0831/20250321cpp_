//#include <iostream>
//
//using namespace std;
//
///*
//* 생성패턴
//* 
//* 
//*/
//
////	추상팩토리
////	- 추상팩토리 패턴은 연관성이 있는 객체 군이 여러개 있을 경우 이들을 묶어 추상화하고,
////	어떤 구체적인 상황이 주어지면 팩토리 객체에서 집합으로 묶은 객체 군을 구현화하는 생성 패턴이다.
////	클라이언트에서 특정 객체를 사용할 때 팩토리 클래스만을 참조하여 특정 객체에 대한 구현부를 감추어 역할과 구분을 분리시킬 수 있다.
////	즉, 추상팩토리의 핵심은 제품 '군' 집합을 타입별로 찍어낼 수 있다는 점이 포인트이다
//
////	예를 들어 모니터, 마우스, 키보드를 묶은 전자제품군이 있는데 이들을 또 삼성제품군이냐 애플제품군이냐 로지텍제품군이냐에 따라
////	집합이 브랜드 명으로 여러갈래로 나뉘게 될 때, 복잡하게 묶이는 이러한 제품군들을 관리와 확장하기 용이하게 패턴화한 것이 추상팩토리다.
//
//
//// 추상 제품 클래스 : 차량
//class Car {
//public:
//	virtual void drive() = 0;
//	virtual ~Car() {} // 가상소멸자를 사용하는 이유는 일반 소멸자를 사용하면 부모만 제거됨
//};
//
//// 추상 제품 클래스 : 비행기
//class Plane {
//public:
//	virtual void fly() = 0;
//	virtual ~Plane() {}
//};
//
//// 구체적인 차량 클래스 : 스포츠카
//class SportCar : public Car {
//public:
//	virtual void drive() override {
//		cout << "운전 중 : 스포츠카" << endl;
//	}
//};
//
//// 구체적인 차량 클래스 : SUV
//class SUV : public Car {
//public:
//	virtual void drive() override {
//		cout << "운전 중 : SUV" << endl;
//	}
//};
//
//// 구체적인 비행기 클래스 : 제트기
//class JetPlane : public Plane {
//public:
//	virtual void fly() override {
//		cout << "비행 중 : 제트기" << endl;
//	}
//};
//// 구체적인 비행기 클래스 : 헬리콥터
//class Helicopter : public Plane {
//public:
//	virtual void fly() override {
//		cout << "비행 중 : 헬리콥터" << endl;
//	}
//};
//
//// 추상 팩토리 클래스
//class TransportFactory {
//public:
//	virtual Car* createCar() = 0;
//	virtual Plane* createPlane() = 0;
//	virtual ~TransportFactory() {}
//};
//
//// 스포츠카와 제트기를 만드는 구체적인 팩토리
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
//// SUV와 헬리콥터를 만드는 구체적인 팩토리
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
//	// 스포츠카와 제트기를 만드는 팩토리
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
//	// SUV와 헬리콥터를 만드는 팩토리
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