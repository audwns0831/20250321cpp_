#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;
template<typename T>

void Func(int param) {
	int local_var = 5;
	cout << "�������� �ּ�, �� : " << &local_var << ", " << local_var << endl;
	cout << "�Ű����� �ּ�, �� : " << &param << ", " << param << endl;
}

void Func_move(int** params, int* pos, char movement, int max) {
	int new_pos[] = { pos[0], pos[1] };
	map<char, vector<int>> moves;
	char move[4] = { 'A', 'D', 'S', 'W' };
	vector<vector<int>> move_pos = {  {0,-1}, { 0,1 }, {1,0}, { -1,0 } };
	for (int i = 0; i < 4; i++) {
		moves[move[i]] = move_pos[i];
	}

	map<char, vector<int>>::iterator iter;
	for (iter = moves.begin(); iter != moves.end(); iter++) {
		//cout << iter->first << " : " << iter->second[0] << ", " << iter->second[1] << endl;;
		if (movement == iter->first) {
			new_pos[0] = new_pos[0] + iter->second[0];
			new_pos[1] = new_pos[1] + iter->second[1];
		}
	}
	
	if (new_pos[0] < 0 || max < new_pos[0] || new_pos[1] < 0 || max < new_pos[1]) {
		std::cout << "�װ����δ� ������ �� �����ϴ�." << endl;
		return;
	}
	//cout << "debug3" << endl;
	
	int tmp = params[pos[0]][pos[1]];
	params[pos[0]][pos[1]] = params[new_pos[0]][new_pos[1]];
	params[new_pos[0]][new_pos[1]] = tmp;

	//pos[0] = new_pos[0];
	//pos[1] = new_pos[1];
	*pos = new_pos[0];
	*(pos + 1) = new_pos[1];
}

bool Func_correct(int** cor, int** puzzle, int size) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (cor[i][j] == puzzle[i][j]) {
				count++;
			}
		}
	}
	//cout << "count ���� : " << count << endl;
	return count == size * size;
}

void print_puzzle(int** puzzle, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << setw(2) << puzzle[i][j] << " ";
		}
		std::cout << endl;
	}
}
int main_0321() {

	/*
	* �����������
	* 1. ����ڷκ��� N * N ũ���� ���� ������ �Է¹޴´�.
	* 2. �� ĭ���� 1���� N * N - 1 ������ ���ڰ� �����ϰ� ��ġ�ǰ�, �ϳ��� �� ĭ(0)�� �����Ѵ�.
	* 3. ����ڴ� W,A,S,D Ű �Է��� ���� �� ĭ�� �̵���ų �� �ִ�.
	* 4. ���ڸ� �ùٸ� ����(���� -> ������, ���� -> �Ʒ���)�� �����ϸ� ������ ����ȴ�.
	* 5. 2���� �迭�� �����͸� ������ Ȱ���Ͽ� �����Ұ�.
	*
	*/
	std::cout.setf(ios::right);
	int N;
	std::cout << "Enter grid size (N) : ";
	cin >> N;
	const int LENGTH = N * N;

	int** puzzle = new int*[N];
	int** correct_puzzle = new int*[N];
	for (int i = 0; i < N; i++) {
		puzzle[i] = new int[N];
		correct_puzzle[i] = new int[N];
	}
	
	// �ߺ����� ���� ����
	srand((unsigned)time(NULL));
	vector<int> numCheck;

	int idx = 0;
	int randomNum = 0;
	randomNum = rand() % (LENGTH);
	
	while (idx < LENGTH) {
		randomNum = rand() % (LENGTH);
		auto it = find(numCheck.begin(), numCheck.end(), randomNum);
		if (it == numCheck.end()) {
			numCheck.push_back(randomNum);
			idx++;
		}
	}

	// ���� ����
	idx = 0;
	int zero[2] = { 0, 0 }; // 0 ��ġ ��ǥ
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (numCheck[idx] == 0) {
				zero[0] = i;
				zero[1] = j;
			}
			puzzle[i][j] = numCheck[idx];
			//puzzle[i][j] = idx;
			correct_puzzle[i][j] = idx++; // ������ ����迭 ����(��������)
		}
	}

	std::cout << "Inital Board " << endl;
	print_puzzle(puzzle, N);

	while (true) {
		char m;
		std::cout << "Move (W/A/S/D) : ";
		cin >> m;
		m = toupper(m);
		Func_move(puzzle, zero, m, N - 1);

		print_puzzle(puzzle, N);

		if (Func_correct(puzzle, correct_puzzle, N)) {
			std::cout << "�����Դϴ�! " << endl;
			break;
		}
	}

	return 0;
}