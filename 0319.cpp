#include <iostream>
#include <string>

using namespace std;

int main_0319() {

	
	///**1번문제**/
	//int iValue = 42;
	//float fValue = 3.14f;
	//double dValue = 5.6789;
	//char cValue = 'A';

	//cout << "int 변수 : " << iValue << endl;
	//cout << "float 변수: " << fValue << endl;
	//cout << "double 변수: " << dValue << endl;
	//cout << "char 변수: " << cValue << endl;	

	///**2번문제**/
	//short x = 100;
	//long y = x;

	//cout << "short 변수x: " << x << endl;
	//cout << "long 변수y: " << y << endl;

	///**3번문제**/
	//const int MAX = 500;
	//cout << "const int 상수: " << MAX << endl;

	//// MAX = 1000; // error, const 는 변경할 수 없는 read-only 형태이기 때문

	// 연산 1번문제
	int a = 10;
	int b = 20;
	cout << "1. a + b : " << (a + b) << endl;
	cout << "2. a - b : " << (a - b) << endl;
	cout << "3. a * b : " << (a * b) << endl;
	cout << "4. a / b : " << (float)a / (float)b << endl;
	a = b + 5;
	cout << "5. a = b + 5 : " << a << endl;

	// 연산 2번 문제
	int x = 5;
	int y = 10;
	bool aBool = x > y;
	bool bBool = x == y;
	bool cBool = x <= y;

	cout << "1. x > y : " << (x > y) << endl;
	cout << "2. x == y : " << (x == y) << endl;
	cout << "3. x <= y : " << (x <= y) << endl;

	
	// 연산 3번 문제
	x = true;
	y = false;
	//bool x = true;
	//bool y = false;

	cout << "1. Not연산 : x : " << !(x) << ", y : " << !(y) << endl;
	cout << "1. And연산 : x && y = " << (x && y) << endl;
	cout << "1. Or연산 : x || y = " << (x || y) << endl;
	cout << "1. 조건부연산 : false && (++x) = " << (false && (++x)) << ", true || (++y) = " << (true || (++y)) << ", x = " << x << ", y = " << y << endl;


	return 0;
}