//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
///*
//* �ൿ ����
//* - Ŀ�ǵ�(Command) : ��û�� ĸ��ȭ �Ͽ� ����ڰ� ��û�� ���� ��ü�� �и��ϰ�, ���� ����� ó���� �� �ְ� �ϴ� �ൿ ������ �����Դϴ�.
//* �� ������ ��ɰ�ü�� ����Ͽ� ��û�� ��ü�� ĸ��ȭ�ϰ�, ��û�� ȣ���ϴ� ��� ��û�� ��ü�� ó���ϴ� ����� �����մϴ�.
//*/
//
//// �ݺ���
//template <typename T>
//class Iterator {
//public:
//	virtual bool hasNext() = 0; // ���� ��Ұ� �ִ��� Ȯ��
//	virtual T next() = 0;		// ���� ��Ҹ� ��ȯ
//	virtual ~Iterator() {}
//};
//// ��ü���� �ݺ����� Ŭ����
//template <typename T>
//class ListIterator : public Iterator<T> {
//private:
//	vector<T>& list;	// Ž���� ����Ʈ
//	size_t index;		// ���� �ε���
//public:
//	ListIterator(vector<T>& list) : list(list), index(0) {}
//	virtual bool hasNext() override {
//		return index < list.size(); // ����Ʈ�� ������ ������ Ȯ��
//	}
//	virtual T next() override {
//		if (hasNext()) {
//			return list[index++]; // ���� �ε����� ��Ҹ� ��ȯ�ϰ� index ����
//		}
//		throw out_of_range("No more elements"); // �� �̻� ��Ұ� ���� ��� ����ó��
//	}
//};
//
//// List Ŭ����
//template <typename T>
//class List {
//private:
//	vector<T> items; // ����Ʈ�� ����Ǵ� ��ҵ�
//
//public:
//	void add(const T& item) {
//		items.push_back(item);
//	}
//	Iterator<T>* createIterator() {
//		return new ListIterator<T>(items);	// �ݺ��� ��ü�� ����
//	}
//};
//
//int main() {
//	List<int> list;
//
//	// ����Ʈ�� ��� �߰�
//	list.add(10);
//	list.add(20);
//	list.add(30);
//	list.add(40);
//
//	// ����Ʈ�� ���� �ݺ��� ����
//	Iterator<int>* it = list.createIterator();
//
//	// �ݺ��ڸ� ����Ͽ� ����Ʈ�� ��Ҹ� ���������� ���
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