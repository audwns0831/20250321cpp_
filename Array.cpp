#include <iostream>

using namespace std;

int main_array() {

	/*
	* 배열 (Array)
	* 같은 자료형의 여러 변수를 연속적으로 배치하여 저장한 데이터 유형
	* 배열을 구성하는 각 변수를 요소(element)라고 하며, 요소가 연속적으로 모여 배열을 구성함
	*/

	// 배열선언
	// 자료형 배열 이름[배열 길이]
	//const int count = 5;

	//int array[count];				// int 자료형의 변수 5개를 선언
	//int numbers[3] = { 1, 3, 5 };	// int 자료형의 변수 3개를 연속적으로 선언과 동시에 초기화
	//int ints[] = { 5, 7, 9, 8 };	// 배열의 길이를 지정하지 않았지만 4개를 사용함으로써 길이가 4개인 배열을 선언

	//// <인덱스 (index)>
	//// 배열의 요소를 접근하기위한 수단으로 [](하위연산자) 사이의 인덱스를 통해 요소로 접근
	//// 인덱스는 0부터 시작하며, 길이가 N인 배열은 N-1까지 인덱스를 가질수있음
	//cout << "numbers 배열의 1번째 요소는 " << numbers[0] << endl;
	//cout << "numbers 배열의 3번째 요소는 " << numbers[2] << endl;

	//// 배열의 길이
	//// 배열을 같은 자료형을 연속적으로 배치하는 방식이므로 전체크기 / 하나의 크기를 통해 길이를 확인 가능
	//// sizeof(배열이름) / sizeof(배열이름[0])
	//cout << "numbers 배열의 길이는 " << sizeof(numbers) / sizeof(numbers[0]) << endl;

	//// 고정배열
	//// 배열의 길이는 컴파일 시에 정해져 있어야 하며, 변경할 수 없음
	//// 프로그램 동작 중(런타임)에 따라 달라질 수 있는 경우는 크기를 사용할 수 없음

	//int array1[5];

	//const int LENGTH = 5;
	//int array2[LENGTH];

	//int temp = 3;
	//// int array3[temp]; // 사용불가

	//// 동적 배열
	//// 동적 할당을 진행하는 경우 런타임에 배열의 크기를 원하는 만큼 할 수 있음
	//// 런타임에 따라 달라질 수 있는 경우의 크기는 사용할 수 있음
	//int size = 10;
	//int* array3 = new int[size];

	//delete[] array3;

	//// [배열 사용시 주의사항]
	//// 배열의 길이를 사용시 배열의 길이를 벗어나지 않는 인덱스를 사용해야됨
	//// array[-1] = 20; // 주의! 프로그램을 손상시킬수있음
	//// array[6] = 10;	// 

	//// 다차원 배열
	//// 배열의 요소로 배열을 저장하도록 하여 여러 차원을 가진 배열처럼 사용할 수 있음
	//int matrix[3][4];	// int 자료형의 변수를 4개 가진 배열을 3개 만들어 12개의 int를 가진 2차원 배열 선언

	//int table[3][2] = { {0,1},{2,3},{4,5} }; // 2차원 배열 초기화
	//int cube[2][3][4]; // 2 * 3 * 4 = 24 , int 자료형 변수를 총 24개 가진 3차원배열

	//// 배열과 반복
	//// 배열의 인덱스를 반복하여 증가시키며 사용하는 경우 배열의 모든 요소를 반복 수행하는데 용이함
	//int scores[] = { 84, 92, 76, 81, 56 };
	//int length = sizeof(scores) / sizeof(scores[0]);
	//int sum = 0;

	//for (int i = 0; i < length; i++) {
	//	sum += scores[i];
	//	cout << i << "번째 스코어 : " << scores[i] << endl;
	//}

	//cout << "total score : " << sum << endl;

	//// 이차원 배열 출력
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

	//// m = 가로, n = 세로
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
	//				if (x < 2) { // 상, 하
	//					new_i = round[x] + i;
	//				}
	//				else { // 좌, 우
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