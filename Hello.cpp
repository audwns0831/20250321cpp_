#include "header.h"
#include <string>

using namespace std;

// <define>
// define ���ù��� ������ �ĺ��ڸ� ������ �������� ��ü�ϴ� ��ũ��
// �ݺ��ؼ� �ۼ��� ������ ��ü�ϱ� ���� ���
// �ܼ� ��ü�̱� ������ ��ȣ, �����ݷ� ��뿡 ����

//#define SIZE 1024
//#define HELLO(text) std::cout << "Hello" << text << std::endl

int main_Hello() {

    // <ǥ�������>
    // �ܼ�	: ��ǻ�Ϳ� ����ڰ� �����ϱ� ���� ����, c++���� iostream�� ������� �����Ǿ�����
    // cin 	: �ܼ� �Է��� ����
    // cout	: �ܼ� ����� ����
    // endl	: �ٹٲ�
    // getline : �ܼ� �Է�(���鰪 ����)
    cout << "�����" << endl;

    //HELLO("�׽�Ʈ");

    cout << "�ܼ��� ���� �Է��� �����մϴ�." << endl;
    cout << "�Է� : ";

    string str;
    //cin.getline(str, 100);
    cin >> str;

    cout << "�Է��� ������ " << str << " �Դϴ�." << endl;
    return 0;
}