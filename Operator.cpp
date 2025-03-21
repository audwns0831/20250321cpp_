#include <iostream>

using namespace std;

int main_oper() {
	bool bValue = false;
	int iValue = 0;
	float fValue = 0.f; // = 0.0f

	/*
	// ���� ������
	iValue = 1 + 3; // 4
	iValue = 3 - 1; // 2
	iValue = 4 * 2; // 8
	fValue = 5.f / 3.f; // 1.666666666666
	iValue = 13 % 3; // 1

	// ���� ������
	iValue = +iValue; // 0 (���� ��ȯ�ϴ°��̱� ����)
	iValue = -iValue; // 0 (���� ����)

	iValue = 0;

	++iValue;	// 1 (��������)
	iValue++;		// 1 (�������� �������꿡�� + 1)

	--iValue;	// 1 ��������
	iValue--;	// 1 ��������

	cout << iValue << endl;
	cout << fValue << endl;
	*/

	// ���� ����
	iValue = 10;

	iValue += 5; // 15

	// �� ����
	bValue = !false; // Not
	bValue = true && false; // False
	bool aBool = true;
	bool bBool = false;
	bValue = aBool || bBool; // true
	bValue = true ^ false; // true

	// ���Ǻ� �� ������
	iValue = 10;
	//bValue = false && (++iValue > 5); // AND ���꿡�� false(zero) && (op) �� ��� �޿����� �ƿ� �������� �ʴ´�. ���� iValue ���� �״���� 10
	cout << iValue << endl;
	cout << bValue << endl; // output 10

	// ��Ʈ ������
	iValue = ~0x35; // ~(��Ʈ����) : �����͸� ��Ʈ������ �������� (���� : 0 -> -1 , 1 -> 0)

	// ���� ������
	iValue = 0x11 & 0x83;
	iValue = 0x11 | 0x83;

	// ��Ʈ ����Ʈ ������
	iValue = 0x20 << 2;		// << : ������ �ǿ������� ��Ʈ�� ������ �ǿ����ڸ�ŭ �������� �̵�
	iValue = 0x20 >> 2;		// >> : ������ �ǿ������� ��Ʈ�� ������ �ǿ����ڸ�ŭ ���������� �̵�

	cout << "Char Size : " << sizeof(char) << " Byte" << endl;
	cout << "Short Size : " << sizeof(short) << " Byte" << endl;
	cout << "Int Size : " << sizeof(int) << " Byte" << endl;
	cout << "Long Size : " << sizeof(long long) << " Byte" << endl;
	cout << "Float Size : " << sizeof(float) << " Byte" << endl;
	cout << "Double Size : " << sizeof(double) << " Byte" << endl;


	return 0;
}

/*
* ������(Operator)
* ���α׷��� ������ �Ϲ����� ���п���� ������ �����ڵ��� ������
* C++�� ���� �����ڵ��� �����ϸ� �⺻ ������ ������ �� ����
*/

// ���������
/*
* <���� ������>
* iValue = 1 + 2;		// + (���ϱ�)
* iValue = 3 - 1;		// - (����)
* iValue = 4 * 2;		// * (���ϱ�)
* fValue = 5.f / 3.f;	// / (������) : ����! 5 / 3 �� ���� int�� �������� �Ҽ����� ����
* iValue = 13 % 3;		// % (������) : a - (a / b) * b �� ����
* 
* <���� ������>
* iValue = +iValue;		// + ���׿�����(���)	: ���� ��ȯ;
* iValue = -iValue;		// - ���׿�����(����)	: ���� ���̳ʽ��� ��ȯ;
* ++iValue;				// ++ ��������������	: ���� 1����;
* iValue++;				// ++ ��������������	: ���� 1����;
* --iValue;				// -- �������ҿ�����	: ���� 1 ����;
* iValue--;				// -- �������ҿ�����	: ���� 1 ����
* 
* <���������ڿ� ����������>
* ���������� : ���� ��ȯ�ϱ� ���� ����
* iValue = 0;
* cout << iValue << endl;			// output : 0
* cout << ++iValue << endl;			// output : 1;
* cout << iValue << endl;			// output : 1;
* ���������� : ���� ��ȯ�� �Ŀ� ����
* iValue = 0;
* cout << iValue << endl;			// output : 0;
* cout << iValue++ << endl;			// output : 0;
* cout << iValue << endl;			// output : 1;
*/

