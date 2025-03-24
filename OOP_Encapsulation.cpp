//#include <iostream>
//
//using namespace std;
//
///*
//* 캡슐화 (Encapsulation)
//* 객체의 정보와 기능으로 묶는 것을 의미
//* 객체의 내부 상태와 기능을 숨기고, 허용한 상태와 기능만의 액세스 허용
//*/
//
//// <캡슐화>
//// 객체를 정보와 기능으로 묶는 것, 객체의 정보와 기능을 멤버라고 표현함
//// 현실세계의 객체를 표현하기 위해 객체가 가지는 정보와 행동을 묶어 구현하며 이를 통해 객체간 상호작용
//
//class Capsule {
//	int variable;		// 멤버변수 : 객체의 정보를 표현
//	void Function() {}	// 멤버함수 : 객체의 기능을 표현
//};
//
//// <접근제한자>
//// 외부에서 접근이 가능한 멤버변수와 멤버함수를 지정하는 기능
//
//// public		: 외부에서도 접근가능
//// private		: 내부에서만 접근가능
//// protected	: 외부접근은 private, 상속한 클래스는 public
//
//// <정보은닉>
//// 객체 구성에 있어서 외부에서 사용하기 원하는 기능과 사용하기 원하지 않는 기능을 구분하기 위해 사용
//// 사용자가 객체를 사용하는데 있어서 필요한 기능만을 확인하기 위한 용도이며
//// 외부에 의해 영향을 받지 않길 원하는 기능을 감추기 위한 용도이기도 함
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
//		publicValue;	// 접근가능
//		privateValue;	// 접근가능
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
//	instance.publicValue;	// 접근가능
//	// instance.privatValue;	// 접근불가능
//
//	instance.SetPrivateValue(10); // Setter를 활용해서 Private Value 접근 가능
//
//	Bank bank;
//
//	//bank.balance = 0;
//
//	// 외부에서 Bank에서 의도한 Save와 Load를 통해 이용하는것을 유도
//	bank.Save(20000);
//	bank.Load(10000);
//	return 0;
//}