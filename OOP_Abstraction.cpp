//#include <iostream>
//
//using namespace std;
//
///*
//* 추상화 (Abstraction)
//* 클래스를 정의할 당시 구체화 시킬 수 없는 기능을 추상적 표현으로 정의
//*/
//
//// <추상클래스 (abstract class)>
//// 하나 이상의 순수가상함수를 포함하는 클래스
//// 클래스가 추상적인 표현을 정의하는 경우 자식에서 구체화시켜 구현할 것을 염두하고 추상화 시킴
//// 추상클래스에서 내용을 구체화 할 수 없는 순수가상함수를 내용을 정의하지 않음
//// 추상클래스를 상속하는 자식클래스가 순수가상함수를 재정의하여 구체화한 경우 사용가능
//
//class Item abstract{
//public:
//	virtual void Use() = 0; // 순수가상함수 : 클래스에서 구현을 하지 않고 추상화 시킴
//};
//
//// 부모클래스인 Item을 상속받아 구현한 자식 클래스
//class Potion : public Item {
//public:
//	void Use() override { // 오버라이딩 : 가상함수를 재정의하여 구체화시킨 함수
//		cout << "포션을 사용하여 체력을 회복합니다." << endl;
//	}
//};
//
//class Herb : public Item {
//public:
//	void Use() override {
//		cout << "해독초를 사용하여 독상태를 해제합니다." << endl;
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
//		cout << "야옹" << endl;
//	}
//};
//
//class Dog : public Animal {
//	void Cry() override {
//		cout << "멍멍" << endl;
//	}
//};
//
//int main() {
//
//	//Item* item = new Item(); // error: 추상클래스는 인스턴스 불가
//	
//	// 추상클래스를 구체화한 자식클래스는 인스턴스 생성이 가능하며, 관련 기능을 사용 가능
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