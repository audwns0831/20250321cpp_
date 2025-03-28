//#include <iostream>
//
//using namespace std;
///*
//* 함수 포인터 (Function Pointer)
//* 함수의 주소를 저장하는 변수
//*/
//
//// <함수 포인터>
//// 반환형 (*함수포인터변수이름) (매개변수목록);
//// 함수포인터 변수는 함수의 주소를 저장할 수 있는 변수
//// 함수 포인터 변수에 저장하는 함수는 반드시 반환형과 매개변수가 일치해야함
//int _Add(int left, int right) {
//	return left + right;
//}
//
//int _Sub(int left, int right) {
//	return left - right;
//}
//void _Print(string str) {
//	cout << str << endl;
//}
//
//// <함수 포인터 자료형 정의>
//// 함수 포인터 변수의 선언을 typedef하여 일반 변수처럼 가독성을 높임
//typedef int (*CalcFunc)(int, int);
//
//// <콜백 함수>
//// 함수 포인터 변수를 이용하여 특정 조건에서 반응하는 함수를 구현
//// 함수의 호출방식이 아닌 역으로 호출받는 방식
//typedef void (*Action)();
//
//void Menu() { cout << "메뉴창을 엽니다" << endl; }
//void Setting() { cout << "설정창을 엽니다" << endl; }
//void ShutDown() { cout << "종료합니다" << endl; }
//
//class Button {
//	Action action;
//
//public:
//	Button(Action action) {
//		this->action = action;
//	}
//
//	void Click() {
//		if (action == nullptr) {
//			return;
//		}
//		action();
//	}
//};
//
//// 함수 포인터 예제
//// 1. 함수 포인터 기본 사용
//// Add와 Sub 함수의포인터를 사용하여 두 수의 덧셈과 뺄셈 결과를 출력
//typedef int (*fpAdd)(int, int);
//typedef int (*fpSub)(int, int);
//
//// 2. 함수 포인터 배열
//// Add Sub와 같은 두개의 함수 포인터를 배열에 저장하여 두 수에 대해 덧셈과 뺄셈을 동시에 출력
//typedef int (*fpInt)(int, int);
//
//int main() {
//
//	//int (*funcPtr)(int left, int right);
//
//	//funcPtr = _Add;
//	//cout << (*funcPtr)(10, 20) << endl;
//
//	//funcPtr = _Sub;
//	//cout << (*funcPtr)(10, 20) << endl;
//
//	//void (*funcPtr2)(string str);
//	//funcPtr2 = _Print;
//	//(*funcPtr2)("Hi");
//
//	//CalcFunc funcPtr;
//	//funcPtr = _Add;
//	//
//	//cout << funcPtr(10, 20) << endl;
//
//	//funcPtr = _Sub;
//	//cout << funcPtr(10, 20) << endl;
//
//	//Button menuBtn = Button(Menu);
//	//Button settingBtn = Button(Setting);
//	//Button exitBtn = Button(ShutDown);
//
//	//menuBtn.Click();
//	//settingBtn.Click();
//	//exitBtn.Click();
//
//	fpAdd fpAdd;
//	fpAdd = _Add;
//	cout << fpAdd(10, 20) << endl;
//
//	fpSub fpSub;
//	fpSub = _Sub;
//	cout << fpSub(30, 20) << endl;
//
//	fpInt fpInt[] = {fpAdd, fpSub};
//
//	//for (auto i : fpInt) {
//	//	cout << i(10, 5) << endl;
//	//}
//	cout << "덧셈결과 : " << fpInt[0](10, 5) << endl;
//	cout << "뺼셈결과 : " << fpInt[1](10, 5) << endl;
//
//	return 0;
//}