//#include <iostream>
//
//using namespace std;
//
///*
//* 빌더 (Builder)
//* 빌터 패턴은 복잡한 객체의 생성 과정과 표현 방법을 분리하여 다양한 구성의 인스턴스를 만드는 생성패턴이다.
//* 생성자에 들어갈 매개변수를 메서드로 하나 하나 받아들이고 마지막에 통합 빌드에서 객체를 생성하는 방식이다.
//* 
//* 이해하기 쉬운 사례로 수제 햄버거를 들 수 있다. 수제 햄버거를 주문할때 빵이나 패티 등 속재료들은 주문하는 사람의 마음대로 결정된다.
//* 어느 사람은 치즈를 빼달라고 요구할 수 있고 어느 사람은 토마토를 빼달라고 요구할 수 있다.
//* 이처럼 선택적 속재료들을 보다 유연하게 받아 다양한 타입의 인스턴스를 생성할 수 있어,
//* 클래스의 선택적 매개변수가 많은 상황에서 유용하게 사용된다.
//*/
//
//class Computer {
//public:
//	string CPU;
//	string RAM;
//	string Storage;
//	string GPU;
//
//	void showSpec() {
//		cout << "Computer Specifications : " << endl;
//		cout << "CPU : " << CPU << endl;
//		cout << "RAM : " << RAM << endl;
//		cout << "Storage : " << Storage << endl;
//		cout << "GPU : " << GPU << endl;
//	}
//};
//
//// 빌더
//class ComputerBuilder {
//public:
//	virtual ~ComputerBuilder() {}
//	virtual void buildCPU() = 0;
//	virtual void buildRAM() = 0;
//	virtual void buildStorage() = 0;
//	virtual void buildGPU() = 0;
//	virtual Computer* getResult() = 0;
//
//};
//
///// 게이밍 컴퓨터 빌더
//class GamingComputerBuilder : public ComputerBuilder {
//private:
//	Computer* computer;
//public:
//	GamingComputerBuilder() {
//		computer = new Computer();
//	}
//	virtual void buildCPU() override {
//		computer->CPU = "Intel Core i9";
//	}
//	virtual void buildRAM() override {
//		computer->RAM = "32GB DDR4";
//	}
//	virtual void buildStorage() override {
//		computer->Storage = "1TB SSD";
//	}
//	virtual void buildGPU() override {
//		computer->GPU = "NVIDIA RTX 4090";
//	}
//	virtual Computer* getResult() override {
//		return computer;
//	}
//};
//
//// 워크스테이션 컴퓨터 빌더
//class WorkstationComputerBuilder : public ComputerBuilder {
//private:
//	Computer* computer;
//public:
//	WorkstationComputerBuilder() {
//		computer = new Computer();
//	}
//	virtual void buildCPU() override {
//		computer->CPU = "AMD Ryzen 9";
//	}
//	virtual void buildRAM() override {
//		computer->RAM = "64GB DDR4";
//	}
//	virtual void buildStorage() override {
//		computer->Storage = "1TB SSD";
//	}
//	virtual void buildGPU() override {
//		computer->GPU = "NVIDIA RTX 5090";
//	}
//	virtual Computer* getResult() override {
//		return computer;
//	}
//};
//
//class Director {
//private:
//	ComputerBuilder* builder;
//public:
//	Director(ComputerBuilder* builder) {
//		this->builder = builder;
//	}
//	void construct() {
//		builder->buildCPU();
//		builder->buildRAM();
//		builder->buildStorage();
//		builder->buildGPU();
//	}
//};
//
//
//
//
//int main() {
//
//	// 게이밍 컴퓨터 빌더와 디렉터를 사용하여 컴퓨터 생성
//	GamingComputerBuilder* gamingBuilder = new GamingComputerBuilder();
//	Director director(gamingBuilder);
//	director.construct();
//	Computer* gamePC = gamingBuilder->getResult();
//	gamePC->showSpec();
//
//	// 워크스테이션용 컴퓨터 빌더와 디렉터를 사용하여 컴퓨터 생성
//	WorkstationComputerBuilder* workstationBuilder = new WorkstationComputerBuilder();
//	Director director2(workstationBuilder);
//	director2.construct();
//	Computer* workstationPC = workstationBuilder->getResult();
//	workstationPC->showSpec();
//
//	delete gamingBuilder;
//	delete gamePC;
//	delete workstationBuilder;
//	delete workstationPC;
//	return 0;
//}