// ���Կ�����
/*
* <���� ������>
* iValue = 10;			// = : �������� ���� ���� ������ ����
* <���� ���� ������>
* ���� ������(op)�� ���
* x op = y �� x = x op y �� ����
* iValue += 5;			// iValue = iValue + 5; �� ����
*/

// �񱳿�����
/*
* <�� ������>
* bValue = 3 > 1;		// >	: ���� �ǿ����ڰ� �� Ŭ ��� true
* bValue = 3 < 1;		// <	: ���� �ǿ����ڰ� �� ���� ��� true
* bValue = 3 >= 1;		// >=	: ���� �ǿ����ڰ� �� ũ�ų� ���� ��� true
* bValue = 3 <= 1;		// <=	: ���� �ǿ����ڰ� �� �۰ų� ���� ��� true
* bValue = 3 == 1;		// ==	: �� �ǿ����ڰ� ���� ��� true
* bValue = 3 != 1;		// !=	: �� �ǿ����ڰ� �ٸ� ��� true
*/

// ��������
/*
* <�� ������>
* bValue = !false;			// !(Not)	: �ǿ������� �� ������ ��ȯ
* bValue = true && false;	// &&(And)	: �� �ǿ����ڰ� ��� true�� ��� true
* bValue = true || false;	// ||(Or)	: �� �ǿ����ڰ� ��� false�� ��� false
* bValue = true ^ false;	// ^(Xor)	: �� �ǿ����ڰ� �ٸ� ��� true
* <���Ǻ� �� ������>
* ���Ǻ� �� And ������ &&
* ���� ����� ���� false && x(���ڷ���) �� ��� ��� ���ڷ����� �־
* ����� �׻� false�̱� ������ false && x ���� x�� �����ϰ� ��
* iValue = 10;
* bValue = false && (++ivalue > 5);
* cout << iValue << endl;	// output : 10;
*/

// sizeof ������
/*
* <sizeof ������>
* �ڷ����� �޸� ũ�⸦ Ȯ���� �� ����
* cout << " char�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(char) << " ����Ʈ �Դϴ�." << endl;
* cout << " short�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(short) << " ����Ʈ �Դϴ�." << endl;
* cout << " int�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(int) << " ����Ʈ �Դϴ�." << endl;
* cout << " long�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(long) << " ����Ʈ �Դϴ�." << endl;
* cout << " float�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(float) << " ����Ʈ �Դϴ�." << endl;
* cout << " double�� �����Ϳ� �Ҵ�Ǵ� �޸��� ũ��� " << sizeof(double) << " ����Ʈ �Դϴ�." << endl;
*/

// ������ �켱����
/*
* ������ �켱����
* ���� �����ڰ� �ִ� �Ŀ��� �켱������ ���� �����ڰ� ���� ���
* 1. �⺻ ����			:	a[i], x++, x--
* 2. ���� ����			:	+x, -x, !x, ~x, ++x, --x, (Type)x
* 3. ���ϱ� ����		:	x * y, x / y, x % y
* 4. ���ϱ� ����		:	x + y, x - y
* 5. ����Ʈ ����		:	x << y, x >> y
* 6. �� ����			:	x > y, x < y, x >= y, x <= y
* 7. ���� ����			:	x == y, x != y
* 8. �� AND ����		:	x & y, x && y
* 9. �� XOR ����		:	x ^ y
* 10. �� OR ����		:	x | y, x || y
* 11. ���� ����			:	x = y, x op= y
*/