#include "Dummy.h"

void Dummy::Print()
{
	cout << "num = " << num << ", name = " << name << endl;
}

void Dummy::SetData(int idx, string n)
{
	// Ŭ���� ��������� ����
	num = idx;
	name = n;
}

