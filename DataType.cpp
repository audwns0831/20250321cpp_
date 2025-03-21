#include "header.h"
#include <string>

using namespace std;

int main_DataType() {
    /*
    *   int iValue; // 자료형 선언
    *   iValue = 10; // 초기화

    *   int iValue2 = 10; // 선언과 동시에 초기화

    *   float fValue = 0.35f; // float자료형은 수 뒤에 f추가

    *   bool isBool = false;
    *   bool bBool = false;

    *   isBool = true;

    *   isBool = false;

    *   cout << "iValue : " << iValue << endl;
    *   cout << "fValue : " << fValue << endl;

    *   const int MAX = 200;
    *   cout << "Max Value : " << MAX << endl;

    *   MAX = 20; // 상수는 데이터 변경 불가
    */

    // 명시적 형변환
    float fValue = (float)3;
    int iValue = (int)1.2;

    cout << "fValue : " << fValue << endl;
    cout << "iValue : " << iValue << endl;

    //문자열 형변환
    cout << stoi("123") << endl; // string -> int
    cout << stof("3.1") << endl; // string -> float
    cout << stod("5.4") << endl; // string -> double

    //cout << stoi("abc") << endl; // error
    
    cout << to_string(123) << endl; // 다른 자료형의 데이터를 string 자료형으로 형변환
    cout << to_string(3.1) << endl;

    //int num = 3.14;
    //cout << num << endl;

    return 0;
}
/*
* 자료형 (Data Type)
* 자료(데이터)의 형태를 지정
* 데이터가 메모리에 저장되는 형태와 처리되는 방식을 명시하는 역할
* 0과 1만으로 구성된 컴퓨터에게 여러 형태의 자료를 저장하기 위함
*/

// <자료형 종류>
/*
*   자료형 이름 		자료형 형태		    메모리 크기 		표현범위
*   -논리형-
*   bool		        논리 자료형		    1 byte			false, true
*   -정수형-
*   short			    부호 있는 정수		2 byte			-2^15 ~ +2^15 - 1 => -32,768 ~ 32,767
*   int 			    부호 있는 정수		4 byte			-2^31 ~ +2^31 - 1 => -2,147,483,647 ~ 2,147,483,647
*   long long 		    부호 있는 정수 		8 byte			-2^63 ~ +2^63 - 1 => -9,223,372,036,854,775,808 ~ 9,223,372,036,848,775,808

*   unsigned short		부호 없는 정수 		2 byte			0 ~ +2^16 -1 => 0 ~ 65,535
*   unsigned int		부호 없는 정수 		4 byte			0 ~ +2^32 -1 => 0 ~ 4,294,967,295
*   unsigned long long	부호 없는 정수 		8 byte			0 ~ +2^64 -1 => 0 ~ 18,446,744,073,709,551,615
*   -실수형-
*   float			    부동소수점 실수 	4 byte			3.4e-38 ~ 3.4e+38 => 약 소수점 7자리
*   double			    부동소수점 실수		8 byte			1.7e-308 ~ 1.7e+308 => 약 소수점 15자리
*   -문자형-
*   char 			    문자(아스키코드) 	1 byte			'a', 'b', ...
*   string			    문자열(아스키코드)	x			    "abcd","str",...

*   wchar_t			    문자(유니코드)		2 byte			L'한', L'글', ...
*   wstring			    문자열(유니코드)	x			    L"안녕하세요",...
*/

/*
* 형변환 (Casting)
* 데이터를 선언한 자료형에 맞는 형태로 변환하는 작업
* 다른 자료형의 데이터를 저장하기 위해선 형변환 과정을 거쳐야하며,
* 이 과저에서 보관할 수 없는 데이터는 버려짐
*/

// <명시적 형변환>
// 변환할 데이터의 앞에 변환할 자료형을 괄호안에 넣어 형변환 진행
// float fValue = (float)3; // 형변환을 통해 데이터 변환, 3을 float로 변환한 3.0f가 저장. 데이터의 손실이 없는 경우 묵시적 형변환을 권장
// int iValue = (int)1.2; // 1.2를 int로 변환하는 과정 중 보관할 수 없는 소수점이 버려짐. 의도하는 경우 명시적 형변환을 권장함

// <묵시적 형변환>
// 변수에 데이터를 넣는 과정에서 자료형이 다른경우 자동으로 형변환을 진행
// 이 때, 데이터의 손실을 최소화하는 방향으로 형변환을 진행
// 주의! 묵시적 형변환을 통해 데이터가 손실되는 경우를 조심해야하며 의도적인 데이터 손실의 경우 명시적 형변환을 권장함

// int num1 = 3.14; // 주의! 의도하지 않은 경우 소수점 데이터의 손실을 주의해야함. 의도하는 경우 명시적 형변환을 권장함
// double num2 = 5; // 실수형 자료형이 표현할 수 있는 범위의 데이터는 손실없이 저장 가능. 데이터의 손실이 없는 경우 묵시적 형변환을 권장함