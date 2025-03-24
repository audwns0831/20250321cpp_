#include "Dummy.h"

void Dummy::Print()
{
	cout << "num = " << num << ", name = " << name << endl;
}

void Dummy::SetData(int idx, string n)
{
	// 클래스 멤버변수에 세팅
	num = idx;
	name = n;
}

