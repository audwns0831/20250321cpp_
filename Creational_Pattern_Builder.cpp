//#include <iostream>
//
//using namespace std;
//
///*
//* ���� (Builder)
//* ���� ������ ������ ��ü�� ���� ������ ǥ�� ����� �и��Ͽ� �پ��� ������ �ν��Ͻ��� ����� ���������̴�.
//* �����ڿ� �� �Ű������� �޼���� �ϳ� �ϳ� �޾Ƶ��̰� �������� ���� ���忡�� ��ü�� �����ϴ� ����̴�.
//* 
//* �����ϱ� ���� ��ʷ� ���� �ܹ��Ÿ� �� �� �ִ�. ���� �ܹ��Ÿ� �ֹ��Ҷ� ���̳� ��Ƽ �� �������� �ֹ��ϴ� ����� ������� �����ȴ�.
//* ��� ����� ġ� ���޶�� �䱸�� �� �ְ� ��� ����� �丶�並 ���޶�� �䱸�� �� �ִ�.
//* ��ó�� ������ �������� ���� �����ϰ� �޾� �پ��� Ÿ���� �ν��Ͻ��� ������ �� �־�,
//* Ŭ������ ������ �Ű������� ���� ��Ȳ���� �����ϰ� ���ȴ�.
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
//// ����
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
///// ���̹� ��ǻ�� ����
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
//// ��ũ�����̼� ��ǻ�� ����
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
//	// ���̹� ��ǻ�� ������ ���͸� ����Ͽ� ��ǻ�� ����
//	GamingComputerBuilder* gamingBuilder = new GamingComputerBuilder();
//	Director director(gamingBuilder);
//	director.construct();
//	Computer* gamePC = gamingBuilder->getResult();
//	gamePC->showSpec();
//
//	// ��ũ�����̼ǿ� ��ǻ�� ������ ���͸� ����Ͽ� ��ǻ�� ����
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