//#include <iostream>
//
//using namespace std;
//
//// ���� ���
//class StaticClass {
//public:
//	// <�����������>
//	// static Ű���尡 ���� Ŭ������ �������
//	// ������ ������ ����Ǹ� ��� Ŭ������ �ϳ��� ������ �����Ͽ� ���
//	// ���� ��� ������ �����ڿ��� �ʱ�ȭ���� ������, ��ü �ʱ�ȭ�� ���ӵ��� �ʾ� ��������� Ŭ���� �ܺο��� ���� �Ҵ�
//	static int s_value;
//	int m_value;
//
//	// <��������Լ�>
//	// static Ű���尡 ���� Ŭ������ ����Լ�
//	// �ν��Ͻ� ���� �Լ��� ȣ���� �� �ִ� Ư¡�� ����
//	static void S_Function() {
//		s_value = 0;	// ��������Լ����� ����������� ��밡��
//		//m_value = 0;	// ��������Լ����� ������� ���Ұ�
//	}
//
//	void M_Function() {
//		s_value = 0;	// ����Լ����� ����������� ��밡��
//		m_value = 0;	// ����Լ����� ������� ��밡��
//	}
//};
//
//int StaticClass::s_value = 0;
//
//int main() {
//
//	StaticClass instance1 = StaticClass();
//	StaticClass instance2 = StaticClass();
//
//	// ������������� ��� �ν��Ͻ��� �����Ͽ� ���
//	instance1.s_value = 1;
//	instance2.s_value = 2;
//	
//
//	cout << instance1.s_value << endl;
//	cout << instance2.s_value << endl;
//
//	return 0;
//}