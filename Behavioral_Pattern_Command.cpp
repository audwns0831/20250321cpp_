//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
///*
//* 행동 패턴
//* - 커맨드(Command) : 요청을 캡슐화 하여 사용자가 요청을 보낼 객체를 분리하고, 여러 명령을 처리할 수 있게 하는 행동 디자인 패턴입니다.
//* 이 패턴은 명령객체를 사용하여 요청을 객체로 캡슐화하고, 요청을 호출하는 대신 요청을 객체로 처리하는 방법을 제공합니다.
//*/
//
//// 반복자
//template <typename T>
//class Iterator {
//public:
//	virtual bool hasNext() = 0; // 다음 요소가 있는지 확인
//	virtual T next() = 0;		// 다음 요소를 반환
//	virtual ~Iterator() {}
//};
//// 구체적인 반복자의 클래스
//template <typename T>
//class ListIterator : public Iterator<T> {
//private:
//	vector<T>& list;	// 탐색할 리스트
//	size_t index;		// 현재 인덱스
//public:
//	ListIterator(vector<T>& list) : list(list), index(0) {}
//	virtual bool hasNext() override {
//		return index < list.size(); // 리스트가 끝까지 갔는지 확인
//	}
//	virtual T next() override {
//		if (hasNext()) {
//			return list[index++]; // 현재 인덱스의 요소를 반환하고 index 증가
//		}
//		throw out_of_range("No more elements"); // 더 이상 요소가 없을 경우 예외처리
//	}
//};
//
//// List 클래스
//template <typename T>
//class List {
//private:
//	vector<T> items; // 리스트에 저장되는 요소들
//
//public:
//	void add(const T& item) {
//		items.push_back(item);
//	}
//	Iterator<T>* createIterator() {
//		return new ListIterator<T>(items);	// 반복자 객체를 생성
//	}
//};
//
//int main() {
//	List<int> list;
//
//	// 리스트에 요소 추가
//	list.add(10);
//	list.add(20);
//	list.add(30);
//	list.add(40);
//
//	// 리스트에 대한 반복자 생성
//	Iterator<int>* it = list.createIterator();
//
//	// 반복자를 사용하여 리스트의 요소를 순차적으로 출력
//	while (it->hasNext()) {
//		cout << it->next() << endl;
//	}
//	cout << endl;
//
//	delete it;
//
//
//	return 0;
//}