//#include <iostream>
//
//using namespace std;
//
///*
//* 연산자 재정의(Operator Overloading)
//* 사용자정의 자료형이나 클래스의 연산자를 재정의하여 여러의미로 사용
//* 반환형 operator연산자기호(매개변수목록){함수내용);
//*/
//
//// <연산자 체이닝>
//// 연산의 결과를 *this(자기자신)을 반환하는 방식으로 체이닝을 진행
//
//class StringBuilder {
//	char buffer[2048] = { 0 };
//	int curIndex;
//
//public:
//	StringBuilder() {
//		curIndex = 0;
//	}
//
//	StringBuilder& Append(const char* text) {
//		int index = 0;
//		while (text[index] != '\0') {
//			buffer[curIndex++] = text[index++];
//		}
//		buffer[curIndex] = '\0';
//
//		return *this;
//	}
//	
//	string ToString() {
//		return buffer;
//	}
//};
//
//
//struct Point {
//	float x;
//	float y;
//
//	Point(float x, float y) {
//		this->x = x;
//		this->y = y;
//	}
//
//	// 멤버함수를 통한 연산자 재정의
//	Point operator+(const Point& other) {
//		return Point(this->x + other.x, this->y + other.y);
//	}
//
//	Point operator==(const Point& other) {
//		return Point(this->x == other.x, this->y == other.y);
//	}
//};
//
//// 전역함수를 통한 연산자 재정의
//Point operator-(const Point& left, const Point& right) {
//	return Point(left.x - right.x, left.y - right.y);
//}
//
//int main() {
//	Point vec1 = Point(2, 2);
//	Point vec2 = Point(2, 4);
//	
//	cout << "vec1 x: " << vec1.x << ", y: " << vec1.y << endl;
//	cout << "vec2 x: " << vec2.x << ", y: " << vec2.y << endl;
//
//	Point add = vec1 + vec2;
//	Point sub = vec1 - vec2;
//
//	cout << "add x: " << add.x << ", y: " << add.y << endl;
//	cout << "sub x: " << sub.x << ", y: " << sub.y << endl;
//
//	Point eq = vec1 == vec2;
//	cout << "vec1 x == vec2 x: " << (eq.x ? "true" : "false") << ", vec1 y == vec2 y: " << (eq.y ? "true" : "false") << endl;
//
//	/*StringBuilder sb = StringBuilder();
//	sb.Append("IP : ").Append("8.8.8.8").Append(" ")
//		.Append("PORT : ").Append("5555").Append(" ")
//		.Append("ID : ").Append("admin").Append(" ")
//		.Append("PASS : ").Append("1234");
//
//	string str = sb.ToString();*/
//
//	//cout << "sb result : " << str << endl;
//
//	return 0;
//}