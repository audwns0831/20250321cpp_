//#include <iostream>
//
//using namespace std;
//
///*
//* ���丮 �޼���
//* ���丮 �޼��� ������ ��ü ������ ����(Factory) Ŭ������ ĸ��ȭ ó���Ͽ� ��� �����ϰ� �ϴ� ���� ������ �����̴�.
//* ��ǰ ��ü���� ���þ� �����ϴ� ���� Ŭ������ �����, �̸� ����ϴ� ���� ���� Ŭ������ �޼��忡�� �������� ��ǰ ��ü ������
//* ���� å�� ���� ���̴�
//* ���� ��ü ������ �ʿ��� ������ ���ø� ó�� �̸� �����س���, ��ü ������ ���� ��ó���� ��ó���� ���� ���� ������
//* �پ��ϰ� ó���Ͽ� ��ü�� �����ϰ� ���� �� �ִ� Ư¡�� �ִ�.
//*/
//
//// ������Ÿ�� : �ڵ带 �׵��� Ŭ�����鿡 ������Ű�� �ʰ� ���� ��ü���� ������ �� �ֵ��� �մϴ�.
//// �̱��� : Ŭ������ �ν��Ͻ��� �ϳ��� �ֵ��� �ϸ鼭 �� �ν��Ͻ��� ���� ���� ����(�׼���) ������ �����մϴ�. (��Ȱ�뿡 ��ǥ���� ��)
//
//// �߻� ��ǰ Ŭ���� : Shape
//class Shape {
//public:
//	virtual void draw() = 0;
//	virtual ~Shape() {}
//};
//
//// ��ü���� ��ǰ Ŭ���� : Circle
//class Circle : public Shape {
//public:
//	virtual void draw() override {
//		cout << "���� ������ �׸��ϴ�." << endl;
//	}
//};
//// ��ü���� ��ǰ Ŭ���� : Square
//class Square : public Shape {
//public:
//	virtual void draw() override {
//		cout << "���簢�� ������ �׸��ϴ�." << endl;
//	}
//};
//
//// ���丮 Ŭ����
//class ShapeFactory {
//public:
//	virtual Shape* createShape() = 0; // ���丮 �޼���
//	virtual ~ShapeFactory() {}
//};
//
//// ��ü���� ���丮 Ŭ���� : Circle
//class CircleFactory : public ShapeFactory {
//public:
//	virtual Shape* createShape() override {
//		return new Circle(); // ���� ���� ��ü ����
//	}
//};
//// ��ü���� ���丮 Ŭ���� : Square
//class SquareFactory : public ShapeFactory {
//public:
//	virtual Shape* createShape() override {
//		return new Square(); // ���簢�� ���� ��ü ����
//	}
//};
//
//int main() {
//	// ���� ������ �����ϴ� ���丮
//	CircleFactory* circleFactory = new CircleFactory();
//	Shape* circle = circleFactory->createShape();
//	circle->draw(); // ���� ������ �׸��ϴ�.
//
//	// ���簢�� ������ �����ϴ� ���丮
//	SquareFactory* squareFactory = new SquareFactory();
//	Shape* square = squareFactory->createShape();
//	square->draw(); // ���簢�� ������ �׸��ϴ�.
//
//	delete circleFactory;
//	delete circle;
//	delete squareFactory;
//	delete square;
//	return 0;
//}