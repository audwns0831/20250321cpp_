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
	// STL�� �پ��� �ڷ������� ����� �� �ֵ��� ���� �Լ� ���ø��̳� Ŭ���� ���ø��� ���ʰ� �ȴ�
	
	// ���� ����Ʈ(Linked List)
	// � ������ ���(���� ��� Node)�� ������ �� �� ���� ������ �ڷᰡ �ִ� ��ġ�� �����Ϳ� ���Խ�Ű�� ������� �ڷḦ ����
	// �����Ͱ� �߰�/������ ���� �߻��ϴ� ��� ���Ḯ��Ʈ�� ����ϸ� ����.
	// �̱� ���Ḯ��Ʈ : next�����͸� ����
	// ���� ���Ḯ��Ʈ : next�����Ϳ� prev�����͸� ����
	// ���� ���� ���� ����Ʈ : ���� ���Ḯ��Ʈ�� ������ ���������� ������ ����� next�����Ͱ� �����(�� �� ���)�� ����Ŵ

	// ����Ʈ ����
	//list<int> temp;

	//// push_back -> �ڿ��� �� �ֱ�
	//for (int i = 0; i < 10; i++) {
	//	temp.push_back(i);
	//}

	//// push_front -> �տ��� �� �ֱ�
	//for (int i = 0; i < 10;i++) {
	//	temp.push_front(i);
	//}

	//// insert(�ε���, ��) -> ������ ��ġ�� ���ֱ�
	//auto index = ++temp.begin();
	//temp.insert(index, -1);

	//for (int a : temp) {
	//	cout << a << " ";
	//}
	//cout << endl;

	//// �� �� ���� �����ϱ�
	//temp.pop_front();

	//// �� �� ���� �����ϱ�
	//temp.pop_back();

	// �迭
	// ������� ��ȣ�� �پ��ִ� ���� Ÿ���� ���ҵ��� �������� ���·� ������ ����
	// �� ���ҿ� ���� ��ȣ�� �ε������ �θ�
	// Ž���� ���� ��� �迭�� ����ϴ°� ����. (���Ḯ��Ʈ�� �ݴ�)

	// �迭����
	/*int temp[10];
	for (int i = 0; i < 10; i++) {
		temp[i] = i;
	}

	for (int a : temp) {
		cout << a << " ";
	}
	cout << endl;*/

	// vector STL ǥ�������̳� �� �ϳ�
	// �������� ��Ҹ� �Ҵ� �� �� �ִ� �����迭
	// �ߺ��� ����ϸ�, ������ �ְ�, ���� ������ �����ϴ�.

	/*
	* ���� ����Ʈ(Sequential List)
	* ��Ÿ�� �� ũ�⸦ Ȯ���� �� �ִ� �迭����� �ڷᱸ��
	* �迭 ����� ������ Ư���� �� ���� ��� ��뿡 ����
	* 
	*/

	//// ��������Ʈ ����
	//vector<string> container = vector<string>(3);
	//container[0] = "�⺻ ������ 0";
	//container[1] = "�⺻ ������ 1";
	//container[2] = "�⺻ ������ 2";

	//// �߰�
	//container.push_back("�߰� ������ 0");
	//container.push_back("�߰� ������ 1");
	//container.push_back("�߰� ������ 2");
	//container.push_back("�߰� ������ 3");

	//// ��ȸ
	//for (int i = 0; i < container.size(); i++) {
	//	cout << container[i] << endl;
	//}

	//// ����
	//container.pop_back();

	// ���� (LIFO : Last In First Out)
	//  ���� ���������� ���� ���Ұ� ���� ���� ������ �ڷ� ����

	// stack ����
	//stack<int> stk;

	//// ��� ����
	//for (int i = 0; i < 10; i++) {
	//	stk.push(i);
	//}

	//while (stk.size()) {
	//	cout << stk.top() << " ";
	//	stk.pop();
	//}


	// ť (FIFO : First In First Out)
	// ���� ���� ������ ��Ұ� ���� ���� ������ �ڷᱸ��
	 
	//// queue ����
	//queue<int> que;

	//// ��� �߰�
	//for (int i = 0; i < 10; i++) {
	//	que.push(i);
	//}

	//while (que.size()) {
	//	cout << que.front() << " ";
	//	que.pop();
	//}

	// ��(Heap)
	// ���� ����Ʈ�� ����� �ڷᱸ���� �ִ밪�� �ּҰ��� ������ ã������ ��ȵ�
	// �ּ����� �ִ����� ����
	// �ִ��� - ��Ʈ��忡 �ִ� Ű�� ��� �ڽĿ� �ִ� Ű �߿��� ���� Ŀ�� ��
	// �ּ��� - ��Ʈ��忡 �ִ� Ű�� ��� �ڽĿ� �ִ� Ű �߿��� ���� �۾ƾ���

	// �켱���� ť(Priority Queue)
	// �켱���� ��⿭�̶�� ��
	// ��⿭���� �켱������ ���� ��Ұ� �켱������ ���� ��Һ��� ���� �����Ǵ� �ڷᱸ��
	// �켱���� ť�� heap�� ������� ������

	
	//vector<int> v;
	//
	//// 1. �ִ��� : make_heap(����, ��) -> vector�� �ִ��� ������ ����
	//v = { 10, 20, 30, 40, 50, 60 };
	//make_heap(v.begin(), v.end());
	//print_heap(v);

	//// 2. �ּ��� : make_heap(����, ��, �Լ�) -> �ּ��� ������  ����
	//v = { 10, 20, 30, 40, 50, 60 };
	//make_heap(v.begin(), v.end(), greater<int>());
	//print_heap(v);

	//// 3. ��� ���� : pop_heap(����, ��);
	//v = { 10, 20, 30, 40, 50, 60 };
	//pop_heap(v.begin(), v.end());
	//print_heap(v);

	//// 4. heap ���� : sort_heap(����, ��)
	//v = { 10, 20, 30, 40, 50, 60 };
	//make_heap(v.begin(), v.end());
	//sort_heap(v.begin(), v.end());
	//print_heap(v);

	/*
	* ���� �����̳� : �����͸� ������� ���� (vector, deque, list ��)
	* ���� �����̳� : Ű-�� �� �Ǵ� ���ĵ� ������ ����(map, set ��)
	* �����̳� ����� : Ư�� ������� �����͸� ���� (stack, queue ��)
	*/

	/*
	* ��(Map)
	* Ư�� ������ ���� Ű�� ���ε� ���� �������� ������ �ڷᱸ���� map�� key�� �����ϴ�. (�ߺ� ���x)
	* ���� key���� ���� ���Ҹ� �����ϰ� �ʹٸ� multimap�� ����Ѵ�.
	* map �� �ؽ� ���̺��� ������ �� ����ϸ� ������ �������� ���� unordered_map�� ����
	* key �� �̿��Ͽ� value�� ������ �˻��� �� �ִ� ���� �����̳ʴ�.
	* �⺻���� : map<key, value>
	* #include <map>
	*/

	// 1. map ����
	//map<string, int> m;
	//string keys[3] = { "Dabid", "Paul", "Kevin" };

	//// 2. map�� ��� ����
	//m.insert({ keys[0], 26 });			// 1) {key, value} �̿�
	//m.insert(make_pair(keys[1], 25));	// 2) pair ��ü �̿�
	//m[keys[2]] = 27;					// 3) [key] = value �̿�(�ε���)
	//
	//for (int i = 0; i < m.size(); i++) {
	//	cout << keys[i] << " : " << m[keys[i]] << " ";
	//}
	//cout << endl;

	//// 3. ��� �����ϱ�
	//m[keys[2]] = 29; // kevin�� value = 27 -> 29 ����

	//// 4. map���� ��� Ȯ���ϱ�
	//if (m.find("Smith") != m.end()) {
	//	cout << "Find" << endl;
	//}
	//else {
	//	cout << "Not Found" << endl;
	//}

	//// 5. iterator ����Ͽ� ��� ���
	//map<string, int>::iterator iter;
	//for (iter = m.begin(); iter != m.end(); iter++) {
	//	cout << iter->first << " : " << iter->second << " ";
	//}
	//cout << endl;

	//iter = m.find("Kevin");		// Ű���� Kevin�� ��� ã��
	//cout << iter->first << " : " << iter->second << endl;

	//// 6. map ��� ����

	//// 1) ��� ����
	//m.erase(++m.begin());
	//for (auto i : m) {
	//	cout << i.first << " : " << i.second << " ";
	//}
	//cout << endl;

	//// 2) Ű�� �������� ����
	//m.erase("Paul");
	//for (auto i : m) {
	//	cout << i.first << " : " << i.second << " ";
	//}
	//cout << endl;

	//// 3) erase�� �̿��� ��� ��� ����
	//m.erase(m.begin(), m.end());
	//for (auto i : m) {
	//	cout << "3. " << i.first << " : " << i.second << " ";
	//}
	//cout << endl;

	//// 4) clear �Լ��� �̿��� ��� ��� ����
	//m.clear();

	// unordered_map (���ĵ��� ���� ��)
	// map�� �⺻������ ����(key����)�� �����ϱ� ������ �����Ͱ� Ŭ ���� ����ð��� ����� �������.
	// ���� ������ �������� �ʴ� unordered_map�� ���� ���� �ִ�.
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
	//// 1. ��һ���
	//for (int i = 0; i < 6; i++) {
	//	pq1.push(random_num[i]);
	//}
	//print_queue(pq1);

	//// 2. �ּ� �켱���� ť
	//// priority_queue<�ڷ���, ����ü, �񱳿�����> ���� greater �̿��ؼ� ���� int���� �켱���� ����
	//priority_queue<int, vector<int>, greater<int>> pq2;
	//for (int i = 0; i < 6; i++) {
	//	pq2.push(random_num[i]);
	//}
	//print_queue(pq2);

	// set
	// Ư�� ������ ���� ������ ��Ҹ� �����ϴ� �����̳ʷ�, �ߺ��� ������� �ʴ´�.
	// Map�� �����ϳ� key���� �����ϴ� ���� �����̳ʴ�
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
