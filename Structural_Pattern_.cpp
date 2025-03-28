//#include <iostream>
//
//using namespace std;
//
///*
//* 구조패턴
//* - 어댑터(Adapter) : 인터페이스 호환성 문제를 해결하는 디자인 패턴으로,
//* 기존 클래스의 인터페이스를 사용자가 원하는 인터페이스를 가진 클래스로 변환
//* 
//* 즉, 서로 호환되지 않는 인터페이스를 가진 클래스를 연결하는 패턴입니다.
//* 
//* - 브릿지(Bridge) : 큰 클래스 또는 밀접하게 관련된 클래스들의 집합을 두 개의 개별 계층구조(추상화 및 구현)로 나눈 후
//* 각각 독립적으로 개발할 수 있도록 합니다.
//* 
//* - 복합체(Composite) : 객체들을 트리 구조들로 구성한 후, 이러한 트리구조들이 개별 객체들인 것처럼 작업할 수 있도록 하는 디자인 패턴입니다.
//* 
//* - 데코레이터(Decorator) : 객체들을 새로운 행동들을 포함한 특수 래퍼 객체들 내에 넣어서 위 행동들을 해당 객체들에 연결시킵니다.
//* 
//* - 퍼사드(Pacade) : 라이브러리에 대한, 프레임워크에 대한 또는 다른 클래스들의 복잡한 집합에 대한 단순화된 인터페이스를 제공합니다.
//* 
//* - 플라이웨이트(FlyWeight) : 각 객체에 모든 데이터들을 유지하는 대신 여러 객체간에 상태의 공통 부분들을 공유하여 사용할 수 있는 Ram에 더 많은 객체를
//* 포함할 수 있도록 합니다.
//* 
//* - 프록시(Proxy) : 다른 객체에 대한 대체 또는 자리표시자를 제공할 수 있습니다. 프록시는 원래 객체에 대한 접근을 제어하므로
//* 당신의 요청이 원래 객체에 전달되기 전 또는 후에 무언가를 수행할 수 있도록 합니다.
//*/
//
//// 110V 전원을 사용하는 장치
//class Voltage110V {
//public:
//	virtual void connect110V() = 0; // 110V에 연결
//	virtual ~Voltage110V() {}
//};
//// 220V 전원을 사용하는 장치
//class Voltage220V {
//public:
//	void connect220V() {
//		cout << "220V 전원에 연결되었습니다." << endl;
//	}
//};
//
//// Voltage220V를 Voltage110V로 변환하는 어댑터
//class VoltageAdapter : public Voltage110V {
//private:
//	Voltage220V* voltage220V; // Voltage220V 객체를 내부에 보유
//public:
//	VoltageAdapter(Voltage220V* v220) {
//		voltage220V = v220;
//	}
//	virtual void connect110V() override {
//		cout << "어댑터를 사용하여 220V -> 110V 변환" << endl;
//	}
//};
//
//int main() {
//	// 220V 전원장치
//	Voltage220V* v220 = new Voltage220V();
//
//	// 어댑터를 사용하여 220V -> 110V 변환
//	Voltage110V* v110 = new VoltageAdapter(v220);
//
//	v110->connect110V(); // 110V 전원에 연결
//	
//	delete v220;
//	delete v110;
//
//	return 0;
//}