//#include <iostream>
//
//using namespace std;
//
///*
//* 팩토리 메서드
//* 팩토리 메서드 패턴은 객체 생성을 공장(Factory) 클래스로 캡슐화 처리하여 대신 생성하게 하는 생성 디자인 패턴이다.
//* 제품 객체들을 도맡아 생성하는 공장 클래스를 만들고, 이를 상속하는 서브 공장 클래스의 메서드에서 여러가지 제품 객체 생성을
//* 각각 책임 지는 것이다
//* 또한 객체 생성에 필요한 과정을 템플릿 처럼 미리 구성해놓고, 객체 생성에 관한 전처리나 후처리를 통해 생성 과정을
//* 다양하게 처리하여 객체를 유연하게 정할 수 있는 특징도 있다.
//*/
//
//// 프로토타입 : 코드를 그들의 클래스들에 의존시키지 않고 기존 객체들을 복사할 수 있도록 합니다.
//// 싱글톤 : 클래스에 인스턴스가 하나만 있도록 하면서 이 인스턴스에 대한 전역 접근(액세스) 지점을 제공합니다. (재활용에 대표적인 예)
//
//// 추상 제품 클래스 : Shape
//class Shape {
//public:
//	virtual void draw() = 0;
//	virtual ~Shape() {}
//};
//
//// 구체적인 제품 클래스 : Circle
//class Circle : public Shape {
//public:
//	virtual void draw() override {
//		cout << "원형 도형을 그립니다." << endl;
//	}
//};
//// 구체적인 제품 클래스 : Square
//class Square : public Shape {
//public:
//	virtual void draw() override {
//		cout << "정사각형 도형을 그립니다." << endl;
//	}
//};
//
//// 팩토리 클래스
//class ShapeFactory {
//public:
//	virtual Shape* createShape() = 0; // 팩토리 메서드
//	virtual ~ShapeFactory() {}
//};
//
//// 구체적인 팩토리 클래스 : Circle
//class CircleFactory : public ShapeFactory {
//public:
//	virtual Shape* createShape() override {
//		return new Circle(); // 원형 도형 객체 생성
//	}
//};
//// 구체적인 팩토리 클래스 : Square
//class SquareFactory : public ShapeFactory {
//public:
//	virtual Shape* createShape() override {
//		return new Square(); // 정사각형 도형 객체 생성
//	}
//};
//
//int main() {
//	// 원형 도형을 생산하는 팩토리
//	CircleFactory* circleFactory = new CircleFactory();
//	Shape* circle = circleFactory->createShape();
//	circle->draw(); // 원형 도형을 그립니다.
//
//	// 정사각형 도형을 생산하는 팩토리
//	SquareFactory* squareFactory = new SquareFactory();
//	Shape* square = squareFactory->createShape();
//	square->draw(); // 정사각형 도형을 그립니다.
//
//	delete circleFactory;
//	delete circle;
//	delete squareFactory;
//	delete square;
//	return 0;
//}