#include <iostream>

using namespace std;

int main_string() {
	/*
	* ���ڿ�
	*
	* ���ڵ��� �������� ����
	*/

	// <C��Ÿ�� ���ڿ�>
	// C��Ÿ�� ���ڿ��� ���ڹ迭�� ���� ����
	// ���ڿ��� �������� ��Ÿ���� ���� null('\0')�� ���

	// �⺻ ����
	char charArray1[] = { 'A', 'B', 'C', 'D', '\0', 'E', 'F' };
	cout << "���ڹ迭�� ǥ���� ���ڿ��� " << charArray1 << endl; // "ABCD"

	// c++ string
	// c++���� �����ϴ� ���ڿ��� �ٷ�� ���� ���
	// c��Ÿ���� ���ڹ迭���� ���� �����ϸ� ������

	// �⺻����
	string str = "ABCD";
	str = "EFGH";

	// �߰����
	const char* array = str.c_str(); // string�� c��Ÿ�� ���ڹ迭�� ��ȯ
	cout << str << endl;

	str[0] = 'a'; // ���ڿ��� n��° ��� ����
	cout << str << endl; // aFGH

	char t = str.front(); // ���ڿ� ���� �� ����
	char t1 = str.back(); // ���ڿ� ���� �� ����

	cout << "���ڿ� ���� �� ���� : " << t << endl;
	cout << "���ڿ� ���� �� ���� : " << t1 << endl;

	int count = str.length();
	int count2 = str.size();

	cout << "���ڿ� ������ : " << count << endl;
	cout << "���ڿ� ������ : " << count2 << endl;

	bool b = str.empty(); // ���ڿ��� �� ���ڿ����� Ȯ��

	cout << "���ڿ� ���� : " << b << endl;

	str += "ABC"; // ���ڿ� ���̱� aFGH + ABC
	cout << "���ڿ� ���̱� ��� : " << str << endl;
	str.append("DEF");
	cout << "���ڿ� ���̱� ��� : " << str << endl;
	str.insert(5, "To");
	cout << "���ڿ� ���̱� ��� : " << str << endl;

	str.replace(1, 3, "D"); // ���ڿ� ��ü string.replace(��ü�ϰ� ���� ���ڿ��� ��ġ, ��ü�ϰ���� ���ڿ��� ����, ���ο�ڿ�)

	string temp = "ABCDEF";
	string find_temp = "CDE";
	string replace_temp = "XXXX";

	temp.replace(temp.find(find_temp), find_temp.length(), replace_temp);
	cout << "���ڿ� replace ��� : " << temp << endl;

	temp.erase(0, 3);

	temp.clear();

	bool b1 = temp == "ABC";
	bool b2 = temp < "ABC";
	bool b3 = temp > "ABC";
	bool b4 = str.compare("ABC");

	cout << "b1:  " << b1 << endl;
	cout << "b2:  " << b2 << endl;
	cout << "b3:  " << b3 << endl;
	cout << "b4:  " << b4 << endl;


	string str1 = "apple";
	string str2 = "banana";
	int result = str1.compare(str2);

	// �������� ��
	if(result == 0) {
		cout << "equal " << endl;
	} else if (result < 0) {
		cout << "str1 is less than str2" << endl;
	} else if (result > 0) {
		cout << "str1 is greater than str2" << endl;
	}else {
	cout << "others" << endl;
	}

	int size1 = str1.length();
	int size2 = str2.length();

	// ������ ��
	if (size1 == size2) {
		cout << "equal" << endl;
	}
	else if (size1 > size2) {
		cout << "size1 less than" << endl;
	}
	else {
		cout << "size greater" << endl;
	}

	return 0;
}