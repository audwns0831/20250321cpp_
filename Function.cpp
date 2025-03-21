#include <iostream>

using namespace std;

/*
* �Լ� (Function)
* �̸� ������ ������ �����ϴ� �ڵ� ����
* � ó���� �̸� �Լ��� ����� �θ� �ٽ� �ݺ������� ��� ����
*/

// <�Լ� ����>
// ��ȯ�� �Լ��̸� (�Ű����� ���) { �Լ� ���� }
void Func1(){}
int Add(int left, int right) { return left + right;  }

int Sub(int left, int right) { 
	int ReturnNum = left - right;
	return ReturnNum;
}

// <�Լ� �����ε�>
// ���� �̸��� �Լ��� �Ű������� �޸��Ͽ� �ٸ� �Լ��� ������ �ϴ� ���
int Multi(int left, int right) { return left * right;  }
float Multi(float left, float right) { return left * right;  }
double Multi(double left, double right) { return left * right; }

// <�ζ��� �Լ�>
// �Լ��� ȣ��������� �߻��ϴ� ������带 ���̱� ���� �Լ��� ��� �ڵ带 ȣ��� �ڸ��� �ٷ� �����ϴ� ����� ���
// �̴� �ݺ�����  ȣ�⿡�� �ɸ��� �ð��� ������ �� ������, �Լ� ȣ�� �������� ����� ������ �����ϰԵ�
// ���� �ڵ尡 �ſ� �����ϸ� ���� ȣ���� �ִ� �Լ����� �ζ��� �Լ��� �����ϴ� ���� ����
// ���� : �ζ��� �Լ��� �˰� �־�� ������ �ֽ� �����Ϸ��� �Լ��� �����ϰ� �ζ���ȭ �ϹǷ� ��κ� inline Ű���带 ����� �ʿ�� ����.
inline int Bigger(int left, int right) { return left > right ? left : right; }

// <�Լ� ���漱��>
// �Լ��� �����ϱ� ���� �Լ��� ���� �켱 �����ϴ� ���
// ������ �� �Լ��� ȣ���� �Լ��� ������ �ʿ�� �ϸ� ������ ���� ���� ��� �Ұ�
// ���� ������ �����ϴ� ��� �Լ��� ������ ȣ�� ���Ŀ� �����ϵ��� ���� ����
int Func0_1(int param1, int param2 = 10) { return param1 + param2; }
void Func0_2(int a) { } // error : ��ũ ���� - ���漱���� ������ �Լ��� ������ ���� ��� �߻�
 
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
	// Func0_3(); // error : ������ ���� - �Լ��� ȣ���� �Լ��� �������� ���� ����Ǵ� ��� �߻�

	return 0;
}

void Func0_3() {};
