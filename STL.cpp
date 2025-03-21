#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;


//void print_heap(vector<int> v) {
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;
//}
//void print_queue(priority_queue<int> pq) {
//	while (pq.size()) {
//		cout << pq.top() << " ";
//		pq.pop();
//	}
//	cout << endl;
//}
//void print_queue(priority_queue<int, vector<int>, greater<int>> pq) {
//	while (pq.size()) {
//		cout << pq.top() << " ";
//		pq.pop();
//	}
//	cout << endl;
//}


int main_STL() {

	// Standard Templage Library STL
	// STL은 다양한 자료형으로 사용할 수 있도록 만든 함수 템플릿이나 클래스 템플릿이 기초가 된다
	
	// 연결 리스트(Linked List)
	// 어떤 데이터 덩어리(이하 노드 Node)를 저장할 때 그 다음 순서의 자료가 있는 위치를 데이터에 포함시키는 방식으로 자료를 저장
	// 데이터가 추가/삭제가 많이 발생하는 경우 연결리스트를 사용하면 좋다.
	// 싱글 연결리스트 : next포인터만 가짐
	// 이중 연결리스트 : next포인터와 prev포인터를 가짐
	// 원형 이중 연결 리스트 : 이중 연결리스트와 동일한 형태이지만 마지막 노드의 next포인터가 헤드노드(맨 앞 노드)를 가리킴

	// 리스트 선언
	//list<int> temp;

	//// push_back -> 뒤에서 값 넣기
	//for (int i = 0; i < 10; i++) {
	//	temp.push_back(i);
	//}

	//// push_front -> 앞에서 값 넣기
	//for (int i = 0; i < 10;i++) {
	//	temp.push_front(i);
	//}

	//// insert(인덱스, 값) -> 지정한 위치에 값넣기
	//auto index = ++temp.begin();
	//temp.insert(index, -1);

	//for (int a : temp) {
	//	cout << a << " ";
	//}
	//cout << endl;

	//// 맨 앞 원소 제거하기
	//temp.pop_front();

	//// 맨 뒤 원소 제거하기
	//temp.pop_back();

	// 배열
	// 순서대로 번호가 붙어있는 같은 타입의 원소들이 연속적인 형태로 구성된 구조
	// 각 원소에 붙은 번호를 인덱스라고 부름
	// 탐색이 많을 경우 배열을 사용하는게 좋다. (연결리스트와 반대)

	// 배열선언
	/*int temp[10];
	for (int i = 0; i < 10; i++) {
		temp[i] = i;
	}

	for (int a : temp) {
		cout << a << " ";
	}
	cout << endl;*/

	// vector STL 표준컨테이너 중 하나
	// 동적으로 요소를 할당 할 수 있는 동적배열
	// 중복을 허용하며, 순서가 있고, 랜덤 접근이 가능하다.

	/*
	* 순차 리스트(Sequential List)
	* 런타임 중 크기를 확장할 수 있는 배열기반의 자료구조
	* 배열 요소의 갯수를 특정할 수 없는 경우 사용에 용이
	* 
	*/

	//// 순차리스트 생성
	//vector<string> container = vector<string>(3);
	//container[0] = "기본 데이터 0";
	//container[1] = "기본 데이터 1";
	//container[2] = "기본 데이터 2";

	//// 추가
	//container.push_back("추가 데이터 0");
	//container.push_back("추가 데이터 1");
	//container.push_back("추가 데이터 2");
	//container.push_back("추가 데이터 3");

	//// 순회
	//for (int i = 0; i < container.size(); i++) {
	//	cout << container[i] << endl;
	//}

	//// 삭제
	//container.pop_back();

	// 스택 (LIFO : Last In First Out)
	//  가장 마지막으로 들어가는 원소가 가장 먼저 나오는 자료 구조

	// stack 선언
	//stack<int> stk;

	//// 요소 삽입
	//for (int i = 0; i < 10; i++) {
	//	stk.push(i);
	//}

	//while (stk.size()) {
	//	cout << stk.top() << " ";
	//	stk.pop();
	//}


	// 큐 (FIFO : First In First Out)
	// 가장 먼저 삽입한 요소가 가장 먼저 나오는 자료구조
	 
	//// queue 선언
	//queue<int> que;

	//// 요소 추가
	//for (int i = 0; i < 10; i++) {
	//	que.push(i);
	//}

	//while (que.size()) {
	//	cout << que.front() << " ";
	//	que.pop();
	//}

	// 힙(Heap)
	// 완전 이진트리 기반의 자료구조로 최대값과 최소값을 빠르게 찾기위해 고안됨
	// 최소힙과 최대힙이 존재
	// 최대힙 - 루트노드에 있는 키는 모든 자식에 있는 키 중에서 가장 커야 함
	// 최소힙 - 루트노드에 있는 키는 모든 자식에 있는 키 중에서 가장 작아야함

	// 우선순위 큐(Priority Queue)
	// 우선순위 대기열이라고도 함
	// 대기열에서 우선순위가 높은 요소가 우선순위가 낮은 요소보다 먼저 제공되는 자료구조
	// 우선순위 큐는 heap을 기반으로 구현됨

	
	//vector<int> v;
	//
	//// 1. 최대힙 : make_heap(시작, 끝) -> vector를 최대힙 구조로 변경
	//v = { 10, 20, 30, 40, 50, 60 };
	//make_heap(v.begin(), v.end());
	//print_heap(v);

	//// 2. 최소힙 : make_heap(시작, 끝, 함수) -> 최소힙 구조로  변경
	//v = { 10, 20, 30, 40, 50, 60 };
	//make_heap(v.begin(), v.end(), greater<int>());
	//print_heap(v);

	//// 3. 요소 제거 : pop_heap(시작, 끝);
	//v = { 10, 20, 30, 40, 50, 60 };
	//pop_heap(v.begin(), v.end());
	//print_heap(v);

	//// 4. heap 정렬 : sort_heap(시작, 끝)
	//v = { 10, 20, 30, 40, 50, 60 };
	//make_heap(v.begin(), v.end());
	//sort_heap(v.begin(), v.end());
	//print_heap(v);

	/*
	* 순차 컨테이너 : 데이터를 순서대로 저장 (vector, deque, list 등)
	* 연관 컨테이너 : 키-값 쌍 또는 정렬된 데이터 저장(map, set 등)
	* 컨테이너 어댑터 : 특정 방식으로 데이터를 저장 (stack, queue 등)
	*/

	/*
	* 맵(Map)
	* 특정 순서에 따라 키와 매핑된 값의 조합으로 형성된 자료구조로 map의 key는 유일하다. (중복 허용x)
	* 같은 key값을 갖는 원소를 저장하고 싶다면 multimap을 사용한다.
	* map 은 해시 테이블을 구현할 때 사용하며 정렬을 보장하지 않은 unordered_map이 있음
	* key 를 이용하여 value를 빠르게 검색할 수 있는 연관 컨테이너다.
	* 기본형태 : map<key, value>
	* #include <map>
	*/

	// 1. map 선언
	//map<string, int> m;
	//string keys[3] = { "Dabid", "Paul", "Kevin" };

	//// 2. map에 요소 삽입
	//m.insert({ keys[0], 26 });			// 1) {key, value} 이용
	//m.insert(make_pair(keys[1], 25));	// 2) pair 객체 이용
	//m[keys[2]] = 27;					// 3) [key] = value 이용(인덱스)
	//
	//for (int i = 0; i < m.size(); i++) {
	//	cout << keys[i] << " : " << m[keys[i]] << " ";
	//}
	//cout << endl;

	//// 3. 요소 수정하기
	//m[keys[2]] = 29; // kevin의 value = 27 -> 29 변경

	//// 4. map에서 요소 확인하기
	//if (m.find("Smith") != m.end()) {
	//	cout << "Find" << endl;
	//}
	//else {
	//	cout << "Not Found" << endl;
	//}

	//// 5. iterator 사용하여 요소 출력
	//map<string, int>::iterator iter;
	//for (iter = m.begin(); iter != m.end(); iter++) {
	//	cout << iter->first << " : " << iter->second << " ";
	//}
	//cout << endl;

	//iter = m.find("Kevin");		// 키값이 Kevin인 요소 찾기
	//cout << iter->first << " : " << iter->second << endl;

	//// 6. map 요소 삭제

	//// 1) 요소 삭제
	//m.erase(++m.begin());
	//for (auto i : m) {
	//	cout << i.first << " : " << i.second << " ";
	//}
	//cout << endl;

	//// 2) 키값 기준으로 삭제
	//m.erase("Paul");
	//for (auto i : m) {
	//	cout << i.first << " : " << i.second << " ";
	//}
	//cout << endl;

	//// 3) erase를 이용한 모든 요소 제거
	//m.erase(m.begin(), m.end());
	//for (auto i : m) {
	//	cout << "3. " << i.first << " : " << i.second << " ";
	//}
	//cout << endl;

	//// 4) clear 함수를 이용한 모든 요소 제거
	//m.clear();

	// unordered_map (정렬되지 않은 맵)
	// map은 기본적으로 정렬(key기준)을 보장하기 때문에 데이터가 클 때는 연산시간이 상당히 길어진다.
	// 따라서 정렬을 보장하지 않는 unordered_map이 사용될 때가 있다.
	// #include <unordered_map>
	//map<string, int> m1;
	//unordered_map<string, int> m2;
	//string key[4] = { "a", "c", "d", "b" };
	//int value[4] = { 2, 1, 4, 3 };

	//for (int i = 0; i < 4; i++) {
	//	m1[key[i]] = value[i];
	//	m2[key[i]] = value[i];
	//}

	//for (auto i : m1) {
	//	cout << i.first << " : " << i.second << " ";
	//}
	//cout << endl;

	//for (auto i : m2) {
	//	cout << i.first << " : " << i.second << " ";
	//}
	//cout << endl;


	//priority_queue<int> pq1;
	//
	//int random_num[6] = { 10, 30, 40, 60, 50, 20 };
	//
	//// 1. 요소삽입
	//for (int i = 0; i < 6; i++) {
	//	pq1.push(random_num[i]);
	//}
	//print_queue(pq1);

	//// 2. 최소 우선순위 큐
	//// priority_queue<자료형, 구현체, 비교연산자> 에서 greater 이용해서 작은 int값을 우선으로 설정
	//priority_queue<int, vector<int>, greater<int>> pq2;
	//for (int i = 0; i < 6; i++) {
	//	pq2.push(random_num[i]);
	//}
	//print_queue(pq2);

	// set
	// 특정 순서에 따라 고유한 요소를 저장하는 컨테이너로, 중복을 허용하지 않는다.
	// Map과 유사하나 key값만 존재하는 연관 컨테이너다
	/*set<int> s;
	int value[6] = { 1, 4, 7, 10, 4, 4 };
	
	for (int i : value) {
		s.insert(i);
	}

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;*/

	return 0;

}
