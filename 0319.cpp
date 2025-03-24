#include <iostream>
#include <string>

using namespace std;
//testest
int main_0319() {

	
	///**1������**/
	//int iValue = 42;
	//float fValue = 3.14f;
	//double dValue = 5.6789;
	//char cValue = 'A';

	//cout << "int ���� : " << iValue << endl;
	//cout << "float ����: " << fValue << endl;
	//cout << "double ����: " << dValue << endl;
	//cout << "char ����: " << cValue << endl;	

	///**2������**/
	//short x = 100;
	//long y = x;

	//cout << "short ����x: " << x << endl;
	//cout << "long ����y: " << y << endl;

	///**3������**/
	//const int MAX = 500;
	//cout << "const int ���: " << MAX << endl;

	//// MAX = 1000; // error, const �� ������ �� ���� read-only �����̱� ����

	// ���� 1������
	int a = 10;
	int b = 20;
	cout << "1. a + b : " << (a + b) << endl;
	cout << "2. a - b : " << (a - b) << endl;
	cout << "3. a * b : " << (a * b) << endl;
	cout << "4. a / b : " << (float)a / (float)b << endl;
	a = b + 5;
	cout << "5. a = b + 5 : " << a << endl;

	// ���� 2�� ����
	int x = 5;
	int y = 10;
	bool aBool = x > y;
	bool bBool = x == y;
	bool cBool = x <= y;

	cout << "1. x > y : " << (x > y) << endl;
	cout << "2. x == y : " << (x == y) << endl;
	cout << "3. x <= y : " << (x <= y) << endl;

	
	// ���� 3�� ����
	x = true;
	y = false;
	//bool x = true;
	//bool y = false;

	cout << "1. Not���� : x : " << !(x) << ", y : " << !(y) << endl;
	cout << "1. And���� : x && y = " << (x && y) << endl;
	cout << "1. Or���� : x || y = " << (x || y) << endl;
	cout << "1. ���Ǻο��� : false && (++x) = " << (false && (++x)) << ", true || (++y) = " << (true || (++y)) << ", x = " << x << ", y = " << y << endl;


	return 0;
}