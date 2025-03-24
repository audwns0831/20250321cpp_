//#include <iostream>
//
//using namespace std;
//
//// 싱글톤 : 싱글톤은 말 그대로 혼자라는 뜻입니다. 클래스의 생성을 딱 1개로 정한다는 뜻
//// 따라서 해당 클래스의 객체는 static으로 생성이 됩니다.
//// 물론 여러개의 변수가 하나의 클래스를 가르킬 순 있음
//// 하지만 그 클래스의 객체가 복사가 되면 안됨. 즉, 똑같은 클래스 정보가 2개 이상 늘어나면 안됨.
//// 이렇게 클래스를 하나로만 제한해서 얻는 이익은
//
///*
//*	1. 코드의 가독성
//*	여러개의 클래스가 아닌 하나의 클래스를 독자적으로 사용하기 때문에 코드의 가독성이 올라감
//* 
//*	2. 불필요한 객체생성을 피하기위해
//*	프로그램 코드를 짜다보면 불필요한 객체를 여럿 생성하게 됩니다.
//*	예를 들면 클래스 5개가 있는데 이 5개의 클래스가 하나의 클래스에서 인스턴스를 받아서 사용한다 치면
//*	이 클래스 5개는 똑같은 역할을 하는 객체를 1개씩 총 5개 생성해야 함.
//*	몹시 불편한 방식
//* 
//*	3. 코드가 좀 더 세밀해짐
//*	싱글톤을 만들기로 마음 먹었다면 최대한 여러곳에서 사용할 수 있도록 설계를 잘 해야함
//*	그래야 의미가 있는 디자인패턴. 그렇게되면 당연히 코드의 질이 향상될 수 밖에 없음
//*	
//*/
//
//class Singleton {
//private:
//	Singleton() {}
//	Singleton(const Singleton& ref){} // 복제생성자
//	Singleton& operator = (const Singleton& ref) {} // 할당연산자
//	~Singleton() {} // 소멸자
//
//public:
//	// static 함수로 선선
//	static Singleton& GetInstatnce() {
//		static Singleton s;
//		return s;
//	}
//	float fValue = 0;
//};
//
//class Test {
//public:
//	Test() {};
//	void TestFunc() {
//		Singleton& s = Singleton::GetInstatnce();
//		cout << "Test 클래스에서 로그 호출 - 싱글톤 fvalue 값 : " << s.fValue << endl;
//	}
//};
//int main() {
//
//	Singleton& s = Singleton::GetInstatnce();
//	s.fValue = 10;
//
//	cout << "메인 함수에서 로그 호출 - 싱글톤 fvalue 값 : " << s.fValue << endl;
//
//	s.fValue = 70;
//
//	Test* t = new Test();
//	t->TestFunc();
//
//
//	return 0;
//}