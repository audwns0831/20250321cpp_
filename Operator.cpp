#include <iostream>

using namespace std;

int main_oper() {
	bool bValue = false;
	int iValue = 0;
	float fValue = 0.f; // = 0.0f

	/*
	// 이진 연산자
	iValue = 1 + 3; // 4
	iValue = 3 - 1; // 2
	iValue = 4 * 2; // 8
	fValue = 5.f / 3.f; // 1.666666666666
	iValue = 13 % 3; // 1

	// 단항 연산자
	iValue = +iValue; // 0 (그저 반환하는것이기 때문)
	iValue = -iValue; // 0 (위와 동일)

	iValue = 0;

	++iValue;	// 1 (전위증가)
	iValue++;		// 1 (후위증가 다음연산에서 + 1)

	--iValue;	// 1 전위감소
	iValue--;	// 1 후위감소

	cout << iValue << endl;
	cout << fValue << endl;
	*/

	// 대입 연산
	iValue = 10;

	iValue += 5; // 15

	// 논리 연산
	bValue = !false; // Not
	bValue = true && false; // False
	bool aBool = true;
	bool bBool = false;
	bValue = aBool || bBool; // true
	bValue = true ^ false; // true

	// 조건부 논리 연산자
	iValue = 10;
	//bValue = false && (++iValue > 5); // AND 연산에서 false(zero) && (op) 일 경우 뒷연산은 아예 실행하지 않는다. 따라서 iValue 값은 그대로인 10
	cout << iValue << endl;
	cout << bValue << endl; // output 10

	// 비트 연산자
	iValue = ~0x35; // ~(비트보수) : 데이터를 비트단위로 보수연산 (보수 : 0 -> -1 , 1 -> 0)

	// 이진 연산자
	iValue = 0x11 & 0x83;
	iValue = 0x11 | 0x83;

	// 비트 시프트 연산자
	iValue = 0x20 << 2;		// << : 왼쪽의 피연산자의 비트를 오른쪽 피연산자만큼 왼쪽으로 이동
	iValue = 0x20 >> 2;		// >> : 왼쪽의 피연산자의 비트를 오른쪽 피연산자만큼 오른쪽으로 이동

	cout << "Char Size : " << sizeof(char) << " Byte" << endl;
	cout << "Short Size : " << sizeof(short) << " Byte" << endl;
	cout << "Int Size : " << sizeof(int) << " Byte" << endl;
	cout << "Long Size : " << sizeof(long long) << " Byte" << endl;
	cout << "Float Size : " << sizeof(float) << " Byte" << endl;
	cout << "Double Size : " << sizeof(double) << " Byte" << endl;


	return 0;
}

/*
* 연산자(Operator)
* 프로그래밍 언어에서는 일반적인 수학연산과 유사한 연산자들이 지원됨
* C++는 여러 연산자들을 제공하며 기본 연산을 수행할 수 있음
*/

// 산술연산자
/*
* <이진 연산자>
* iValue = 1 + 2;		// + (더하기)
* iValue = 3 - 1;		// - (빼기)
* iValue = 4 * 2;		// * (곱하기)
* fValue = 5.f / 3.f;	// / (나누기) : 주의! 5 / 3 과 같이 int의 나눗셈은 소수점을 버림
* iValue = 13 % 3;		// % (나머지) : a - (a / b) * b 와 동일
* 
* <단항 연산자>
* iValue = +iValue;		// + 단항연산자(양수)	: 값을 반환;
* iValue = -iValue;		// - 단항연산자(음수)	: 값의 마이너스를 반환;
* ++iValue;				// ++ 전위증가연산자	: 값을 1증가;
* iValue++;				// ++ 후위증가연산자	: 값을 1증가;
* --iValue;				// -- 전위감소연산자	: 값을 1 감소;
* iValue--;				// -- 후위감소연산자	: 값을 1 감소
* 
* <전위연산자와 후위연산자>
* 전위연산자 : 값을 반환하기 전에 연산
* iValue = 0;
* cout << iValue << endl;			// output : 0
* cout << ++iValue << endl;			// output : 1;
* cout << iValue << endl;			// output : 1;
* 후위연산자 : 값을 반환한 후에 연산
* iValue = 0;
* cout << iValue << endl;			// output : 0;
* cout << iValue++ << endl;			// output : 0;
* cout << iValue << endl;			// output : 1;
*/

