//#include <iostream>
//
//using namespace std;
///*
//* �Լ� ������ (Function Pointer)
//* �Լ��� �ּҸ� �����ϴ� ����
//*/
//
//// <�Լ� ������>
//// ��ȯ�� (*�Լ������ͺ����̸�) (�Ű��������);
//// �Լ������� ������ �Լ��� �ּҸ� ������ �� �ִ� ����
//// �Լ� ������ ������ �����ϴ� �Լ��� �ݵ�� ��ȯ���� �Ű������� ��ġ�ؾ���
//int _Add(int left, int right) {
//	return left + right;
//}
//
//int _Sub(int left, int right) {
//	return left - right;
//}
//void _Print(string str) {
//	cout << str << endl;
//}
//
//// <�Լ� ������ �ڷ��� ����>
//// �Լ� ������ ������ ������ typedef�Ͽ� �Ϲ� ����ó�� �������� ����
//typedef int (*CalcFunc)(int, int);
//
//// <�ݹ� �Լ�>
//// �Լ� ������ ������ �̿��Ͽ� Ư�� ���ǿ��� �����ϴ� �Լ��� ����
//// �Լ��� ȣ������ �ƴ� ������ ȣ��޴� ���
//typedef void (*Action)();
//
//void Menu() { cout << "�޴�â�� ���ϴ�" << endl; }
//void Setting() { cout << "����â�� ���ϴ�" << endl; }
//void ShutDown() { cout << "�����մϴ�" << endl; }
//
//class Button {
//	Action action;
//
//public:
//	Button(Action action) {
//		this->action = action;
//	}
//
//	void Click() {
//		if (action == nullptr) {
//			return;
//		}
//		action();
//	}
//};
//
//// �Լ� ������ ����
//// 1. �Լ� ������ �⺻ ���
//// Add�� Sub �Լ��������͸� ����Ͽ� �� ���� ������ ���� ����� ���
//typedef int (*fpAdd)(int, int);
//typedef int (*fpSub)(int, int);
//
//// 2. �Լ� ������ �迭
//// Add Sub�� ���� �ΰ��� �Լ� �����͸� �迭�� �����Ͽ� �� ���� ���� ������ ������ ���ÿ� ���
//typedef int (*fpInt)(int, int);
//
//int main() {
//
//	//int (*funcPtr)(int left, int right);
//
//	//funcPtr = _Add;
//	//cout << (*funcPtr)(10, 20) << endl;
//
//	//funcPtr = _Sub;
//	//cout << (*funcPtr)(10, 20) << endl;
//
//	//void (*funcPtr2)(string str);
//	//funcPtr2 = _Print;
//	//(*funcPtr2)("Hi");
//
//	//CalcFunc funcPtr;
//	//funcPtr = _Add;
//	//
//	//cout << funcPtr(10, 20) << endl;
//
//	//funcPtr = _Sub;
//	//cout << funcPtr(10, 20) << endl;
//
//	//Button menuBtn = Button(Menu);
//	//Button settingBtn = Button(Setting);
//	//Button exitBtn = Button(ShutDown);
//
//	//menuBtn.Click();
//	//settingBtn.Click();
//	//exitBtn.Click();
//
//	fpAdd fpAdd;
//	fpAdd = _Add;
//	cout << fpAdd(10, 20) << endl;
//
//	fpSub fpSub;
//	fpSub = _Sub;
//	cout << fpSub(30, 20) << endl;
//
//	fpInt fpInt[] = {fpAdd, fpSub};
//
//	//for (auto i : fpInt) {
//	//	cout << i(10, 5) << endl;
//	//}
//	cout << "������� : " << fpInt[0](10, 5) << endl;
//	cout << "�E����� : " << fpInt[1](10, 5) << endl;
//
//	return 0;
//}