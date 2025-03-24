//#include <iostream>
//
//using namespace std;
//
//// 정적 멤버
//class StaticClass {
//public:
//	// <정적멤버변수>
//	// static 키워드가 붙은 클래스의 멤버변수
//	// 데이터 영역에 저장되며 모든 클래스가 하나의 변수를 공유하여 사용
//	// 정적 멤버 변수는 생성자에서 초기화되지 않으며, 객체 초기화에 종속되지 않아 명시적으로 클래스 외부에서 값을 할당
//	static int s_value;
//	int m_value;
//
//	// <정적멤버함수>
//	// static 키워드가 붙은 클래스의 멤버함수
//	// 인스턴스 없이 함수를 호출할 수 있는 특징이 있음
//	static void S_Function() {
//		s_value = 0;	// 정적멤버함수에서 정적멤버변수 사용가능
//		//m_value = 0;	// 정적멤버함수에서 멤버변수 사용불가
//	}
//
//	void M_Function() {
//		s_value = 0;	// 멤버함수에서 정적멤버변수 사용가능
//		m_value = 0;	// 멤버함수에서 멤버변수 사용가능
//	}
//};
//
//int StaticClass::s_value = 0;
//
//int main() {
//
//	StaticClass instance1 = StaticClass();
//	StaticClass instance2 = StaticClass();
//
//	// 정적멤버변수는 모든 인스턴스가 공유하여 사용
//	instance1.s_value = 1;
//	instance2.s_value = 2;
//	
//
//	cout << instance1.s_value << endl;
//	cout << instance2.s_value << endl;
//
//	return 0;
//}