// 대입연산자
/*
* <대입 연산자>
* iValue = 10;			// = : 오른쪽의 값을 왼쪽 변수에 대입
* <복합 대입 연산자>
* 이진 연산자(op)의 경우
* x op = y 는 x = x op y 와 동일
* iValue += 5;			// iValue = iValue + 5; 와 동일
*/

// 비교연산자
/*
* <비교 연산자>
* bValue = 3 > 1;		// >	: 왼쪽 피연산자가 더 클 경우 true
* bValue = 3 < 1;		// <	: 왼쪽 피연산자가 더 작을 경우 true
* bValue = 3 >= 1;		// >=	: 왼쪽 피연산자가 더 크거나 같을 경우 true
* bValue = 3 <= 1;		// <=	: 왼쪽 피연산자가 더 작거나 같을 경우 true
* bValue = 3 == 1;		// ==	: 두 피연산자가 같을 경우 true
* bValue = 3 != 1;		// !=	: 두 피연산자가 다를 경우 true
*/

// 논리연산자
/*
* <논리 연산자>
* bValue = !false;			// !(Not)	: 피연산자의 논리 부정을 반환
* bValue = true && false;	// &&(And)	: 두 피연산자가 모두 true일 경우 true
* bValue = true || false;	// ||(Or)	: 두 피연산자가 모두 false일 경우 false
* bValue = true ^ false;	// ^(Xor)	: 두 피연산자가 다를 경우 true
* <조건부 논리 연산자>
* 조건부 논리 And 연산자 &&
* 빠른 계산을 위해 false && x(논리자료형) 의 경우 어떠한 논리자료형이 있어도
* 결과는 항상 false이기 때문에 false && x 에서 x는 무시하게 됨
* iValue = 10;
* bValue = false && (++ivalue > 5);
* cout << iValue << endl;	// output : 10;
*/

// sizeof 연산자
/*
* <sizeof 연산자>
* 자료형의 메모리 크기를 확인할 수 있음
* cout << " char형 데이터에 할당되는 메모리의 크기는 " << sizeof(char) << " 바이트 입니다." << endl;
* cout << " short형 데이터에 할당되는 메모리의 크기는 " << sizeof(short) << " 바이트 입니다." << endl;
* cout << " int형 데이터에 할당되는 메모리의 크기는 " << sizeof(int) << " 바이트 입니다." << endl;
* cout << " long형 데이터에 할당되는 메모리의 크기는 " << sizeof(long) << " 바이트 입니다." << endl;
* cout << " float형 데이터에 할당되는 메모리의 크기는 " << sizeof(float) << " 바이트 입니다." << endl;
* cout << " double형 데이터에 할당되는 메모리의 크기는 " << sizeof(double) << " 바이트 입니다." << endl;
*/

// 연산자 우선순위
/*
* 연산자 우선순위
* 여러 연산자가 있는 식에서 우선순위가 높은 연산자가 먼저 계산
* 1. 기본 연산			:	a[i], x++, x--
* 2. 단항 연산			:	+x, -x, !x, ~x, ++x, --x, (Type)x
* 3. 곱하기 연산		:	x * y, x / y, x % y
* 4. 더하기 연산		:	x + y, x - y
* 5. 시프트 연산		:	x << y, x >> y
* 6. 비교 연산			:	x > y, x < y, x >= y, x <= y
* 7. 같음 연산			:	x == y, x != y
* 8. 논리 AND 연산		:	x & y, x && y
* 9. 논리 XOR 연산		:	x ^ y
* 10. 논리 OR 연산		:	x | y, x || y
* 11. 대입 연산			:	x = y, x op= y
*/