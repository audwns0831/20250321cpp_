#include <iostream>

using namespace std;

int main_array() {

	/*
	* �迭 (Array)
	* ���� �ڷ����� ���� ������ ���������� ��ġ�Ͽ� ������ ������ ����
	* �迭�� �����ϴ� �� ������ ���(element)��� �ϸ�, ��Ұ� ���������� �� �迭�� ������
	*/

	// �迭����
	// �ڷ��� �迭 �̸�[�迭 ����]
	//const int count = 5;

	//int array[count];				// int �ڷ����� ���� 5���� ����
	//int numbers[3] = { 1, 3, 5 };	// int �ڷ����� ���� 3���� ���������� ����� ���ÿ� �ʱ�ȭ
	//int ints[] = { 5, 7, 9, 8 };	// �迭�� ���̸� �������� �ʾ����� 4���� ��������ν� ���̰� 4���� �迭�� ����

	//// <�ε��� (index)>
	//// �迭�� ��Ҹ� �����ϱ����� �������� [](����������) ������ �ε����� ���� ��ҷ� ����
	//// �ε����� 0���� �����ϸ�, ���̰� N�� �迭�� N-1���� �ε����� ����������
	//cout << "numbers �迭�� 1��° ��Ҵ� " << numbers[0] << endl;
	//cout << "numbers �迭�� 3��° ��Ҵ� " << numbers[2] << endl;

	//// �迭�� ����
	//// �迭�� ���� �ڷ����� ���������� ��ġ�ϴ� ����̹Ƿ� ��üũ�� / �ϳ��� ũ�⸦ ���� ���̸� Ȯ�� ����
	//// sizeof(�迭�̸�) / sizeof(�迭�̸�[0])
	//cout << "numbers �迭�� ���̴� " << sizeof(numbers) / sizeof(numbers[0]) << endl;

	//// �����迭
	//// �迭�� ���̴� ������ �ÿ� ������ �־�� �ϸ�, ������ �� ����
	//// ���α׷� ���� ��(��Ÿ��)�� ���� �޶��� �� �ִ� ���� ũ�⸦ ����� �� ����

	//int array1[5];

	//const int LENGTH = 5;
	//int array2[LENGTH];

	//int temp = 3;
	//// int array3[temp]; // ���Ұ�

	//// ���� �迭
	//// ���� �Ҵ��� �����ϴ� ��� ��Ÿ�ӿ� �迭�� ũ�⸦ ���ϴ� ��ŭ �� �� ����
	//// ��Ÿ�ӿ� ���� �޶��� �� �ִ� ����� ũ��� ����� �� ����
	//int size = 10;
	//int* array3 = new int[size];

	//delete[] array3;

	//// [�迭 ���� ���ǻ���]
	//// �迭�� ���̸� ���� �迭�� ���̸� ����� �ʴ� �ε����� ����ؾߵ�
	//// array[-1] = 20; // ����! ���α׷��� �ջ��ų������
	//// array[6] = 10;	// 

	//// ������ �迭
	//// �迭�� ��ҷ� �迭�� �����ϵ��� �Ͽ� ���� ������ ���� �迭ó�� ����� �� ����
	//int matrix[3][4];	// int �ڷ����� ������ 4�� ���� �迭�� 3�� ����� 12���� int�� ���� 2���� �迭 ����

	//int table[3][2] = { {0,1},{2,3},{4,5} }; // 2���� �迭 �ʱ�ȭ
	//int cube[2][3][4]; // 2 * 3 * 4 = 24 , int �ڷ��� ������ �� 24�� ���� 3�����迭

	//// �迭�� �ݺ�
	//// �迭�� �ε����� �ݺ��Ͽ� ������Ű�� ����ϴ� ��� �迭�� ��� ��Ҹ� �ݺ� �����ϴµ� ������
	//int scores[] = { 84, 92, 76, 81, 56 };
	//int length = sizeof(scores) / sizeof(scores[0]);
	//int sum = 0;

	//for (int i = 0; i < length; i++) {
	//	sum += scores[i];
	//	cout << i << "��° ���ھ� : " << scores[i] << endl;
	//}

	//cout << "total score : " << sum << endl;

	//// ������ �迭 ���
	//const int rows = 3;
	//const int cols = 4;
	//int array7[rows][cols] = {
	//	{1, 2, 3, 4},
	//	{ 5, 6, 7, 8 },
	//	{ 9, 10, 11, 12 }
	//};

	//for (int i = 0; i < rows; i++) {
	//	for (int j = 0; j < cols; j++) {
	//		cout << array7[i][j] << " ";
	//	}
	//	cout << endl;
	//}



	//int m = 6, n = 4;
	//vector< vector<int> > picture = { { 1, 1, 1, 0 }, { 1, 1, 1, 0 }, { 0, 0, 0, 1 }, { 0, 0, 0, 1 }, { 0, 0, 0, 1 }, {0, 0, 0, 1} };

	//int number_of_area = 0;
	//int max_size_of_one_area = 0;
	//int round[4] = { -1, 1, -1, 1 };

	//// m = ����, n = ����
	//for (int i = 0; i < m; i++) {
	//	for (int j = 0; j < n; j++) {
	//		int count = 0;
	//		int number = picture[i][j];
	//		if (number > 0) {
	//			for (int x = 0; x < 4; x++) {
	//				if (round[x] + i >= m || round[x] + j >= n || round[x] + i < 0 || round[x] + j < 0) {
	//					continue;
	//				}
	//				int new_i = i, new_j = j;
	//				if (x < 2) { // ��, ��
	//					new_i = round[x] + i;
	//				}
	//				else { // ��, ��
	//					new_j = round[x] + j;
	//				}
	//				if (picture[new_i][new_j] == number) {
	//					count++;
	//				}
	//			}
	//		}
	//		max_size_of_one_area = min(max_size_of_one_area, count);
	//		if (count > 0) {
	//			number_of_area++;
	//		}
	//	}
	//}
	//vector<int> answer(2);
	//answer[0] = number_of_area;
	//answer[1] = max_size_of_one_area;
	//cout << answer[0] << endl;
	//cout << answer[1] << endl;

	return 0;
}