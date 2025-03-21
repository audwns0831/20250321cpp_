#include <iostream>

using namespace std;

/*
* 함수 (Function)
* 미리 정해진 동작을 수행하는 코드 묶음
* 어떤 처리를 미리 함수로 만들어 두면 다시 반복적으로 사용 가능
*/

// <함수 구성>
// 반환형 함수이름 (매개변수 목록) { 함수 내용 }
void Func1(){}
int Add(int left, int right) { return left + right;  }

int Sub(int left, int right) { 
	int ReturnNum = left - right;
	return ReturnNum;
}

// <함수 오버로딩>
// 같은 이름의 함수를 매개변수를 달리하여 다른 함수로 재정의 하는 기술
int Multi(int left, int right) { return left * right;  }
float Multi(float left, float right) { return left * right;  }
double Multi(double left, double right) { return left * right; }

// <인라인 함수>
// 함수의 호출과정에서 발생하는 오버헤드를 줄이기 위해 함수의 모든 코드를 호출된 자리에 바로 삽입하는 방식의 기술
// 이는 반복적인  호출에서 걸리는 시간을 절약할 수 있으나, 함수 호출 과정으로 생기는 이점을 포기하게됨
// 따라서 코드가 매우 간단하며 잦은 호출이 있는 함수만을 인라인 함수로 선언하는 것이 좋음
// 참고 : 인라인 함수를 알고 있어야 하지만 최신 컴파일러는 함수를 적절하게 인라인화 하므로 대부분 inline 키워드를 사용할 필요는 없다.
inline int Bigger(int left, int right) { return left > right ? left : right; }

// <함수 전방선언>
// 함수를 구현하기 전에 함수의 선언만 우선 진행하는 기법
// 컴파일 시 함수의 호출은 함수의 구현을 필요로 하며 구현이 없는 경우는 사용 불가
// 전방 선언을 진행하는 경우 함수의 구현을 호출 이후에 진행하도록 구현 가능
int Func0_1(int param1, int param2 = 10) { return param1 + param2; }
void Func0_2(int a) { } // error : 링크 에러 - 전방선언이 있지만 함수의 구현이 없는 경우 발생
 
int main_func() {
	int ret = Add(1, 2);

	cout << ret << endl;

	int Value1 = Sub(30, 10);
	int Value2 = Sub(50, 10);

	cout << "Value1 : " << Value1 << endl;
	cout << "Value2 : " << Value2 << endl;

	cout << Multi(5, 3) << endl;		// int
	cout << Multi(5.1f, 3.2f) << endl;	// float
	cout << Multi(3.1, 3.2) << endl;	// double

	cout << Bigger(10, 5) << endl;

	Func0_1(5, 20);
	// Func0_3(); // error : 컴파일 에러 - 함수의 호출이 함수의 구현보다 먼저 진행되는 경우 발생

	return 0;
}

void Func0_3() {};
